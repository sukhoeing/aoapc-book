#《算法竞赛入门经典——训练指南》第四章基础习题简要题解

提示：以下题解可以用于任何非盈利用途，但请注明出处，一是尊重作者的劳动，二是让更多的人知道这个题解的存在，大家共同维护 :)

如果你想contribute的话，直接以留言或者email的形式把题解发给我们，或者先写一篇长长的blog，再告知链接 :)

## UVa10347 中位线(Medians) ##

[题目大意]

已知三角形的三条中位线长度，求这个三角形的面积。

[分析]

(by 陈锋)

可以在海伦公式的基础上直接推导出公式计算，详见[这里](http://jwilson.coe.uga.edu/emt725/Medians.Triangle/Area.Medians.Tri.html)。需要注意的是，输入的3个长度也必须能够形成一个合法的三角形，需做好校验。

## UVa10439 沙丘寺庙(Temple of Dune) ##

[题目大意]

给出正多边形n个顶点中的3个，求出n.

[分析]

(by 陈锋)

给定的3个点可以构造出两条边或者是对角线，其中垂线的交点即为正多边形中心。而且正n边形上点与中心连线的夹角 = 2`*`π/n的整数倍，可遍历n = 3 to 200，看看三个夹角是否符合条件即可。

## UVa10522 高度求面积(Height to Area) ##

[题目大意]

已知三角形的三条高的长度，求这个三角形的面积。

[分析]

(by 陈锋)

设对应三边为a，b，c，则面积 S = a`*`x/2 =b`*`y/2 = c`*`z/2 ---> a= 2`*`S/x b=2`*`S/y c = 2`*`S/z

同时使用海伦公式： S＝sqrt(m(m-a)(m-b)(m-c))

其中：
  * m = (a+b+c)/2 = S `*` (1/x + 1/y + 1/z）
  * m-a=S`*`(1/y + 1/z -1/x）
  * m-b=S`*`(1/x + 1/z -1/y)
  * m-c=S`*`(1/x + 1/y -1/z)
代入得 S = S `*` S `*` sqrt((1/x + 1/y+1/z)`*`(1/y+1/z-1/x)`*`(1/x +1/z-1/y)`*`(1/x + 1/y-1/z))，于是有S = 1 / (sqrt(( 1/x + 1/y+1/z)`*`(1/y+1/z-1/x)`*`(1/x +1/z-1/y)`*`(1/x + 1/y-1/z)))

在计算的过程中，需要注意，在调用sqrt之前，需要判断参数是否<0，如果是，则表示输入数据无效。

## UVa10566 交叉的梯子(Crossed Ladders) ##

[题目大意]

如下图，已知x, y, c，求?的长度。

![http://uva.onlinejudge.org/external/105/p10566.gif](http://uva.onlinejudge.org/external/105/p10566.gif)

[分析]

(by 陈锋)

设交点距左面墙距离为u，所求宽度为w，则根据相似三角形的比例公式有：

> (w-u) / w = c / sqrt(x<sup>2</sup> - w<sup>2</sup>) , u / w = c / sqrt(y<sup>2</sup> - w<sup>2</sup>)

---> 1/sqrt(x<sup>2</sup> - w<sup>2</sup>) + 1/sqrt(y<sup>2</sup> - w<sup>2</sup>) - 1/c = 0

---> c/sqrt(x<sup>2</sup> - w<sup>2</sup>) + c/sqrt(y<sup>2</sup> - w<sup>2</sup>) - 1 = 0

这个方程在w > 0的范围是严格单调递增的，可用二分法求根。

## UVa11437 三角形趣题(Triangle Fun) ##

[题目大意]

给定三角形ABC，在边BC, CA, AB上分别取点D, E, F，使得CD=2BD, AE=2CE, BF=2AF。求三角形PQR的面积。
![http://uva.onlinejudge.org/external/114/p11437.jpg](http://uva.onlinejudge.org/external/114/p11437.jpg)

[分析]

(by 陈锋)

按照题意依次求出D, E, F, P, Q, R几个点的坐标，然后求出PQ，PR两个向量的叉积的绝对值除以2即可。

## UVa11800 形状(Determine the Shape) ##

[题目大意]

给平面上四个点，没有三点共线。你的任务是判断这四个点能组成怎样的四边形。如果能组成正方形，输出Square；否则，如果能组成矩形，输出Rectangle。其他形状按照顺序依次为：菱形（Rhombus）、平行四边形（Parallelogram）、梯形（Trapezium）、普通四边形（Ordinary Quadrilateral）

[分析]

(by 陈锋)

首先对输入的4个点求其点集凸包，一是可以进行排序；二是看看输出的凸包中是几个点，如果个数<4，则说明输入的不是凸四边形，直接输出"Ordinary Quadrilateral"即可。
然后依次判断：
  1. 首先使用点积判断如果有3个角都为直角，则说明是矩形；其中如果相邻边的长度相等，就是正方形；
  1. 其次如果相对边的向量相等，则说明是平行四边形；其中如果相邻边的长度相等，则是菱形；
  1. 再其次，如果有任意一对相对边平行(叉积为0)，则是梯形。
  1. 剩下的都是普通四边形。

需要注意的是，这个题目其实并不牵涉除法运算，在Point的结构中应使用long long替代double来避免精度误差。

## UVa12300 最小正多边形(Smallest Regular Polygon) ##

[题目大意]

给两个点A和B，求穿过这两个点的面积最小的正n边形。

[分析]

(by 陈锋)

反过来想，一个正n边形上两点的最长距离就是最长的那条对角线。也就是中间相隔n/2 - 1个顶点的两个顶点间的距离，在这个题目中就是向量AB的长度lAB。接着需要求出多边形中心到顶点的距离r。如果n是偶数，则r = lAB / 2；否则r = lAB /(2 `*` sin(π `*` (n/2) / n))。从而求出多边形面积。

## UVa12301 角度难题(An Angular Puzzle) ##

[题目大意]

有这样一个古老的题目：求下图中角DEA的度数。

![http://uva.onlinejudge.org/external/123/p12301.jpg](http://uva.onlinejudge.org/external/123/p12301.jpg)

一般的，已知角ACB, CAE, EAB, CBD和DBA分别为a, b, c, d, e，求角DEA。

[分析]

(by 陈锋)

角度确定之后，三角形的形状就确定了，不放设A的坐标为(0,0), B为(10,0)，则按照图中所示角度进行向量计算即可。