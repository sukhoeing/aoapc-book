#《算法竞赛入门经典——训练指南》第四章相关内容

# 注意事项 #

googlecode中的部分代码和书上不一样，比如函数从传值改成传const引用，以及用vector而不是Point指针+长度来表示等，请读者注意。

还有部分代码有用到一个叫Polygon的类型，那个就是`vector<Point>`，在uva12296的代码中有用到

另外，在google代码中，“判断点是否在空间三角形”中还写了两种书上没有介绍的方法，详见uva11275的三份代码。

总之，本章的代码请读者以googlecode为准，书上代码可以用来理解。

另：关于用复数进行几何计算，推荐bmerry的《Computational geometry with complex numbers》：

http://community.topcoder.com/tc?module=Static&d1=features&d2=091806

# 勘误 #

P257. 上面第三段“直线交点”第二行应该是u=P-Q。 最下面“点到线段距离”一段，“如果Q在射线BA上，则所求距离为QA距离；否则为QB距离”应改为“如果Q在射线BA上，则所求距离为PA距离；否则为PB距离”。（代码中也是这样写的）

（感谢wuxinleiupc）

P259.  例题1 Morley定理UVa11178 输出格式应为“输出6个实数”而不是“输出6个整数”。

（感谢wuxinleiupc）

[第二次印刷改正]p260. 第一段代码倒数第二行的GetIntersection应为GetLineIntersection

P271 isPointInPolygon 函数中 声明的变量w应为wn。

（感谢wcmg.chen）

[第二次印刷改正]p287. 最后两段代码均有误。分别替换成（注意法向量n必须是单位向量）：

```
// 点p到平面p0-n的距离。n必须为单位向量
double DistanceToPlane(const Point3& p, const Point3& p0, const Vector3& n) {
  return fabs(Dot(p-p0, n)); // 如果不取绝对值，得到的是有向距离
}

// 点p在平面p0-n上的投影。n必须为单位向量
Point3 GetPlaneProjection(const Point3& p, const Point3& p0, const Vector3& n) {
  return p-n*Dot(p-p0, n);
}
```

[第二次印刷改正] P300. 表4-6例题15的信息有误，题目代号和名称应该是UVa12296  Pieces and Discs


---


以下是《算法竞赛入门经典——训练指南》第四章中的例题和习题列表。多数题目在书中已经给出了题目翻译，这里主要是为了让大家能方便的找到题解链接、数据下载等其他信息。

如果大家写了或者找到了下面题目（尤其是习题）的解题报告，欢迎留言推荐，我会做个链接 :)

或者有些题解网上找不到但你特别想知道怎么做，也可以留言，我们会努力在业余时间里选一些request很多的题目写点题解或者提示

# UVa特别题库 #

UVa网站专门为本书设立的分类题库配合，方便读者提交：

http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=442

注意，下面注有“extra”的习题并没有在书中出现，但在上面的特别题库中有，属于附加习题。

# 基础练习（Basic Problems） #

|[UVa11437](http://uva.onlinejudge.org/external/114/11437.html)|Triangle Fun|入门题|
|:-------------------------------------------------------------|:-----------|:--|
|[UVa11800](http://uva.onlinejudge.org/external/118/11800.html)|Determine the Shape|入门题|
|[UVa11646](http://uva.onlinejudge.org/external/116/11646.html)|Athletics Track|入门题|
|[UVa11817](http://uva.onlinejudge.org/external/118/11817.html)|Tunnelling the Earth|球面距离|
|[LA4986](http://livearchive.onlinejudge.org/external/49/4986.html)|Dome of Circus|圆锥；转化为平面几何|
|[UVa11524](http://uva.onlinejudge.org/external/115/11524.html)|In-Circle   |内切圆|
|[UVa11731](http://uva.onlinejudge.org/external/117/11731.html)|Ex-Circles  |外切圆。有一定难度|
|[UVa12300](http://uva.onlinejudge.org/external/123/12300.html)|Smallest Regular Polygon|注意精度问题|
|[UVa12301](http://uva.onlinejudge.org/external/123/12301.html)|An Angular Puzzle|平面三角|
|[UVa10566](http://uva.onlinejudge.org/external/105/10566.html)|Crossed Ladders|有多种方法|
|[UVa11186](http://uva.onlinejudge.org/external/111/11186.html)|Circum Triangle|需要进行问题转化|
|[LA4413](http://livearchive.onlinejudge.org/external/44/4413.html)|Triangle Hazard|梅涅劳斯定理|
|[LA4642](http://livearchive.onlinejudge.org/external/46/4642.html)|Malfatti Circles|可以推出公式|
|`*`(extra)UVa10347                                            |Medians     |
|`*`(extra)UVa10439                                            |Temple of Dune|
|`*`(extra)UVa10522                                            |Height to Area|
|`**`(extra)UVa194                                             |Triangle    |解三角形|
|`**`(extra)UVa438                                             |The Circumference of the Circle|

# 二维几何计算（Geometric Computations in 2D） #

## 例题（Examples） ##

|例题1|[UVa11178](http://uva.onlinejudge.org/external/111/11178.html)|Morley's Theorem|线段相交；角度计算|
|:--|:-------------------------------------------------------------|:---------------|:--------|
|例题2|[LA3263](http://livearchive.onlinejudge.org/external/32/3263.html)|That Nice Euler Circuit|线段相交；欧拉定理|
|例题3|[UVa11796](http://uva.onlinejudge.org/external/117/11796.html)|Dog Distance    |点到线段的距离  |
|例题4|[UVa12304](http://uva.onlinejudge.org/external/123/12304.html)|2D Geometry 110 in 1!|圆和直线的各种问题|
|例题5|[LA2572](http://livearchive.onlinejudge.org/external/25/2572.html)|Viva Confetti   |圆的综合问题   |

## 入门习题（Exercises: Beginner） ##

|[LA2402](http://livearchive.onlinejudge.org/external/24/2402.html)|Fishnet|线段求交；多边形面积|
|:-----------------------------------------------------------------|:------|:---------|
|[UVa10969](http://uva.onlinejudge.org/external/109/10969.html)    |Sweet Dream|圆和圆相交     |
|(extra)[UVa10075](http://uva.onlinejudge.org/external/100/10075.html)|Airlines|          |
|`*`(extra)UVa10335                                                |Ray Inside a Polygon|
|`*`(extra)UVa10556                                                |Biometrics|推荐        |
|`*`(extra)UVa10585                                                |Center of Symmetry|
|`*`(extra)UVa11928                                                |The Busy Dog|推荐        |
|`**`(extra)UVa361                                                 |Cops and Robbers|
|`**`(extra)UVa503                                                 |Parallelepiped walk|推荐        |
|`**`(extra)UVa303                                                 |Pipe   |
|`**`(extra)UVa313                                                 |Intervals|
|`**`(extra)UVa800                                                 |Crystal Clear|

## 中级习题（Exercises: Intermediate） ##

|[UVa11177](http://uva.onlinejudge.org/external/111/11177.html)|Fighting against a Polygonal Monster|凸多边形和圆相交|
|:-------------------------------------------------------------|:-----------------------------------|:-------|
|[UVa11978](http://uva.onlinejudge.org/external/119/11978.html)|Fukushima Nuclear Blast             |圆和任意多边形相交|
|[LA3491](http://livearchive.onlinejudge.org/external/34/3491.html)|Hills                               |线段相交；数三角形|
|[LA4818](http://livearchive.onlinejudge.org/external/48/4818.html)|Largest Empty Circle on a Segment   |圆和线段    |
|(extra)[UVa10321](http://uva.onlinejudge.org/external/103/10321.html)|Polygon Intersection                |        |
|(extra)[UVa10809](http://uva.onlinejudge.org/external/108/10809.html)|Great Circle                        |        |
|(extra)[UVa10867](http://uva.onlinejudge.org/external/108/10867.html)|Cutting a Polygon                   |        |
|(extra)[UVa10915](http://uva.onlinejudge.org/external/109/10915.html)|War on Weather                      |        |
|`**`(extra)UVa203                                             |Running Lights Visibility Calculator|
|`**`(extra)UVa217                                             |Radio Direction Finder              |
|`**`(extra)UVa319                                             |Pendulum                            |
|`**`(extra)UVa421                                             |Polygonal Puzzle                    |

## 提高习题（Exercises: Advanced） ##

|(extra)[UVa1003](http://uva.onlinejudge.org/external/10/1003.html)|Can't Cut Down the Forest for the Trees||
|:-----------------------------------------------------------------|:--------------------------------------|:|
|(extra)[UVa1017](http://uva.onlinejudge.org/external/10/1017.html)|Merrily, We Roll Along!                ||
|(extra)[UVa11188](http://uva.onlinejudge.org/external/111/11188.html)|A Strange Opera House                  ||
|(extra)[UVa12306](http://uva.onlinejudge.org/external/123/12306.html)|My SketchUp                            ||
|(extra)[UVa12309](http://uva.onlinejudge.org/external/123/12309.html)|A Strange Opera House II               ||
|(extra)[UVa12314](http://uva.onlinejudge.org/external/123/12314.html)|The Cleaning Robot                     ||
|`*`(extra)UVa11037                                                |Point of View in Flatland              |推荐|
|`*`(extra)UVa11746                                                |Finding the Transmitter Again          |

# 几何算法（Geometric Algorithms in 2D） #

## 例题（Examples） ##

|例题6|[UVa10652](http://uva.onlinejudge.org/external/106/10652.html)|Board Wrapping|凸包|
|:--|:-------------------------------------------------------------|:-------------|:-|
|例题7|[UVa11168](http://uva.onlinejudge.org/external/111/11168.html)|Airport       |凸包；直线的一般式|
|例题8|[UVa10256](http://uva.onlinejudge.org/external/102/10256.html)|The Great Divide|凸包；点在多边形内|
|例题9|[LA4728](http://livearchive.onlinejudge.org/external/47/4728.html)|Square        |凸包；旋转卡壳|
|例题10|[LA3890](http://livearchive.onlinejudge.org/external/38/3890.html)|Most Distant Point from the Sea|二分法；半平面交|
|例题11|[LA2218](http://livearchive.onlinejudge.org/external/22/2218.html)|Triathlon     |半平面交|
|例题12|[LA4992](http://livearchive.onlinejudge.org/external/49/4992.html)|Jungle Outpost|几何分析；半平面交|
|例题13|[LA2797](http://livearchive.onlinejudge.org/external/27/2797.html)|Monster Trap  |平面区域；图论模型|
|例题14|[LA3218](http://livearchive.onlinejudge.org/external/32/3218.html)|Find the Border|平面区域；卷包裹法|
|例题15|[UVa12296](http://uva.onlinejudge.org/external/122/12296.html)|Pieces and Discs|平面区域；切割多边形；多边形和圆的位置关系|

## 入门习题（Exercises: Beginner） ##

|[LA2453](http://livearchive.onlinejudge.org/external/24/2453.html)|Wall|凸包|
|:-----------------------------------------------------------------|:---|:-|
|[LA2512](http://livearchive.onlinejudge.org/external/25/2512.html)|Art Gallery|半平面交|
|[UVa10084](http://uva.onlinejudge.org/external/100/10084.html)    |Hotter Colder|
|[UVa12307](http://uva.onlinejudge.org/external/123/12307.html)    |Smallest Enclosing Rectangle|旋转卡壳|
|`*`(extra)UVa10245                                                |The Closest Pair Problem|
|`*`(extra)UVa11072                                                |Points|
|`*`(extra)UVa11265                                                |The Sultan's Problem|
|`**`(extra)UVa588                                                 |Video Surveilance|判断核是否为空|
|`**`(extra)UVa754                                                 |Treasure Hunt|
|`**`(extra)UVa811                                                 |The Fortified Forest|

## 中级习题（Exercises: Intermediate） ##

|[UVa11726](http://uva.onlinejudge.org/external/117/11726.html)|Crime Scene|
|:-------------------------------------------------------------|:----------|
|[UVa11595](http://uva.onlinejudge.org/external/115/11595.html)|Street Crossing EXTREME|直线相交；平面区域  |
|[LA3176](http://livearchive.onlinejudge.org/external/31/3176.html)|Art of War |平面区域       |
|[LA5836](http://livearchive.onlinejudge.org/external/58/5836.html)|Running relay|可以转化为几何问题  |
|[LA4640](http://livearchive.onlinejudge.org/external/46/4640.html)|Origami Through-Hole|比较繁琐的题目；切割多边形|
|`*`(extra)UVa11277                                            |Cyclic Polygons|推荐         |
|`*`(extra)UVa11612                                            |Sultan and Khairun Shundori|推荐         |
|`*`(extra)UVa11681                                            |Tower for Cellular Telephony|
|`*`(extra)UVa12016                                            |Herbicide  |
|`**`(extra)UVa427                                             |FlatLand Piano Movers|推荐         |
|`**`(extra)UVa667                                             |Fence      |推荐         |
|`**`(extra)UVa802                                             |Lead or Gold|推荐         |
|`**`(extra)UVa819                                             |Gifts Large and Small|推荐         |
|`**`(extra)UVa823                                             |Stopper Stumper|容易写错，推荐    |

## 提高习题（Exercises: Advanced） ##

|(extra)[UVa12311](http://uva.onlinejudge.org/external/123/12311.html)|All-Pair Farthest Points||
|:--------------------------------------------------------------------|:-----------------------|:|
|`*`(extra)UVa10095                                                   |Saving the Planet       |
|`*`(extra)UVa10204                                                   |Adventures in Moving    |推荐|
|`*`(extra)UVa10456                                                   |Intelligent Cats        |推荐|
|`*`(extra)UVa11243                                                   |Texas Trip              |推荐|
|`*`(extra)UVa11740                                                   |How Dark Can it Be?     |
|`*`(extra)UVa11756                                                   |Bounded by Line         |
|`**`(extra)UVa691                                                    |Triangle Partition      |
|`**`(extra)UVa805                                                    |Polygon Intersections   |多边形相交|

# 三维几何（Geometric Computations and Algorithms in 3D） #

## 例题（Examples） ##

|例题16|[UVa11275](http://uva.onlinejudge.org/external/112/11275.html)|3D Triangles|线段和三角形相交（3D）|
|:---|:-------------------------------------------------------------|:-----------|:-----------|
|例题17|[LA4973](http://livearchive.onlinejudge.org/external/49/4973.html)|Ardenia     |线段之间的距离（3D） |
|例题18|[LA4589](http://livearchive.onlinejudge.org/external/45/4589.html)|Asteroids   |三维凸包；点到平面的距离|
|例题19|[LA4795](http://livearchive.onlinejudge.org/external/47/4795.html)|Paperweight |三维几何综合题；注意细节|

## 入门习题（Exercises: Beginner） ##

|[LA3616](http://livearchive.onlinejudge.org/external/36/3616.html)|How I Wonder What You Are!|角度计算|
|:-----------------------------------------------------------------|:-------------------------|:---|
|[LA3147](http://livearchive.onlinejudge.org/external/31/3147.html)|Model Rocket Height       |三维几何计算|
|[LA3500](http://livearchive.onlinejudge.org/external/35/3500.html)|Model Rocket Height       |三维几何计算|
|[UVa10794](http://uva.onlinejudge.org/external/107/10794.html)    |The Deadly Olympic Returns|相对运动；点到线段的距离|
|[UVa11836](http://uva.onlinejudge.org/external/118/11836.html)    |Star War                  |四面体到四面体的距离|
|`**`(extra)UVa415                                                 |Sunrise                   |球   |
|`**`(extra)UVa535                                                 |Globetrotter              |球面几何|
|`**`(extra)UVa578                                                 |Polygon Puzzler           |三维空间中的多边形面积|
|`**`(extra)UVa659                                                 |Reflections               |球   |

## 中级习题（Exercises: Intermediate） ##

|[LA3192](http://livearchive.onlinejudge.org/external/31/3192.html)|Inherit the Spheres|球的横截面；连通分量|
|:-----------------------------------------------------------------|:------------------|:---------|
|[LA5075](http://livearchive.onlinejudge.org/external/50/5075.html)|Intersection of Two Prisms|两个无限高棱柱的交 |
|[LA4371](http://livearchive.onlinejudge.org/external/43/4371.html)|Aerodynamics       |凸多面体的横截面积 |
|[LA5100](http://livearchive.onlinejudge.org/external/51/5100.html)|Shade of Hallelujah Mountain|投影；平面旋转；凸包|
|[LA2693](http://livearchive.onlinejudge.org/external/26/2693.html)|Ghost Busters      |球；投影      |
|[LA3193](http://livearchive.onlinejudge.org/external/31/3193.html)|Crossing Prisms    |棱柱的截面；空间思维|
|`*`(extra)UVa10495                                                |Conic Distance     |
|`*`(extra)UVa10517                                                |Wind of Change!    |推荐        |
|`*`(extra)UVa11334                                                |Antenna in the Cinoc Mountain|
|`**`(extra)LA2154                                                 |The Bulk           |
|`**`(extra)LA2156                                                 |Direct Visibility  |沟通需要空间想象  |
|`**`(extra)UVa420                                                 |Supercomputer Selection, The Sequel|
|`**`(extra)UVa809                                                 |Bullet Hole        |推荐        |
|`**`(extra)UVa813                                                 |Robot              |三维几何基础练习  |

## 提高习题（Exercises: Advanced） ##

|[UVa11887](http://uva.onlinejudge.org/external/118/11887.html)|Tetrahedrons and Spheres|数值积分；四面体和球|
|:-------------------------------------------------------------|:-----------------------|:---------|
|[UVa12313](http://uva.onlinejudge.org/external/123/12313.html)|A Tiny Raytracer        |光线跟踪算法模拟  |
|(extra)[UVa12305](http://uva.onlinejudge.org/external/123/12305.html)|Polishing a Extruded Polygon|          |
|(extra)[UVa12308](http://uva.onlinejudge.org/external/123/12308.html)|Smallest Enclosing Box  |          |
|(extra)[UVa12513](http://uva.onlinejudge.org/external/125/12513.html)|Safe Places             |          |
|`*`(extra)UVa11289                                            |Friend of Foe?          |推荐        |
|`*`(extra)UVa11580                                            |Finding the Transmitter |推荐        |
|`*`(extra)UVa11807                                            |Dumb Eucelics' Pyramid Walk|