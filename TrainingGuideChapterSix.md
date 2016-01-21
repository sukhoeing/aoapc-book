#《算法竞赛入门经典——训练指南》第六章相关内容

# 勘误 #

P385. update函数中:

```
if(TEST(m,b)) d[cur][CLEAR(m,b)] += d[1-cur][a];
```

TEST函数和CLEAR函数中m, b的顺序和前文的描述不符, 应改为

```
if(TEST(b,m)) d[cur][CLEAR(b,m)] += d[1-cur][a];
```

（感谢LiuYuPan）

P388倒数第八行：
“如果新格子的颜色和它上方格子的颜色相同，则改成那个格子的颜色；”
应为
“如果新格子的颜色和它上方格子的颜色相同，则改成那个格子的联通分量编号；”

（感谢LiuYuPan）

P396. 例题7的编号应该是 LA3789，而不是 LA2417

（感谢Miguel Revilla）

P447. 例题3的名称应是Black and White


---


以下是《算法竞赛入门经典——训练指南》第六章中的例题和习题列表。多数题目在书中已经给出了题目翻译，这里主要是为了让大家能方便的找到题解链接、数据下载等其他信息。

如果大家写了或者找到了下面题目（尤其是习题）的解题报告，欢迎留言推荐，我会做个链接 :)

或者有些题解网上找不到但你特别想知道怎么做，也可以留言，我们会努力在业余时间里选一些request很多的题目写点题解或者提示

# UVa特别题库 #

UVa网站专门为本书设立的分类题库配合，方便读者提交：

http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=442

注意，下面注有“extra”的习题并没有在书中出现，但在上面的特别题库中有，属于附加习题。

# 轮廓线上的动态规划（Dynamic Programming on Borderline） #

## 例题（Examples） ##

|例题1|[UVa11270](http://uva.onlinejudge.org/external/112/11270.html)|Tiling Dominoes|覆盖模型|
|:--|:-------------------------------------------------------------|:--------------|:---|
|例题2|[LA3620](http://livearchive.onlinejudge.org/external/36/3620.html)|Manhattan Wiring|路径拼接模型|
|例题3|[UVa10572](http://uva.onlinejudge.org/external/105/10572.html)|Black and White|连通块的最小表示法|

## 入门习题（Exercises: Beginners） ##

|[LA4058](http://livearchive.onlinejudge.org/external/40/4058.html)|ACM Puzzles|入门题|
|:-----------------------------------------------------------------|:----------|:--|
|[LA4018](http://livearchive.onlinejudge.org/external/40/4018.html)|Flight Control|入门题|

## 中级习题（Exercises: Intermediate） ##

|[UVa11741](http://uva.onlinejudge.org/external/117/11741.html)|Ignore the Blocks|覆盖模型；矩阵幂|
|:-------------------------------------------------------------|:----------------|:-------|
|[UVa11443](http://uva.onlinejudge.org/external/114/11443.html)|Tree in a Grid   |连通块的最小表示法|
|`*`(extra)UVa10531                                            |Maze Statistics  |推荐      |
|`*`(extra)UVa11531                                            |Solve the Broken Maze|

## 提高习题（Exercises: Advanced） ##

|[UVa11276](http://uva.onlinejudge.org/external/112/11276.html)|Magical Seven|综合练习|
|:-------------------------------------------------------------|:------------|:---|
|[LA4789](http://livearchive.onlinejudge.org/external/47/4789.html)|Channel      |
|[LA5762](http://livearchive.onlinejudge.org/external/57/5762.html)|Construct the Great Wall|

# 数据结构综合应用（Advanced Data Structure Topics） #

## 例题（Examples） ##

|例题4|[UVa11297](http://uva.onlinejudge.org/external/112/11297.html)|Census|二维线段树|
|:--|:-------------------------------------------------------------|:-----|:----|
|例题5|[UVa11990](http://uva.onlinejudge.org/external/119/11990.html)|``Dynamic'' Inversion|Fenwick树套静态BST（或分治法+Fenwick树）|
|例题6|[UVa12003](http://uva.onlinejudge.org/external/120/12003.html)|Array Transformer|分块表  |

## 入门习题（Exercises: Beginners） ##

|[LA3294](http://livearchive.onlinejudge.org/external/32/3294.html)|The Ultimate Bamboo Eater|动态规划；嵌套数据结构|
|:-----------------------------------------------------------------|:------------------------|:----------|
|[LA4082](http://livearchive.onlinejudge.org/external/40/4082.html)|Traffic Jam              |线段树或分块表    |
|[UVa12345](http://uva.onlinejudge.org/external/123/12345.html)    |Dynamic len(set(a[L:R])) |
|[LA4841](http://livearchive.onlinejudge.org/external/48/4841.html)|Searchlights             |

## 中级习题（Exercises: Intermediate） ##

|[LA3699](http://livearchive.onlinejudge.org/external/36/3699.html)|Harmony Forever|数据结构的综合应用|
|:-----------------------------------------------------------------|:--------------|:--------|
|[LA5821](http://livearchive.onlinejudge.org/external/58/5821.html)|Cybercrime Donut Investigation|平面最近点查询（静态）|
|[LA5106](http://livearchive.onlinejudge.org/external/51/5106.html)|Let the lights guide us|用数据结构优化动态规划|

## 提高习题（Exercises: Advanced） ##

|[LA5034](http://livearchive.onlinejudge.org/external/50/5034.html)|Jewel|数据结构的综合应用|
|:-----------------------------------------------------------------|:----|:--------|
|[LA4980](http://livearchive.onlinejudge.org/external/49/4980.html)|Hanging Hats|
|[UVa11607](http://uva.onlinejudge.org/external/116/11607.html)    |Cutting Cakes|
|[UVa12312](http://uva.onlinejudge.org/external/123/12312.html)    |Bounding Volume Hierarchy|
|[LA5133](http://livearchive.onlinejudge.org/external/51/5133.html)|Machine Work|用数据结构优化动态规划|

# 暴力法（Brute Force） #

## 例题（Examples） ##

|例题7|[LA3789](http://livearchive.onlinejudge.org/external/37/3789.html)|Iceman|以游戏为背景的路径寻找问题|
|:--|:-----------------------------------------------------------------|:-----|:------------|
|例题8|[LA4451](http://livearchive.onlinejudge.org/external/44/4451.html)|House of Cards|极大极小过程；Alpha-beta剪枝|
|例题9|[LA2659](http://livearchive.onlinejudge.org/external/26/2659.html)|Sudoku|数独；算法X；舞蹈链   |

## 入门习题（Exercises: Beginners） ##

|[LA3807](http://livearchive.onlinejudge.org/external/38/3807.html)|Marble Game|路径寻找问题|
|:-----------------------------------------------------------------|:----------|:-----|
|[LA3265](http://livearchive.onlinejudge.org/external/32/3265.html)|The Rotation Game|路径寻找问题；需要一点分析|
|[UVa10838](http://uva.onlinejudge.org/external/108/10838.html)    |The Pawn Chess|极大极小过程|
|[LA4300](http://livearchive.onlinejudge.org/external/43/4300.html)|The Game   |极大极小过程；alpha-beta剪枝|
|[LA4763](http://livearchive.onlinejudge.org/external/47/4763.html)|Sudoku Extension|扩展数独  |
|[LA5722](http://livearchive.onlinejudge.org/external/57/5722.html)|Gem and Prince|路径寻找问题|
|[LA5835](http://livearchive.onlinejudge.org/external/58/5835.html)|Flood-it!  |注意优化  |
|(extra)[UVa12569](http://uva.onlinejudge.org/external/125/12569.html)|Planning mobile robot on Tree (EASY Version)|      |
|`*`(extra)UVa10274                                                |Fans and Gems|
|`*`(extra)UVa10422                                                |Knights in FEN|
|`*`(extra)UVa10536                                                |Game of Euler|
|`**`(extra)LA3731                                                 |Stake Your Claim|
|`**`(extra)UVa704                                                 |Colour Hash|
|`**`(extra)UVa751                                                 |Triangle War|

## 中级习题（Exercises: Intermediate） ##

|[LA3272](http://livearchive.onlinejudge.org/external/32/3272.html)|cNteSahruPfefrlefe|IDA\*搜索|
|:-----------------------------------------------------------------|:-----------------|:------|
|[UVa11212](http://uva.onlinejudge.org/external/112/11212.html)    |Editing a Book    |IDA\*或者A\*搜索|
|(extra)[UVa12558](http://uva.onlinejudge.org/external/125/12558.html)|Egyptian Fractions (HARD version)|       |
|[LA5715](http://livearchive.onlinejudge.org/external/57/5715.html)|Three Kingdom Chess|极大极小过程；alpha-beta剪枝|
|`*`(extra)UVa10358                                                |Matrix            |
|`*`(extra)UVa10384                                                |The Wall Pushers  |推荐     |
|`*`(extra)UVa10704                                                |Traffic!          |
|`*`(extra)UVa11376                                                |Tilt!             |
|`*`(extra)UVa11501                                                |Laurel Creek      |
|`*`(extra)UVa11513                                                |9 Puzzle          |

## 提高习题（Exercises: Advanced） ##

|[LA3402](http://livearchive.onlinejudge.org/external/34/3402.html)|Organize Your Train|比较复杂的路径寻找问题|
|:-----------------------------------------------------------------|:------------------|:----------|
|[UVa12418](http://uva.onlinejudge.org/external/124/12418.html)    |Game of 999        |注意状态表示和转移  |
|[UVa11211](http://uva.onlinejudge.org/external/112/11211.html)    |Digital Logic      |注意代码实现细节   |
|[UVa11213](http://uva.onlinejudge.org/external/112/11213.html)    |Flipull            |注意代码实现细节   |
|[LA2240](http://livearchive.onlinejudge.org/external/22/2240.html)|A Vexing Problem   |IDA\*搜索。注意启发函数|
|(extra)[UVa11208](http://uva.onlinejudge.org/external/112/11208.html)|Airplane Scheduling|           |
|(extra)[UVa12570](http://uva.onlinejudge.org/external/125/12570.html)|Qualle? Quale?     |           |
|`*`(extra)UVa11772                                                |A Bee Love Story   |

# 几何专题（Selected Topics in Geometry） #

## 例题（Examples） ##

|例题10|[LA5129](http://livearchive.onlinejudge.org/external/51/5129.html)|Affine Mess|二维仿射变换；枚举|
|:---|:-----------------------------------------------------------------|:----------|:--------|
|例题11|[UVa12303](http://uva.onlinejudge.org/external/123/12303.html)    |Composite Transformations|三维仿射变换；平面的变换|
|例题12|[LA4127](http://livearchive.onlinejudge.org/external/41/4127.html)|The Sky is the Limit|直线型的离散化  |
|例题13|[LA3532](http://livearchive.onlinejudge.org/external/35/3532.html)|Nuclear Plants|圆的离散化    |
|例题14|[LA3809](http://livearchive.onlinejudge.org/external/38/3809.html)|Raising the Roof|投影；离散化   |
|例题15|[LA4125](http://livearchive.onlinejudge.org/external/41/4125.html)|Painter    |扫描法；用BST维护扫描线|
|例题16|[UVa11921](http://uva.onlinejudge.org/external/119/11921.html)    |Save the Princess|运动规划；圆形障碍|
|例题17|[LA2397](http://livearchive.onlinejudge.org/external/23/2397.html)|Collecting Luggage|运动规划；二分法 |

## 入门习题（Exercises: Beginners） ##

|[LA5719](http://livearchive.onlinejudge.org/external/57/5719.html)|A Letter to Programmers|三维变换矩阵|
|:-----------------------------------------------------------------|:----------------------|:-----|
|[LA4492](http://livearchive.onlinejudge.org/external/44/4492.html)|Jiajia's Robot         |圆的离散化 |
|[LA2947](http://livearchive.onlinejudge.org/external/29/2947.html)|Roof                   |扫描法   |
|[UVa10514](http://uva.onlinejudge.org/external/105/10514.html)    |River Crossing         |运动规划  |
|`*`(extra)UVa10760                                                |Translation or Rotation|
|`*`(extra)UVa12029                                                |Flying Spaceships      |
|`**`(extra)UVa688                                                 |Mobile Phone Coverage  |简单的离散化题目|

## 中级习题（Exercises: Intermediate） ##

|[LA4019](http://livearchive.onlinejudge.org/external/40/4019.html)|Go to Class|运动规划，注意时间效率|
|:-----------------------------------------------------------------|:----------|:----------|
|[LA3705](http://livearchive.onlinejudge.org/external/37/3705.html)|Driving Directions|运动规划；圆形障碍  |
|[LA5838](http://livearchive.onlinejudge.org/external/58/5838.html)|Shadow     |圆和凸多边形的并。注意投影方式|
|`*`(extra)UVa10613                                                |Mushroom Misery|
|`*`(extra)UVa10762                                                |Treasure Castle|
|`**`(extra)UVa248                                                 |Cutting Corners|运动规划       |

## 提高习题（Exercises: Advanced） ##

|(extra)[UVa1014](http://uva.onlinejudge.org/external/10/1014.html)|Toil for Oil||
|:-----------------------------------------------------------------|:-----------|:|
|(extra)[UVa11425](http://uva.onlinejudge.org/external/114/11425.html)|Collecting Luggage EXTREME!!!||
|(extra)[UVa12565](http://uva.onlinejudge.org/external/125/12565.html)|Lovely Magical Curves||
|(extra)[UVa1288](http://uva.onlinejudge.org/external/12/1288.html)|Shortest Flight Path||

# 数学专题（Selected Topics in Mathematics） #

## 例题（Examples） ##

|例题18|[UVa11017](http://uva.onlinejudge.org/external/110/11017.html)|A Greener World|Pick定理|
|:---|:-------------------------------------------------------------|:--------------|:-----|
|例题19|[LA3700](http://livearchive.onlinejudge.org/external/37/3700.html)|Interesting Yang Hui Triangle|Lucas定理|
|例题20|[LA4746](http://livearchive.onlinejudge.org/external/47/4746.html)|Decrypt Messages|高次模方程；原根|
|例题21|[UVa12298](http://uva.onlinejudge.org/external/122/12298.html)|Super Poker II |生成函数的乘法；FFT|
|例题22|[UVa10498](http://uva.onlinejudge.org/external/104/10498.html)|Happiness!     |线性规划  |

## 入门习题（Exercises: Beginners） ##

|[UVa11640](http://uva.onlinejudge.org/external/116/11640.html)|Mayor Election|生成函数的乘法；FFT；原根|
|:-------------------------------------------------------------|:-------------|:-------------|
|[LA2395](http://livearchive.onlinejudge.org/external/23/2395.html)|Jacquard Circuits|Pick定理        |
|[LA3408](http://livearchive.onlinejudge.org/external/34/3408.html)|Unequalled Consumption|生成函数          |
|[LA2522](http://livearchive.onlinejudge.org/external/25/2522.html)|Chocolate     |生成函数          |

## 中级习题（Exercises: Intermediate） ##

|[LA5705](http://livearchive.onlinejudge.org/external/57/5705.html)|Xavier is Learning to Count|容斥原理；生成函数的乘法；FFT|
|:-----------------------------------------------------------------|:--------------------------|:---------------|
|[LA4027](http://livearchive.onlinejudge.org/external/40/4027.html)|Expensive Drink            |可以用线性规划（三维几何也可） |
|(extra)[UVa12512](http://uva.onlinejudge.org/external/125/12512.html)|Cross-Shaped Tests         |                |

## 提高习题（Exercises: Advanced） ##

|[UVa12344](http://uva.onlinejudge.org/external/123/12344.html)|Jewel Transportation|图论；线性规划|
|:-------------------------------------------------------------|:-------------------|:------|
|(extra)[UVa12434](http://uva.onlinejudge.org/external/124/12434.html)|Infinite Stable Integer|       |
|(extra)[UVa12567](http://uva.onlinejudge.org/external/125/12567.html)|Never7, Ever17 and Water|       |
|`*`(extra)UVa10089                                            |Repackaging         |推荐     |

# 代码组织与调试（Writing and Debugging Complex Codes） #

## 例题（Examples） ##

|例题23|[UVa10966](http://uva.onlinejudge.org/external/109/10966.html)|3KP-Bash Project|文件系统模拟；字符串处理|
|:---|:-------------------------------------------------------------|:---------------|:-----------|
|例题24|[LA4488](http://livearchive.onlinejudge.org/external/44/4488.html)|Final Combat    |记忆化搜索；各种细节处理|

## 入门习题（Exercises: Beginners） ##

|[LA2727](http://livearchive.onlinejudge.org/external/27/2727.html)|A Linking Loader|编写链接加载器|
|:-----------------------------------------------------------------|:---------------|:------|
|[LA4453](http://livearchive.onlinejudge.org/external/44/4453.html)|Struts and Springs|编写窗口布局管理器|
|[LA4747](http://livearchive.onlinejudge.org/external/47/4747.html)|Exciting Time   |《俄罗斯方块》游戏模拟|
|[UVa12014](http://uva.onlinejudge.org/external/120/12014.html)    |Fudan Extracurricular Lives|成都麻将   |
|[LA5014](http://livearchive.onlinejudge.org/external/50/5014.html)|Snooker Reference|斯诺克算分  |
|[LA2067](http://livearchive.onlinejudge.org/external/20/2067.html)|Mini-Spreadsheet|开发一个简单的电子表格软件|
|[LA2160](http://livearchive.onlinejudge.org/external/21/2160.html)|Hotline         |开发一个简单的问答系统|
|[UVa12412](http://uva.onlinejudge.org/external/124/12412.html)    |A Typical Homework (a.k.a Shi Xiong Bang Bang Mang)|适合FP（见附录）的题目|
|`*`(extra)UVa10741                                                |Magic Cube      |
|`*`(extra)UVa11717                                                |Energy Saving Microcontroller|
|`*`(extra)UVa11956                                                |Brainfuck       |bf语言模拟器|
|`*`(extra)UVa10467                                                |Parse Tree      |
|`*`(extra)UVa10584                                                |Text Formalization|
|`*`(extra)UVa10996                                                |GO              |围棋     |
|`**`(extra)LA2153                                                 |Simple Arithmetics|
|`**`(extra)LA2066                                                 |Instruens Fabulam|
|`**`(extra)LA2076                                                 |Reserve Bookshelf|
|`**`(extra)UVa163                                                 |City Directions |考验简化代码的能力|
|`**`(extra)UVa206                                                 |Meals on Wheels Routing System|
|`**`(extra)UVa207                                                 |PGA Tour Prize Money|
|`**`(extra)UVa210                                                 |Concurrency Simulator|
|`**`(extra)UVa214                                                 |Code Generation |
|`**`(extra)UVa226                                                 |MIDI Preprocessing|
|`**`(extra)UVa253                                                 |Cube painting   |推荐     |
|`**`(extra)UVa316                                                 |Stars           |
|`**`(extra)UVa320                                                 |Border          |推荐     |
|`**`(extra)UVa346                                                 |Getting Chorded |
|`**`(extra)UVa449                                                 |Majoring in Scales|
|`**`(extra)UVa508                                                 |Morse Mismatches|
|`**`(extra)UVa509                                                 |RAID!           |
|`**`(extra)UVa512                                                 |Spreadsheet Tracking|
|`**`(extra)UVa513                                                 |Window Frames   |
|`**`(extra)UVa533                                                 |Equation Solver |
|`**`(extra)UVa592                                                 |Island of Logic |推荐     |
|`**`(extra)UVa603                                                 |Parking Lot     |
|`**`(extra)UVa765                                                 |References      |
|`**`(extra)UVa803                                                 |Page Selection by Keyword Matching|
|`**`(extra)UVa804                                                 |Petri Net Simulation|
|`**`(extra)UVa806                                                 |Spatial Structures|
|`**`(extra)UVa807                                                 |Towers of Powers|推荐     |
|`**`(extra)UVa814                                                 |The Letter Carrier's Rounds|SMTP模拟 |
|`**`(extra)UVa815                                                 |Flooded!        |推荐     |
|`**`(extra)UVa822                                                 |Queue and A     |

## 中级习题（Exercises: Intermediate） ##

|[UVa10757](http://uva.onlinejudge.org/external/107/10757.html)|Interpreting SQL|编写SQL解释器|
|:-------------------------------------------------------------|:---------------|:-------|
|[LA4729](http://livearchive.onlinejudge.org/external/47/4729.html)|Sizeof          |源码分析；计算struct的sizeof|
|[LA2042](http://livearchive.onlinejudge.org/external/20/2042.html)|Symbolic Derivation|表达式求导   |
|[LA2566](http://livearchive.onlinejudge.org/external/25/2566.html)|Equals are Equals|表达式处理；判断多项式是否相等|
|[LA5858](http://livearchive.onlinejudge.org/external/58/5858.html)|ASCII Expression|计算ASCIIArt表达式|
|`*`(extra)UVa10612                                            |Paper Folding   |
|`*`(extra)UVa10155                                            |Green Eggs and Ham|
|`*`(extra)UVa11575                                            |Zerg Rush!!!    |星际争霸相关模拟题|
|`**`(extra)LA2103                                             |Checker's Check |
|`**`(extra)LA2105                                             |BSP Tree        |
|`**`(extra)LA2087                                             |A Well-Formed Problem|
|`**`(extra)LA2217                                             |Buffer Manager  |
|`**`(extra)UVa212                                             |Use of Hospital Facilities|容易写错，推荐 |
|`**`(extra)UVa252                                             |Trucking        |
|`**`(extra)UVa281                                             |Rubik's Cube    |
|`**`(extra)UVa292                                             |Presentation Error|
|`**`(extra)UVa293                                             |Bits            |
|`**`(extra)UVa330                                             |Inventory Maintenance|
|`**`(extra)UVa396                                             |Top Dog         |
|`**`(extra)UVa611                                             |Parallel Deadlock|

## 提高习题（Exercises: Advanced） ##

|[LA3568](http://livearchive.onlinejudge.org/external/35/3568.html)|Pockets|模拟折纸；统计口袋的个数|
|:-----------------------------------------------------------------|:------|:-----------|
|[LA4749](http://livearchive.onlinejudge.org/external/47/4749.html)|Game Simulator|扑克游戏《拖拉机》相关 |
|[UVa12417](http://uva.onlinejudge.org/external/124/12417.html)    |Formula Editor|合理使用OOP可以让程序更清晰|
|[UVa12421](http://uva.onlinejudge.org/external/124/12421.html)    |(Jiandan) Mua (I) - Lexical Analyzer|词法分析        |
|[UVa12422](http://uva.onlinejudge.org/external/124/12422.html)    |(Kengdie) Mua (II) - Expression Evaluator|表达式求值；类型系统  |
|[UVa12423](http://uva.onlinejudge.org/external/124/12423.html)    |(Last) Mua(III) - Full Interpreter|完整的动态语言解释器；递归下降法经典应用|
|`*`(extra)UVa11886                                                |Infinite Dictionaries|Python中的字典  |
|`**`(extra)LA2207                                                 |Fold-up Patterns|折纸，需要空间想象力  |
|`**`(extra)UVa304                                                 |Department|