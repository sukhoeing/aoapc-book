#《算法竞赛入门经典——训练指南》第五章相关内容

# 勘误 #

[第二次印刷改正] P312. 5.2.1之前的那句话，“把初始结点的color设为0” 改为 “把color数组初始化为0”。

P330. 最短路树说明中，`p[i]=j`应该改成`p[j]=i`

（感谢Tankchen）

P331. 输入格式的下一行: 即地图上的道路的条数(n<=0)。其中n<=0应改为n>=0

（感谢Congrongbin）

p344. 次小生成树中解的第一段最后一行：“就是原图的最小生成树” => “就是原图的次小生成树”。

P347 “二分图的两个结集” -> “二分图的两个结点集”

p356 例题28 身高至少相差40厘米应该改为身高相差大于40厘米

（感谢Tankchen）

p359页的图5-24中，在第3、4幅图（即第二排的两幅图）3->t的容量应为6，图4中1->4的容量应为2。

（感谢zhuxinge123）

P367. “二分图带权最大独立集”的解法中，“向T连一条边，流量均为该点的权值” => “向T连一条边，容量均为该点的权值”

P368. 最大闭合子图解法 “从所有负权边向汇点引一条边”=>“从所有负权点向汇点引一条边”

（感谢bournafe）

P369. 输出格式中(A,B)的含义，是指编号为A的飞船出发到达行星B。

（感谢yingsihao）

P371. 例题34分析的第一段“源点i向每个点i” => “源点s向每个点i”

# 注意事项 #

2-SAT部分，算法描述和代码都是对的（至少目前没发现问题），但二者不匹配。

正文里说每个变量i拆成两个结点2i和2i+1，分别表示true和false，而在代码里实际上结点编号为2i+val，由于true和false的val分别为1和0，所以实际上2i表示x<sub>i</sub>=false, 2i+1表示x<sub>i</sub>=true。这一点对例题没有影响，但做习题的时候，由于某些题目要求输出方案，这个不一致会给读者造成困扰，sorry...

p344次小生成树复杂度公式中的alpha(n,m)是Ackermann函数的反函数，见 http://en.wikipedia.org/wiki/Ackermann_function 的“Inverse”一节。它增长极为缓慢，对于任何一个“真实世界里的参数”，函数值都小于5。

例题19的Animal Run，书中介绍的建模方法不优，一个更好的方法是把每个三角形看成一个结点，相邻三角形用一条无向边相连，边权为公共边上的数值。细节见googlecode中的代码。原书中的建模方法也有代码，叫la3661\_complex.cpp


---


以下是《算法竞赛入门经典——训练指南》第五章中的例题和习题列表。多数题目在书中已经给出了题目翻译，这里主要是为了让大家能方便的找到题解链接、数据下载等其他信息。

如果大家写了或者找到了下面题目（尤其是习题）的解题报告，欢迎留言推荐，我会做个链接 :)

或者有些题解网上找不到但你特别想知道怎么做，也可以留言，我们会努力在业余时间里选一些request很多的题目写点题解或者提示

# UVa特别题库 #

UVa网站专门为本书设立的分类题库配合，方便读者提交：

http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=442

注意，下面注有“extra”的习题并没有在书中出现，但在上面的特别题库中有，属于附加习题。

# 基础知识和算法（Fundamentals） #

## 例题（Examples） ##

|例题1|[UVa11624](http://uva.onlinejudge.org/external/116/11624.html)|Fire!|迷宫问题；多源BFS|
|:--|:-------------------------------------------------------------|:----|:---------|
|例题2|[UVa10047](http://uva.onlinejudge.org/external/100/10047.html)|The Monocycle|迷宫问题；复合状态 |
|例题3|[UVa10054](http://uva.onlinejudge.org/external/100/10054.html)|The Necklace|欧拉回路      |
|例题4|[LA4255](http://livearchive.onlinejudge.org/external/42/4255.html)|Guess|拓扑排序      |

## 入门习题（Exercises: Beginners） ##

|`*`(extra)UVa10441|Catenyms|
|:-----------------|:-------|
|`*`(extra)UVa11573|Ocean Currents|
|`*`(extra)UVa11748|Rigging Elections|
|`**`(extra)UVa436 |Arbitrage (II)|
|`**`(extra)UVa515 |King    |拓扑排序    |
|`**`(extra)UVa532 |Dungeon Master|
|`**`(extra)UVa534 |Frogger |Dijkstra或者二分+BFS|
|`**`(extra)UVa538 |Balancing Bank Accounts|
|`**`(extra)UVa705 |Slash Maze|
|`**`(extra)UVa707 |Robbery |推荐      |
|`**`(extra)UVa810 |A Dicey Problem|
|`**`(extra)UVa816 |Abbott's Revenge|

## 中级习题（Exercises: Intermediate） ##

|`*`(extra)UVa10457|Magic Car|
|:-----------------|:--------|
|`*`(extra)UVa10607|Siege    |
|`*`(extra)UVa10798|Be wary of Roses|
|`*`(extra)UVa10941|Words Adjustment|
|`*`(extra)UVa10968|KuPellaKeS|
|`*`(extra)UVa11165|Galactic Travel|
|`*`(extra)UVa11853|Paintball|
|`**`(extra)UVa258 |Mirror Maze|推荐       |
|`**`(extra)UVa308 |Tin Cutter|推荐       |
|`**`(extra)UVaLA2219|Domino Puzzle|推荐       |
|`**`(extra)UVa359 |Sex Assignment And Breeding Experiments|
|`**`(extra)UVa715 |Substitution Cipher|注意读题     |
|`**`(extra)UVaLA2040|Multiple |推荐       |

## 提高习题（Exercises: Advanced） ##

|`*`(extra)UVa11175|From D to E and Back|
|:-----------------|:-------------------|
|`*`(extra)UVa12017|Imitation           |

# DFS及其应用（Depth First Search） #

## 例题（Examples） ##

|例题5|[LA3523](http://livearchive.onlinejudge.org/external/35/3523.html)|Knights of the Round Table|双连通分量；二分图判定|
|:--|:-----------------------------------------------------------------|:-------------------------|:----------|
|例题6|[LA5135](http://livearchive.onlinejudge.org/external/51/5135.html)|Mining Your Own Business  |双连通分量；割顶   |
|例题7|[LA4287](http://livearchive.onlinejudge.org/external/42/4287.html)|Proving Equivalences      |SCC；SCC图   |
|例题8|[UVa11324](http://uva.onlinejudge.org/external/113/11324.html)    |The Largest Clique        |SCC图上的动态规划 |
|例题9|[LA3211](http://livearchive.onlinejudge.org/external/32/3211.html)|Now or Later              |2-SAT；二分法  |
|例题10|[LA3713](http://livearchive.onlinejudge.org/external/37/3713.html)|Astronauts                |2-SAT      |

## 入门习题（Exercises: Beginners） ##

|[UVa11396](http://uva.onlinejudge.org/external/113/11396.html)|Claw Decomposition|稍加推理即可解决|
|:-------------------------------------------------------------|:-----------------|:-------|
|[LA3486](http://livearchive.onlinejudge.org/external/34/3486.html)|Cells             |注意栈溢出   |
|[UVa10765](http://uva.onlinejudge.org/external/107/10765.html)|Doves and Bombs   |双连通分量   |
|[UVa11294](http://uva.onlinejudge.org/external/112/11294.html)|Wedding           |2-SAT   |
|`*`(extra)UVa10319                                            |Manhattan         |
|`*`(extra)UVa11080                                            |Place the Guards  |
|`*`(extra)UVa11504                                            |Dominoes          |
|`**`(extra)UVa610                                             |Street Directions |

## 中级习题（Exercises: Intermediate） ##

|[LA4452](http://livearchive.onlinejudge.org/external/44/4452.html)|The Ministers' Major Mess|
|:-----------------------------------------------------------------|:------------------------|
|[LA3514](http://livearchive.onlinejudge.org/external/35/3514.html)|Cactus                   |
|[UVa10972](http://uva.onlinejudge.org/external/109/10972.html)    |RevolC FaeLoN            |
|[LA5903](http://livearchive.onlinejudge.org/external/59/5903.html)|Piece it together        |
|[UVa11604](http://uva.onlinejudge.org/external/116/11604.html)    |General Sultan           |
|[LA4958](http://livearchive.onlinejudge.org/external/49/4958.html)|Palindromic DNA          |
|[LA2664](http://livearchive.onlinejudge.org/external/26/2664.html)|One-way traffic          |
|`*`(extra)UVa10510                                                |Cactus                   |
|`*`(extra)UVa11098                                                |Battle II                |
|`*`(extra)UVa11930                                                |Rectangles               |

## 提高习题（Exercises: Advanced） ##

|[LA4849](http://livearchive.onlinejudge.org/external/48/4849.html)|String Phone|
|:-----------------------------------------------------------------|:-----------|
|[LA4839](http://livearchive.onlinejudge.org/external/48/4839.html)|Traffic Real Time Query System|
|[LA2429](http://livearchive.onlinejudge.org/external/24/2429.html)|Alice and Bob|

# 最短路及其应用（Shortest Paths） #

## 例题（Examples） ##

|例题11|[UVa11374](http://uva.onlinejudge.org/external/113/11374.html)|Airport Express|用Dijkstra预处理；枚举|
|:---|:-------------------------------------------------------------|:--------------|:--------------|
|例题12|[UVa10917](http://uva.onlinejudge.org/external/109/10917.html)|A Walk through the Forest|Dijkstra；动态规划  |
|例题13|[LA4080](http://livearchive.onlinejudge.org/external/40/4080.html)|Warfare and Logistics|最短路树           |
|例题14|[UVa10537](http://uva.onlinejudge.org/external/105/10537.html)|Toll! Revisited|Dijkstra算法的变形  |
|例题15|[UVa11090](http://uva.onlinejudge.org/external/110/11090.html)|Going in Cycle!!|01分数规划；负圈判定    |
|例题16|[UVa11478](http://uva.onlinejudge.org/external/114/11478.html)|Halum          |差分约束系统         |
|例题17|[LA4128](http://livearchive.onlinejudge.org/external/41/4128.html)|Steam Roller   |状态图设计；Dijkstra |
|例题18|[LA3561](http://livearchive.onlinejudge.org/external/35/3561.html)|Low Cost Air Travel|状态图设计；Dijkstra |
|例题19|[LA3661](http://livearchive.onlinejudge.org/external/36/3661.html)|Animal Run     |平面图的最小割；对偶图    |

## 入门习题（Exercises: Beginners） ##

|[UVa10603](http://uva.onlinejudge.org/external/106/10603.html)|Fill|最短路|
|:-------------------------------------------------------------|:---|:--|
|[UVa10269](http://uva.onlinejudge.org/external/102/10269.html)|Adventure of Super Mario|最短路|
|[UVa11367](http://uva.onlinejudge.org/external/113/11367.html)|Full Tank?|最短路|
|[UVa11280](http://uva.onlinejudge.org/external/112/11280.html)|Flying to Fredericton|Bellman-Ford算法的变形|
|`*`(extra)UVa10246                                            |Asterix and Obelix|
|`**`(extra)UVa558                                             |Wormholes|
|`**`(extra)UVa658                                             |It's not a Bug, it's a Feature|

## 中级习题（Exercises: Intermediate） ##

|[LA3310](http://livearchive.onlinejudge.org/external/33/3310.html)|Tomato Automata|
|:-----------------------------------------------------------------|:--------------|
|[LA5906](http://livearchive.onlinejudge.org/external/59/5906.html)|Smoking Gun    |
|[LA5909](http://livearchive.onlinejudge.org/external/59/5909.html)|Train delays   |
|`*`(extra)UVa10342                                                |Always Late    |
|`*`(extra)UVa10740                                                |Not the Best   |
|`*`(extra)UVa10841                                                |Lift Hopping in the Real World|
|`*`(extra)UVa10967                                                |The Great Escape|

## 提高习题（Exercises: Advanced） ##

|[LA4618](http://livearchive.onlinejudge.org/external/46/4618.html)|Wormholes|
|:-----------------------------------------------------------------|:--------|
|[LA2666](http://livearchive.onlinejudge.org/external/26/2666.html)|Servers  |
|[LA2925](http://livearchive.onlinejudge.org/external/29/2925.html)|Dice contest|
|(extra)[UVa1057](http://uva.onlinejudge.org/external/10/1057.html)|Routing  |         |
|(extra)[UVa1081](http://uva.onlinejudge.org/external/10/1081.html)|The Return of Carl|         |
|(extra)[UVa1089](http://uva.onlinejudge.org/external/10/1089.html)|Suffix-Replacement Grammars|         |
|(extra)[UVa1097](http://uva.onlinejudge.org/external/10/1097.html)|Rain     |         |
|`*`(extra)UVa10381                                                |The Rock |推荐       |

# 最小生成树（Minimal Spanning Tree and Variants） #

## 例题（Examples） ##

|例题20|[LA5713](http://livearchive.onlinejudge.org/external/57/5713.html)|Qin Shi Huang's National Road System|枚举；最小生成树；预处理计算每两点间的最长边|
|:---|:-----------------------------------------------------------------|:-----------------------------------|:---------------------|
|例题21|[UVa11354](http://uva.onlinejudge.org/external/113/11354.html)    |Bond                                |最小生成树；动态LCA           |
|例题22|[UVa11865](http://uva.onlinejudge.org/external/118/11865.html)    |Stream My Contest                   |最小有向生成树               |

## 入门习题（Exercises: Beginners） ##

|[LA3887](http://livearchive.onlinejudge.org/external/38/3887.html)|Slim Span|枚举；最小生成树|
|:-----------------------------------------------------------------|:--------|:-------|
|[UVa10600](http://uva.onlinejudge.org/external/106/10600.html)    |ACM Contest and Blackout|次小生成树   |
|[UVa11183](http://uva.onlinejudge.org/external/111/11183.html)    |Teen Girl Squad|最小有向生成树；注意时间效率|
|[UVa10816](http://uva.onlinejudge.org/external/108/10816.html)    |Travel in Desert|
|`*`(extra)UVa10938                                                |Flea circus|
|`*`(extra)UVa11747                                                |Heavy Cycle Edges|
|`**`(extra)UVa544                                                 |Heavy Cargo|最大瓶颈路   |

## 中级习题（Exercises: Intermediate） ##

|[UVa10369](http://uva.onlinejudge.org/external/103/10369.html)|Arctic Network|
|:-------------------------------------------------------------|:-------------|
|[LA4848](http://livearchive.onlinejudge.org/external/48/4848.html)|Tour Belt     |和MST算法接近，但容易想错|
|[LA4960](http://livearchive.onlinejudge.org/external/49/4960.html)|Sensor network|LA3887的加强版    |
|[LA5834](http://livearchive.onlinejudge.org/external/58/5834.html)|Genghis Khan the Conqueror|

## 提高习题（Exercises: Advanced） ##
|`**`(extra)LA2099|Picnic Planning|最小度限制生成树|
|:----------------|:--------------|:-------|

# 二分图匹配（Bipartite Graph Matching） #

## 例题（Examples） ##

|例题23|[LA4043](http://livearchive.onlinejudge.org/external/40/4043.html)|Ants|二分图最佳匹配（或分治法）|
|:---|:-----------------------------------------------------------------|:---|:------------|
|例题24|[UVa11383](http://uva.onlinejudge.org/external/113/11383.html)    |Golden Tiger Claw|KM算法的副产物     |
|例题25|[LA2238](http://livearchive.onlinejudge.org/external/22/2238.html)|Fixed Partition Memory Management|图论建模；二分图最佳匹配 |
|例题26|[LA3989](http://livearchive.onlinejudge.org/external/39/3989.html)|Ladies' Choice|稳定婚姻问题       |
|例题27|[UVa11419](http://uva.onlinejudge.org/external/114/11419.html)    |SAM I AM|二分图最小覆盖      |
|例题28|[LA3415](http://livearchive.onlinejudge.org/external/34/3415.html)|Guardian of Decency|二分图最大独立集     |
|例题29|[LA3126](http://livearchive.onlinejudge.org/external/31/3126.html)|Taxi Cab Scheme|DAG的最小路径覆盖   |

## 入门习题（Exercises: Beginners） ##

|[LA3276](http://livearchive.onlinejudge.org/external/32/3276.html)|The Great Wall Game|
|:-----------------------------------------------------------------|:------------------|
|[LA3353](http://livearchive.onlinejudge.org/external/33/3353.html)|Optimal Bus Route Design|
|[LA4288](http://livearchive.onlinejudge.org/external/42/4288.html)|Cat vs. Dog        |

## 中级习题（Exercises: Intermediate） ##

|[UVa10615](http://uva.onlinejudge.org/external/106/10615.html)|Rooks|
|:-------------------------------------------------------------|:----|
|[LA2966](http://livearchive.onlinejudge.org/external/29/2966.html)|King's Quest|
|[LA4748](http://livearchive.onlinejudge.org/external/47/4748.html)|Flowers Placement|
|`*`(extra)UVa10735                                            |Euler Circuit|推荐   |
|`*`(extra)UVa10888                                            |Warehouse|
|`*`(extra)UVa11119                                            |Chemical Attraction|

## 提高习题（Exercises: Advanced） ##

|(extra)[UVa10418](http://uva.onlinejudge.org/external/104/10418.html)|Hyper Toy Soldiers||
|:--------------------------------------------------------------------|:-----------------|:|
|(extra)[UVa10630](http://uva.onlinejudge.org/external/106/10630.html)|Millennium Ceremony||

# 网络流（Network Flows） #

## 例题（Examples） ##

|例题30|[UVa11248](http://uva.onlinejudge.org/external/112/11248.html)|Frequency Hopping|最大流|
|:---|:-------------------------------------------------------------|:----------------|:--|
|例题31|[LA2957](http://livearchive.onlinejudge.org/external/29/2957.html)|Bring Them There |最大流；图论建模|
|例题32|[LA2531](http://livearchive.onlinejudge.org/external/25/2531.html)|The K-league     |最大流；图论建模|
|例题33|[UVa10779](http://uva.onlinejudge.org/external/107/10779.html)|Collector's Problem|最大流；图论建模|
|例题34|[UVa11613](http://uva.onlinejudge.org/external/116/11613.html)|Acme Corporation |拆点；最小费用流|

## 入门习题（Exercises: Beginners） ##

|[UVa10806](http://uva.onlinejudge.org/external/108/10806.html)|Dijkstra, Dijkstra|最小费用流|
|:-------------------------------------------------------------|:-----------------|:----|
|[LA3268](http://livearchive.onlinejudge.org/external/32/3268.html)|Jamie's Contact Groups|二分法；最大流|
|[LA3645](http://livearchive.onlinejudge.org/external/36/3645.html)|Objective:Berlin  |时序模型；最大流|
|[LA3972](http://livearchive.onlinejudge.org/external/39/3972.html)|March of the Penguins|最大流；结点容量|
|[LA3487](http://livearchive.onlinejudge.org/external/34/3487.html)|Duopoly           |最小割  |
|[LA2796](http://livearchive.onlinejudge.org/external/27/2796.html)|Concert Hall Schedule|区间模型；最小费用流|
|[LA5095](http://livearchive.onlinejudge.org/external/50/5095.html)|Transportation    |最小费用流；拆边|
|`*`(extra)UVa10249                                            |The Grand Dinner  |
|`*`(extra)UVa10380                                            |Shogi Tournament  |
|`*`(extra)UVa11380                                            |Down Went the Titanic|
|`**`(extra)UVa563                                             |Crimewave         |

## 中级习题（Exercises: Intermediate） ##

|[UVa11167](http://uva.onlinejudge.org/external/111/11167.html)|Monkeys in the Emei Mountain|区间模型；最大流；输出方案|
|:-------------------------------------------------------------|:---------------------------|:------------|
|[UVa11082](http://uva.onlinejudge.org/external/110/11082.html)|Matrix Decompressing        |行列模型；最大流     |
|[LA4597](http://livearchive.onlinejudge.org/external/45/4597.html)|Inspection                  |只有下界的网络的最小流  |
|[LA2197](http://livearchive.onlinejudge.org/external/21/2197.html)|Paint the Roads             |循环流；可转化为普通最小费用流|
|[LA5905](http://livearchive.onlinejudge.org/external/59/5905.html)|Pool construction           |
|[LA4949](http://livearchive.onlinejudge.org/external/49/4949.html)|Risk                        |
|[LA3604](http://livearchive.onlinejudge.org/external/36/3604.html)|Travel                      |
|`*`(extra)UVa11544                                            |Recruiter's Problem         ||字典序最小解|
|`*`(extra)UVa11594                                            |All Pairs Maximum Flow      |
|`*`(extra)UVa11603                                            |Its all about the Bandwidth |

## 提高习题（Exercises: Advanced） ##

|[LA3709](http://livearchive.onlinejudge.org/external/37/3709.html)|Hard Life|最大密度子图；最小割|
|:-----------------------------------------------------------------|:--------|:---------|
|[LA5131](http://livearchive.onlinejudge.org/external/51/5131.html)|Chips Challenge|
|`*`(extra)UVa11700                                                |Pipes    |推荐        |