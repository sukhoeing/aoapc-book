#《算法竞赛入门经典》勘误

# 关于勘误 #

下面的勘误很多来自于热心读者，再次向他们表示衷心的感谢！我并不清楚这些错误实际是在哪个版本中改正过来的，所以麻烦大家都看一下。

有发现新错误的欢迎大家在留言中指出，谢谢！

# 一些一般性的问题 #

运算符<?、>?已经被废弃，请用min、max代替（代码仓库中的代码已更新，g++ 4.6.2下编译通过）

# 重大错误 #

p24. 最后一行，“然后让`max=INF`,而`min=-INF`”应该是“然后让`max=-INF`, 而`min=INF`”。

(感谢imxivid）

p31. 习题2-2 水仙花数。定义应该是ABC=A<sup>3</sup>+B<sup>3</sup>+C<sup>3</sup>

（感谢chnln0526）

p43. 最后，判断`s[i..j]`是否为回文串的方法也不难写出：`int ok = 1; for(k = i; i<=j; i++)`应该为`for(k = i; k<=j; k++)`

(感谢imxivid）

p45. 第七行和第九行i-j+1应为i+j+1。修改后：

```
    1.      {
    2.          for (j = 0; i - j >= 0 && i + j < m; j++)
    3.          {
    4.              if (s[i - j] != s[i + j]) break;
    5.              if (j*2+1 > max) { max = j*2+1;   x = p[i - j];   y = p[i + j];}
    6.          }
    7.          for (j = 0; i - j >= 0 && i + j + 1 < m; j++)
    8.          {
    9.              if (s[i - j] != s[i + j + 1]) break;
   10.              if (j*2+2 > max)
   11.              {max = j*2+2;   x = p[i - j];   y = p[i + j + 1]; }
   12.          }
   13.      }
```

p50. 单词pig的输入方式写错了，最后少了g的输入方式，即p1i3i1g1

（感谢yszhou4tech）

p53. 例题4-1. 组合数. 输入非负整数n和m，这里的n和m写反了。应是“输入非负整数m和n”。

p54. 举例中的m和n也写反了（真是个悲剧），且C(20,1)=20。

p71. 《周期串》代码的第8行，j++应为i++。

p72. 代码的第7行，“return”改为“break”以和其他地方一致。

p74. 第9行，`s[1]=1`应为`s[3]=1`

（感谢metowolf88）

p81. k为奇数和偶数的时候，分子和分母的顺序是不一样的。正确代码为：

```
#include<stdio.h>
int main() {
  int n;
  while(scanf("%d", &n) == 1) {
    int k = 1, s = 0;
    for(;;) {
      s += k;
      if(s >= n) {
        if(k % 2 == 1)
          printf("%d/%d\n", s-n+1, k-s+n);
        else
          printf("%d/%d\n", k-s+n, s-n+1);
        break;
      }
      k++;
    }
  }
  return 0;
}
```

以及：

```
#include<stdio.h>
#include<math.h>
int main() {
  int n;
  while(scanf("%d", &n) == 1) {
    int k = (int)floor((sqrt(8.0*n+1)-1)/2 - 1e-9)+1;
    int s = k*(k+1)/2;
    if(k % 2 == 1)
      printf("%d/%d\n", s-n+1, k-s+n);
    else
      printf("%d/%d\n", k-s+n, s-n+1);
  }
  return 0;
}
```

上述代码已经更新到代码仓库中。

p83. 应为a<sup>m</sup> `*` a<sup>n</sup> = a<sup>m+n</sup>。

(感谢zr95.vip)

p85. 两张插图下面的文字“顺时针”、“逆时针”反了。

(感谢zr95.vip)

p107. dfs函数有误，应为：

```
void dfs(int x, int y) {
  if(!mat[x][y] || vis[x][y]) return;     // 曾经访问过这个格子，或者当前格子是白色
  vis[x][y] = 1;                          // 标记(x,y)已访问过
  dfs(x-1,y-1); dfs(x-1,y); dfs(x-1,y+1);
  dfs(x  ,y-1);             dfs(x  ,y+1);
  dfs(x+1,y-1); dfs(x+1,y); dfs(x+1,y+1); // 递归访问周围的八个格子
}
```
(感谢zhongying822@163.com)

p124. 图7-5最右边的有两个结点(3,1,`*`,`*`)，应该只有一个。下面一段第一行的“它只有18个结点”也应该为17个

(感谢zr95.vip, imxivid)

p130. 图7-7 的注解 最后一个state应该是(4,2,0) 而不是 (4,2,1).

(感谢chu.pang)

p134. 代码部分,`vis[36288]`应为`vis[362880]`。

（感谢lizhiwei）

P142 表格下面第一行的最后，应该是2^n

(感谢imxivid）

p152. 8.4.3【分析】情况2改为：

情况2：i和另外一人k同船。由贪心策略，j是“可以和i一起坐船的人”中最重的，因此k比j轻。把j和k交换后k所在的船仍然不会超重（因为k比j轻），而i和j所在的船也不会超重（由贪心法过程），因此所得到的新解不会更差。

(感谢zr95.vip)

p156 结论2第二行的“f(z)=f(x)+f(z)”改为f(z)=f(x)+f(y)

（感谢imxivid）

p159.【分析】一个n层数字三角形的完整路线有2<sup>n</sup>条。改为2<sup>n-1</sup>条。

（感谢imxivid）

p160. 160页的方法3

```
int d(int i, int j) {
    ....
```

会产生一个重定义错误，因为函数和数组共用了一个标识符。随便换一个数组名即可。

(感谢zhongying822@163.com)

p171. 最上面，状态转移方程第二项应为f(k+1, j)。

（感谢imxivid）

p171 最上面的状态转移方程 应该是min 而不是max。

(感谢chu.pang)

P174: 找出S中最小的i 的code 应该是 if(S & (1<<i)) 而不是 用&&.

(感谢chu.pang)

p181. 例10-2的代码段会导致无穷递归。改为：

```
int pow_mod(int a, int n, int m) {
  if(n == 0) return 1;
  int x = pow_mod(a, n/2, m);
  long long ans = (long long)x * x % m;
  if (n%2 == 1) ans = ans * a % m;
  return (int) ans;
}
```

(感谢zr95.vip)

p181. 例10-1的代码有误，改为：

```
#include<cstdio>
#include<cstring>
const int maxn = 100 + 10;

int main() {
  char n[maxn];
  int m;
  scanf("%s%d", n, &m);
  int len = strlen(n);
  int ans = 0;
  for(int i = 0; i < len; i++)
    ans = (int)(((long long)ans * 10 + n[i] - '0') % m);
  printf("%d\n", ans);
  return 0;
}
```

(感谢zr95.vip)

p185. 最下面一行 for loop 的判断应该是j<=n.

(感谢chu.pang)

p188. 中间的边乘边除，(n-i)/n前面应加上(double)强制类型转换，不然结果会变成0.

（感谢imxivid）

p200. 情况2第2行，“则T'+(u, v)”应为“则T+(u, v)”。

（感谢imxivid）

p204. 中间代码的下面第二行，因此可以用“……”应为`priority_queue<int, vector<int>, greater<int> >q`。原文多写了个`vector`。

（感谢imxivid）

p205. 下面的程序的第一个注释，应该是迭代n-1次。

（感谢imxivid）

p207. 最大流问题上面，图11-4(b)的方案并不是最优的。改成：图11-4（b）展示了一种可能的方案...

(感谢东北师大附中王玉。我还欠你一本书)

p214. 第三行，Skenia应该是Skiena

# 小错误 #

包括比较明显的笔误或者排版问题。

p2.“实验4”下方的“3+4”应为“3-4”。

(感谢zr95.vip)

p4. 例1-1【分析】中“平面几何”改成“几何”比较妥当，因为底面积算是立体几何中的概念 :)

(感谢zr95.vip)

p5. 页脚. “不信的话用gcc-ansi编译试试。”这里的gcc和减号之间应有一个空格，即gcc -ansi

p20. 程序2-4倒数第三行. printfA，多了一个A，应该是printf

p70. 样例输出中的后双引号格式有问题。

p107. 两个程序的排版都有点小问题。上面的程序，倒数第三行的最后一个dfs应和它上面那一行的最后一个dfs对齐，这样整齐一些；第二个程序最后一个右花括号}应该和上一个左花括号{对齐。

p116. 7.1.4的【分析】中“从n+1开始”应为“从S+1开始”。

(感谢zr95.vip)

p124. 插图7-4 “a)皇后的攻击范围”没有画出范围。原稿中是有的，不知怎么没印出来...

(感谢zr95.vip)

p180. 最上面，例1最后一句，“即X=-6，Y=3是6x+15y=9”，“是”应为“时”。

（感谢imxivid）

p187. 最后一段“不管是C<sub>365</sub><sup>23</sup>还是365<sup>23</sup>都无法……”应为“不管是P<sub>365</sub><sup>23</sup>还是……”。

(感谢zr95.vip)

p190. 提示10-7上面一段，1,1,2,3,5,8……这行的下一行，“第n个兔子”应为“第n个月的兔子”。

（感谢imxivid）

p201. 图11-3的标题“路经”应为“路径”。

（感谢imxivid）

p207 最大流问题的第一段最后一行，“最多可以用9个物品”应为“最多可以有9个物品”。

（感谢imxivid）

# 其他 #

p39页提到sprintf和strchr，但是只讲了sprintf。strchr的作用是在一个字符串中找一个子串，参见：

http://www.cplusplus.com/reference/clibrary/cstring/strchr/