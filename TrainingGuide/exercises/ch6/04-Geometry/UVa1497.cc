// UVa 1497（LA5719） A Letter to Programmers
// 陈锋
#include<climits>
#include<algorithm>
#include<string>
#include<cstring>
#include<iostream>
#include<cstdio>
#include<vector>
#include<cassert>
#include<cmath>
using namespace std;

const double PI = acos(-1.0);

struct Point3 {
  double x, y, z;
  Point3(double x=0, double y=0, double z=0):x(x),y(y),z(z) { }
};

typedef Point3 Vector3;
Vector3 operator + (const Vector3& A, const Vector3& B) { return Vector3(A.x+B.x, A.y+B.y, A.z+B.z); }
Vector3 operator - (const Point3& A, const Point3& B) {  return Vector3(A.x-B.x, A.y-B.y, A.z-B.z);}
Vector3 operator * (const Vector3& A, double p) {  return Vector3(A.x*p, A.y*p, A.z*p);}
Vector3 operator / (const Vector3& A, double p) {  return Vector3(A.x/p, A.y/p, A.z/p);}
double Dot(const Vector3& A, const Vector3& B) { return A.x*B.x + A.y*B.y + A.z*B.z; }
double Length(const Vector3& A) { return sqrt(Dot(A, A)); }

// 4x4齐次变换矩阵
struct Matrix4x4 {
  double v[4][4];

  // 矩阵乘法
  inline Matrix4x4 operator * (const Matrix4x4 &rhs) const {
    Matrix4x4 ans;   
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            ans.v[i][j] = 0;
            for (int k = 0; k < 4; k++)
                ans.v[i][j] += v[i][k] * rhs.v[k][j];
        }
    return ans;
  }    

  // 变换一个点，相当于右乘列向量(x, y, z, 1}
  inline Point3 transform(const Point3& P) const {
    double p[4] = {P.x, P.y, P.z, 1}, ans[4] = {0};
    for(int i = 0; i < 4; i++)
      for(int k = 0; k < 4; k++)
        ans[i] += v[i][k] * p[k];
    return Point3(ans[0], ans[1], ans[2]); // ans[3]肯定是1
  }

  // 单位矩阵
  void loadIdentity() {
    memset(v, 0, sizeof(v));
    v[0][0] = v[1][1] = v[2][2] = v[3][3] = 1;
  }

  // 平移矩阵
  void loadTranslate(double a, double b, double c) {
    loadIdentity();
    v[0][3] = a; v[1][3] = b; v[2][3] = c;
  }

  // 缩放矩阵
  void loadScale(double a, double b, double c) {
    loadIdentity();
    v[0][0] = a; v[1][1] = b; v[2][2] = c;
  }

  // 绕固定轴旋转一定角度的矩阵
  void loadRotation(double a, double b, double c, double deg) {
    loadIdentity();
    double rad = deg / 180 * PI;
    double sine = sin(rad), cosine = cos(rad);
    Vector3 L(a, b, c);
    L = L / Length(L);
    v[0][0] = cosine + L.x * L.x * (1.0 - cosine);
    v[0][1] = L.x * L.y * (1 - cosine) - L.z * sine;
    v[0][2] = L.x * L.z * (1 - cosine) + L.y * sine;
    v[1][0] = L.y * L.x * (1 - cosine) + L.z * sine;
    v[1][1] = cosine + L.y * L.y * (1 - cosine);
    v[1][2] = L.y * L.z * (1 - cosine) - L.x * sine;
    v[2][0] = L.z * L.x * (1 - cosine) - L.y * sine;
    v[2][1] = L.z * L.y * (1 - cosine) + L.x * sine;
    v[2][2] = cosine + L.z * L.z * (1 - cosine);
  }  
};

// 求幂
Matrix4x4 power(const Matrix4x4& m, int k) {
    assert(k >= 0);
    if(k == 1) return m;
    
    Matrix4x4 r;
    r.loadIdentity();
    if(k == 0) return r;
    r = power(m, k / 2);
    r = r * r;
    if(k % 2) r = r * m;
    return r;
}

int readCommand(string& cmd, vector<double>& args) {
    args.clear();
    cin>>cmd;
    double x;
    int c = 0, k = 0;
    if(cmd == "rotate") c = 4;
    else if(cmd == "translate") c = 3;
    else if(cmd == "repeat") { cin>>k; return k; }
    else if(cmd == "scale") c = 3;
    for(int i = 0; i < c; i++){ cin>>x; args.push_back(x); }       
    return k;
}

Matrix4x4 repeat(int rc) {
    string cmd; vector<double> args;
    Matrix4x4 r;
    r.loadIdentity();
    while(true)
    {
        int k = readCommand(cmd, args);
        Matrix4x4 lr;
        lr.loadIdentity();
        if(cmd == "rotate"){ lr.loadRotation(args[0], args[1], args[2], args[3]); r = lr*r; }        
        else if(cmd == "translate") { lr.loadTranslate(args[0], args[1], args[2]); r = lr*r;  }
        else if(cmd == "repeat") { r = repeat(k) * r; }
        else if(cmd == "scale") { lr.loadScale(args[0], args[1], args[2]); r = lr*r; }
        else
        {
            assert(cmd == "end");
            break;
        }
    }
    
    return power(r, rc);
}

string toStr(double d) {
    static char buf[32];
    sprintf(buf, "%0.2lf", d);
    if (!strcmp(buf, "-0.00")) return "0.00";
    return string(buf);
}

int main()
{
    int n = 0;
    while(cin>>n && n > 0) {
        Matrix4x4 m = repeat(1);
        
        for(int i = 0; i < n; i++) {
            Point3 p;
            cin>>p.x>>p.y>>p.z;
            p = m.transform(p);
            cout<<toStr(p.x)<<" "<<toStr(p.y)<<" "<<toStr(p.z)<<endl;
        }
        
        cout<<endl;
    }
}