#《算法竞赛入门经典——训练指南》第一章相关内容

# 勘误 #

P4. 情况二和图1(b)的对应关系有些误导，改成这样（反过来说）：“因此交换后答案不会变好的充要条件是：交换后X的结束时间不比交换前Y的结束时间早（交换后Y的结束时间肯定变早了），如下图(b)。这个条件可以写成`B[Y]+B[X]+J[X]>=B[X]+B[Y]+J[Y]`，化简得`J[X]>=J[Y]`。这就是我们贪心的依据。”然后把图1(b)上面的文字`B[Y]+B[X]+J[X]`改成`B[X]+B[Y]+J[Y]`。

（感谢chelsea\_fc@163.com和wuxinleiupc）

P5. 中间第三段。“对于1号来说，他给了4号x<sub>1</sub>枚金币，还剩下A<sub>i</sub>-x<sub>1</sub>枚。”应是A<sub>1</sub>-x<sub>1</sub>。

（感谢zr9558）

P18. 5和6的翻转方式弄反了（比如5在顶面的姿态应该是先左转3次，然后向上翻面）。两份代码也需要修改，详见代码仓库。虽然原来的代码也是对的，但是毕竟和文字对应不上，所以也改了

（感谢wustboli）

[第二次印刷改正]P34. 最后一行，“k是叶子和服务器的距离下限”应改为“k是叶子和服务器的距
离上限”

（感谢hunjioier）

p38. 例题16的代码有误，请参考最新的代码仓库。LA/UVa上的原数据不够强，现在已经加强数据并rejudge了。

（感谢Tankchen和叶子卿）

p44. 第一段代码的第一行，`int buf[10]`应改为`int buf[100]`。原来的代码越界了

（感谢wustboli）

P49. 最下方的括号中，“本题中所有的Ai均为整数”应该为“本题中所有的Ai均为正数”

（感谢叶子卿）

P58. 倒数第二小节，复杂度那边，`O(2^(n/2)*logn)`即`O(1.44^(n)*logn)`。1.44应改成1.414

（感谢ians\_fb@163.com）

[第二次印刷改正]P63 第一行，“当`A[i]=A[j]`时”改成“当`A[i]=B[j]`时”。

（感谢hunjioier）

p63. 问题11的最后一行中`27*1+(243+2)*2...` 应该是 `27*1+(243+3)*2+(729+81+9+1)*3=2979`

（感谢叶子卿）

p67. 例题28的题目描述中，应改为“每次玩家只能从左端或者右端取任意数量个数”

（感谢叶子卿）

p69. 例题29. 题目描述最后一句应该是"你的目标是让尽量多的服务完全瘫痪",而不是"服务器".

（感谢junpeng.man）

p70. 例题29的状态转移方程中的“f(S\_0)|S\_0是S的子集”应改为“f(S-S\_0)|S\_0是S的子集”

（感谢610082824@qq.com, 363107285@qq.com, junpeng.man）

[第二次印刷改正]p80 Uva 11627 翻译错误 输出不是数量 应是速度能通过的速度最大的滑雪板的速度。

（感谢Tankchen）

P78. 表1-3中倒数第2、3行的题号分别应改为LA4324和LA4328，题目名称也不对，见本wiki下面的表格:)

（感谢Miguel Revilla）

P82. 习题LA4850题目描述中的举例，最后一个二元组应该是（3,8)而不是（6,8）。

（感谢aczzdx）


---


以下是《算法竞赛入门经典——训练指南》第一章中的例题和习题列表。多数题目在书中已经给出了题目翻译，这里主要是为了让大家能方便的找到题解链接、数据下载等其他信息。

如果大家写了或者找到了下面题目（尤其是习题）的解题报告，欢迎留言推荐，我会做个链接 :)

或者有些题解网上找不到但你特别想知道怎么做，也可以留言，我们会努力在业余时间里选一些request很多的题目写点题解或者提示

# UVa特别题库 #

UVa网站专门为本书设立的分类题库配合，方便读者提交：

http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=442

注意，下面注有“extra”的习题并没有在书中出现，但在上面的特别题库中有，属于附加习题。

# 问题求解策略 (General Problem Solving Techniques) #

## 例题 (Examples) ##

|例题 1|[UVa11292](http://uva.onlinejudge.org/external/112/11292.html)|The Dragon of Loowater|排序后用贪心法|
|:---|:-------------------------------------------------------------|:---------------------|:------|
|例题 2|[UVa11729](http://uva.onlinejudge.org/external/117/11729.html)|Commando War          |用贪心法求最优排列；用“相邻交换法”证明正确性|
|例题 3|[UVa11300](http://uva.onlinejudge.org/external/113/11300.html)|Spreading The Wealth  |用代数法进行数学推导；中位数|
|例题 4|[LA3708](http://livearchive.onlinejudge.org/external/37/3708.html)|Graveyard             |推理；参考系 |
|例题 5|[UVa10881](http://uva.onlinejudge.org/external/108/10881.html)|Piotr's Ants          |等效变换；排序|
|例题 6|[LA2995](http://livearchive.onlinejudge.org/external/29/2995.html)|Image is Everything   |三维坐标系；迭代更新|
|例题 7|[UVa11464](http://uva.onlinejudge.org/external/114/11464.html)|Even Party            |部分枚举；递推|
|例题 8|[LA3401](http://livearchive.onlinejudge.org/external/34/3401.html)|Colored Cubes         |部分枚举；贪心|
|例题 9|[UVa11210](http://uva.onlinejudge.org/external/112/11210.html)|Chinese Mahjong       |回溯法；以中国麻将为背景|
|例题 10|[UVa11384](http://uva.onlinejudge.org/external/113/11384.html)|Help is needed for Dexter|问题转化；递归|
|例题 11|[UVa10795](http://uva.onlinejudge.org/external/107/10795.html)|A Different Task      |汉诺塔问题；递归|
|例题 12|[LA3971](http://livearchive.onlinejudge.org/external/39/3971.html)|Assemble              |二分法；贪心 |
|例题 13|[LA3635](http://livearchive.onlinejudge.org/external/36/3635.html)|Pie                   |二分法    |
|例题 14|[UVa11520](http://uva.onlinejudge.org/external/115/11520.html)|Fill the Square       |求字典序最小的解；贪心|
|例题 15|[LA3902](http://livearchive.onlinejudge.org/external/39/3902.html)|Network               |树上的最优化问题；贪心|
|例题 16|[LA3177](http://livearchive.onlinejudge.org/external/31/3177.html)|Beijing Guards        |二分法；贪心 |

## 入门习题 (Exercises：Beginner) ##

|[UVa11636](http://uva.onlinejudge.org/external/116/11636.html)|Hello World!|
|:-------------------------------------------------------------|:-----------|
|[UVa11039](http://uva.onlinejudge.org/external/110/11039.html)|Building Designing|
|[LA3213](http://livearchive.onlinejudge.org/external/32/3213.html)|Ancient Cipher|
|[LA3602](http://livearchive.onlinejudge.org/external/36/3602.html)|DNA Consensus String|
|[UVa10970](http://uva.onlinejudge.org/external/109/10970.html)|Big Chocolate|不需要动态规划     |
|[UVa10340](http://uva.onlinejudge.org/external/103/10340.html)|All in All  |
|[UVa10382](http://uva.onlinejudge.org/external/103/10382.html)|Watering Grass|经典模型；贪心     |
|[LA3303](http://livearchive.onlinejudge.org/external/33/3303.html)|Songs       |相邻交换法       |
|[LA5842](http://livearchive.onlinejudge.org/external/58/5842.html)|Equipment   |需认真分析题目     |
|[LA5844](http://livearchive.onlinejudge.org/external/58/5844.html)|Leet        |以“火星文”为背景的题目|
|(extra)[UVa10012](http://uva.onlinejudge.org/external/100/10012.html)|How Big Is It?|用最小的矩形包住n<=8个圆。回溯法|
|(extra)[UVa10020](http://uva.onlinejudge.org/external/100/10020.html)|Minimal coverage|数轴上有一些线段，选一些总长度尽量少的线段，覆盖区间[0,M]|
|(extra)[UVa10026](http://uva.onlinejudge.org/external/100/10026.html)|Shoemaker's Problem|经典问题。贪心法    |
|(extra)[UVa10317](http://uva.onlinejudge.org/external/103/10317.html)|Equating Equations|            |
|(extra)[UVa10318](http://uva.onlinejudge.org/external/103/10318.html)|Security Panel|            |
|(extra)[UVa10670](http://uva.onlinejudge.org/external/106/10670.html)|Work Reduction|            |
|`**`(extra)LA2032                                             |Helicopter  |
|`**`(extra)LA2222                                             |Garland     |
|`**`(extra)LA2093                                             |Moving Pegs |
|`**`(extra)UVa110                                             |Meta-Loopless Sorts|推荐          |
|`**`(extra)UVa120                                             |Stacks of Flapjacks|推荐          |
|`**`(extra)UVa254                                             |Towers of Hanoi|
|`**`(extra)UVa311                                             |Packets     |
|`**`(extra)UVa434                                             |Matty's Blocks|推荐          |
|`**`(extra)UVa669                                             |Defragment  |推荐          |
|`**`(extra)UVa757                                             |Gone Fishing|推荐          |
|`**`(extra)UVa769                                             |Magic of David Copperfield|
|`**`(extra)UVa812                                             |Trade on Verweggistan|推荐          |
|`**`(extra)UVa140                                             |Bandwidth   |搜索剪枝        |
|`**`(extra)UVa165                                             |Stamps      |搜索剪枝（推荐）    |
|`**`(extra)UVa225                                             |Golygons    |
|`**`(extra)UVa269                                             |Counting Patterns|
|`**`(extra)UVa387                                             |A Puzzling Problem|搜索          |
|`**`(extra)UVa471                                             |Magic Numbers|
|`**`(extra)UVa524                                             |Prime Ring Problem|
|`**`(extra)UVa585                                             |Triangles   |枚举          |
|`**`(extra)UVa654                                             |Ratio       |枚举          |
|`**`(extra)UVa656                                             |Optimal Programs|搜索          |
|`**`(extra)UVa687                                             |Lattice Practices|
|`**`(extra)UVa817                                             |According to Bartjens|搜索          |
|`**`(extra)UVa818                                             |Cutting Chains|搜索（推荐）      |

## 中级习题 (Exercises：Intermediate) ##

|[UVa10905](http://uva.onlinejudge.org/external/109/10905.html)|Children's Game|贪心。容易想错！建议编程并提交|[题解1](http://hi.baidu.com/knowledgetime/item/5667ceb218961facebba93e8)|
|:-------------------------------------------------------------|:--------------|:--------------|:---------------------------------------------------------------------|
|[LA4254](http://livearchive.onlinejudge.org/external/42/4254.html)|Processor      |二分法            |
|[UVa11627](http://uva.onlinejudge.org/external/116/11627.html)|Slalom         |二分法            |
|[UVa11134](http://uva.onlinejudge.org/external/111/11134.html)|Fabled Rooks   |经典问题的变形        |
|[UVa11100](http://uva.onlinejudge.org/external/111/11100.html)|The Trip, 2007 |
|[LA3266](http://livearchive.onlinejudge.org/external/32/3266.html)|Tian Ji - The Horse Racing|有多种方法          |
|[UVa11389](http://uva.onlinejudge.org/external/113/11389.html)|The Bus Driver Problem|有多种方法          |
|[LA4094](http://livearchive.onlinejudge.org/external/40/4094.html)|Wonder Team    |
|[LA3507](http://livearchive.onlinejudge.org/external/35/3507.html)|Keep the Customer Satisfied|经典问题的变形        |
|[LA4324](http://livearchive.onlinejudge.org/external/43/4324.html)|Ugly Windows   |注意细节           |
|[LA4328](http://livearchive.onlinejudge.org/external/43/4328.html)|Priest John's Busiest Day|认真分析题目         |
|[LA4636](http://livearchive.onlinejudge.org/external/46/4636.html)|Cubist Artwork |有趣的题目；逻辑推理     |
|[LA4253](http://livearchive.onlinejudge.org/external/42/4253.html)|Archery        |枚举。注意特殊情况和精度   |
|[LA3667](http://livearchive.onlinejudge.org/external/36/3667.html)|Ruler          |搜索             |
|[LA3403](http://livearchive.onlinejudge.org/external/34/3403.html)|Mobile Computing|枚举二叉树          |
|[LA3621](http://livearchive.onlinejudge.org/external/36/3621.html)|Power Calculation|经典的搜索题目；注意优化   |
|(extra)[UVa10037](http://uva.onlinejudge.org/external/100/10037.html)|Bridge         |有趣的过河问题。分情况讨论；贪心法|
|(extra)[UVa10602](http://uva.onlinejudge.org/external/106/10602.html)|Editor Nottoobad|               |
|(extra)[UVa10716](http://uva.onlinejudge.org/external/107/10716.html)|Evil Straw Warts Live|               |
|(extra)[UVa11127](http://uva.onlinejudge.org/external/111/11127.html)|Triple-Free Binary Strings|               |
|`*`(extra)UVa10120                                            |Gift?!         |推荐             |
|`*`(extra)UVa10123                                            |No Tipping     |
|`*`(extra)UVa10366                                            |Faucet Flow    |推荐             |
|`*`(extra)UVa10396                                            |Vampire Numbers|
|`*`(extra)UVa10479                                            |The Hendrie Sequence|推荐             |
|`*`(extra)UVa10483                                            |The Sum Equals the Product|
|`*`(extra)UVa10570                                            |Meeting with Aliens|
|`*`(extra)UVa10609                                            |Fractal        |
|`*`(extra)UVa10624                                            |Super Number   |
|`*`(extra)UVa10729                                            |Treequivalence |推荐             |
|`*`(extra)UVa10747                                            |Maximum Subsequence|
|`*`(extra)UVa10771                                            |Barbarian tribes|
|`*`(extra)UVa11012                                            |Cosmic Cabbages|推荐             |
|`*`(extra)UVa11106                                            |Rectilinear Polygon|推荐             |
|`*`(extra)UVa11269                                            |Setting Problems|
|`*`(extra)UVa11387                                            |The 3-Regular Graph|
|`*`(extra)UVa11714                                            |Blind Sorting  |
|`*`(extra)UVa11776                                            |Oh Your Royal Greediness!|经典问题           |
|`*`(extra)UVa11920                                            |0s, 1s and ? Marks|推荐             |
|`*`(extra)UVa11986                                            |Save from Radiation.|推荐             |
|`**`(extra)LA2220                                             |Binary Search  |
|`**`(extra)LA2084                                             |Problem Bee    |
|`**`(extra)UVa668                                             |Parliament     |推荐             |
|`**`(extra)UVa714                                             |Copying Books  |DP或者二分+贪心      |
|`**`(extra)UVa211                                             |The Domino Effect|搜索             |
|`**`(extra)UVa219                                             |Department of Redundancy Department|推荐             |
|`**`(extra)UVa229                                             |Scanner        |推荐             |
|`**`(extra)UVa279                                             |Spin           |
|`**`(extra)UVa307                                             |Sticks         |搜索（推荐）         |
|`**`(extra)UVa322                                             |Ships          |
|`**`(extra)UVa502                                             |DEL command    |
|`**`(extra)UVa510                                             |Optimal Routing|
|`**`(extra)UVa519                                             |Puzzle (II)    |
|`**`(extra)UVa529                                             |Addition Chain |
|`**`(extra)UVa589                                             |Pushing Boxes  |推箱子            |
|`**`(extra)UVa609                                             |Metal Cutting  |搜索，几何          |
|`**`(extra)UVa646                                             |The Gourmet Club|
|`**`(extra)UVa649                                             |You Who?       |
|`**`(extra)UVa690                                             |Pipeline Scheduling|
|`**`(extra)UVa764                                             |Pentominoes    |搜索             |
|`**`(extra)UVa770                                             |Puncher        |搜索             |
|`**`(extra)UVa772                                             |Divide et unita|搜索             |
|`**`(extra)UVa798                                             |Tile Puzzle    |

## 提高习题 (Exercises：Advanced) ##

|[LA4725](http://livearchive.onlinejudge.org/external/47/4725.html)|Airport|
|:-----------------------------------------------------------------|:------|
|[LA4850](http://livearchive.onlinejudge.org/external/48/4850.html)|Installations|
|[LA2757](http://livearchive.onlinejudge.org/external/27/2757.html)|Supermarket|经典问题   |
|[LA5693](http://livearchive.onlinejudge.org/external/56/5693.html)|Compress the String|搜索。需要优化|
|[LA5704](http://livearchive.onlinejudge.org/external/57/5704.html)|Yummy Triangular Pizza|回溯法。https://oeis.org/A006534|
|[UVa10825](http://uva.onlinejudge.org/external/108/10825.html)    |Anagram and Multiplication|枚举（需要猜想）|
|[UVa10639](http://uva.onlinejudge.org/external/106/10639.html)    |Square Puzzle|回溯法。注意细节|
|[LA3406](http://livearchive.onlinejudge.org/external/34/3406.html)|Bingo  |注意枚举方式 |
|[LA2108](http://livearchive.onlinejudge.org/external/21/2108.html)|Houses Divided|搜索；需要优化|
|[LA4644](http://livearchive.onlinejudge.org/external/46/4644.html)|Hobby on Rails|比较繁琐的搜索题目|
|(extra)[UVa10383](http://uva.onlinejudge.org/external/103/10383.html)|Queen vs Rook|       |
|(extra)[UVa10411](http://uva.onlinejudge.org/external/104/10411.html)|Another Game of Tetris|       |
|(extra)[UVa10414](http://uva.onlinejudge.org/external/104/10414.html)|Denki Blocks|       |
|(extra)[UVa10492](http://uva.onlinejudge.org/external/104/10492.html)|Optimal Mastermind Strategy|       |
|(extra)[UVa10571](http://uva.onlinejudge.org/external/105/10571.html)|Products|       |
|(extra)[UVa10605](http://uva.onlinejudge.org/external/106/10605.html)|Mines For Diamonds|       |
|(extra)[UVa10628](http://uva.onlinejudge.org/external/106/10628.html)|Quadrills|       |
|(extra)[UVa10632](http://uva.onlinejudge.org/external/106/10632.html)|Pyramid|       |
|(extra)[UVa10833](http://uva.onlinejudge.org/external/108/10833.html)|Lunar Forest|       |
|(extra)[UVa11694](http://uva.onlinejudge.org/external/116/11694.html)|Gokigen Naname|       |
|(extra)[UVa11794](http://uva.onlinejudge.org/external/117/11794.html)|Dazzling Puzzle|       |
|(extra)[UVa11846](http://uva.onlinejudge.org/external/118/11846.html)|Finding Seats Again|       |
|`*`(extra)UVa10272                                                |DDR King|推荐     |
|`*`(extra)UVa10471                                                |Can't be too GREEDY|
|`*`(extra)UVa10640                                                |Planes around the World|推荐     |
|`*`(extra)UVa10658                                                |ReArrange|
|`*`(extra)UVa10675                                                |Revenge of Faucet Flow|推荐     |
|`*`(extra)UVa10786                                                |Qualifying for the Champions League|
|`*`(extra)UVa10904                                                |Structural Equivalence|推荐     |
|`*`(extra)UVa11006                                                |Wheel Good|推荐     |
|`*`(extra)UVa11041                                                |Quarter-Finals with Brazil!? No!!!|
|`*`(extra)UVa11129                                                |An antiarithmetic permutation|
|`*`(extra)UVa11142                                                |MineSweeper II|推荐     |
|`*`(extra)UVa11184                                                |Joyful Ride|
|`*`(extra)UVa11251                                                |Fractions|
|`*`(extra)UVa11268                                                |Reliable Network|
|`*`(extra)UVa11318                                                |Marble Game|推荐     |
|`*`(extra)UVa11445                                                |Water Tanks EXTREME|推荐     |
|`*`(extra)UVa11522                                                |Pyramid Number|
|`*`(extra)UVa11527                                                |Morning Walk|
|`*`(extra)UVa11570                                                |Sudoku without numbers?|
|`*`(extra)UVa11630                                                |Cyclic antimonotonic permutations|
|`*`(extra)UVa11814                                                |Stack Machine|推荐     |
|`*`(extra)UVa11925                                                |Generating Permutations|推荐     |
|`*`(extra)UVa12011                                                |Complete the Set|
|`**`(extra)LA2097                                                 |Lost Lists|
|`**`(extra)LA2098                                                 |Coins  |
|`**`(extra)UVa135                                                 |No Rectangles|构造     |
|`**`(extra)UVa605                                                 |The Rotating Disk|推荐     |
|`**`(extra)UVa608                                                 |Counterfeit Dollar|称硬币问题  |
|`**`(extra)UVa799                                                 |Safari Holiday|构造     |

# 高效算法设计 (Designing Efficient Algorithms) #

## 例题 (Examples) ##

|例题 17|[UVa11462](http://uva.onlinejudge.org/external/114/11462.html)|Age Sort|排序后用贪心法|
|:----|:-------------------------------------------------------------|:-------|:------|
|例题 18|[UVa11078](http://uva.onlinejudge.org/external/110/11078.html)|Open Credit System|扫描、维护最大值|
|例题 19|[UVa11549](http://uva.onlinejudge.org/external/115/11549.html)|Calculator Conundrum|Floyd判圈算法|
|例题 20|[LA3905](http://livearchive.onlinejudge.org/external/39/3905.html)|Meteor  |线性扫描；事件点处理|
|例题 21|[LA2678](http://livearchive.onlinejudge.org/external/26/2678.html)|Subsequence|线性扫描；前缀和；单调性|
|例题 22|[LA3029](http://livearchive.onlinejudge.org/external/30/3029.html)|City Game|递推；扫描法 |
|例题 23|[LA3695](http://livearchive.onlinejudge.org/external/36/3695.html)|Distant Galaxy|枚举；线性扫描|
|例题 24|[UVa10755](http://uva.onlinejudge.org/external/107/10755.html)|Garbage heap|前缀和、降维、递推|
|例题 25|[LA2965](http://livearchive.onlinejudge.org/external/29/2965.html)|Jurassic Remains|中途相遇法  |

## 入门习题 （Exercises: Beginner） ##

|[UVa10125](http://uva.onlinejudge.org/external/101/10125.html)|Sumsets|中途相遇法|
|:-------------------------------------------------------------|:------|:----|
|[UVa10763](http://uva.onlinejudge.org/external/107/10763.html)|Foreign Exchange|快速检索 |
|[UVa10391](http://uva.onlinejudge.org/external/103/10391.html)|Compound Words|字符串检索；哈希表|
|[UVa11054](http://uva.onlinejudge.org/external/110/11054.html)|Wine trading in Gergovia|扫描法  |
|(extra)[UVa10324](http://uva.onlinejudge.org/external/103/10324.html)|Zeroes and Ones|     |
|`*`(extra)UVa10535                                            |Shooter|
|`*`(extra)UVa10730                                            |Antiarithmetic?|推荐   |
|`*`(extra)UVa10810                                            |Ultra-QuickSort|
|`**`(extra)UVa221                                             |Urban Elevations|推荐   |
|`**`(extra)UVa517                                             |Word   |

## 中级习题 (Exercises：Intermediate) ##

|[LA2963](http://livearchive.onlinejudge.org/external/29/2963.html)|Hypertransmission|扫描；维护信息|
|:-----------------------------------------------------------------|:----------------|:------|
|[UVa10827](http://uva.onlinejudge.org/external/108/10827.html)    |Maximum sum on a torus|前缀和；降维 |
|[LA4726](http://livearchive.onlinejudge.org/external/47/4726.html)|Average          |数形结合或者单调队列|
|[LA4950](http://livearchive.onlinejudge.org/external/49/4950.html)|Selling Land     |
|[LA4356](http://livearchive.onlinejudge.org/external/43/4356.html)|Fire-Control System|扫描法    |
|[LA2689](http://livearchive.onlinejudge.org/external/26/2689.html)|Cricket Field    |在W\*H网格里找一个最大空正方形|
|[LA5052](http://livearchive.onlinejudge.org/external/50/5052.html)|Genome Evolution |
|[LA3716](http://livearchive.onlinejudge.org/external/37/3716.html)|DNA Regions      |利用数学变形或者数形结合|
|[LA4621](http://livearchive.onlinejudge.org/external/46/4621.html)|Cav              |
|[LA3693](http://livearchive.onlinejudge.org/external/36/3693.html)|Balancing the Scale|用空间换时间 |[题解1](http://www.cppblog.com/shiming413/archive/2008/12/21/29671.html)|
|[LA4294](http://livearchive.onlinejudge.org/external/42/4294.html)|Shuffle          |有多种方法  |
|[LA5848](http://livearchive.onlinejudge.org/external/58/5848.html)|Soju             |
|[LA4062](http://livearchive.onlinejudge.org/external/40/4062.html)|You are around me ...|
|(extra)[UVa10132](http://uva.onlinejudge.org/external/101/10132.html)|File Fragmentation|       |
|(extra)[UVa10691](http://uva.onlinejudge.org/external/106/10691.html)|Subway           |       |
|(extra)[UVa11589](http://uva.onlinejudge.org/external/115/11589.html)|Save the President|       |
|`*`(extra)UVa11536                                                |Smallest Sub-Array|
|`*`(extra)UVa11572                                                |Unique Snowflakes|
|`**`(extra)LA2159                                                 |The Game of Master-Mind|
|`**`(extra)LA2065                                                 |Edge Detection   |

## 提高习题 （Exercises: Advanced） ##

|[LA4851](http://livearchive.onlinejudge.org/external/48/4851.html)|Restaurant|
|:-----------------------------------------------------------------|:---------|
|[LA4629](http://livearchive.onlinejudge.org/external/46/4629.html)|Knowledge for the masses|

# 动态规划 （Dynamic Programming） #

## 例题 （Examples） ##

|例题 26|[LA3882](http://livearchive.onlinejudge.org/external/38/3882.html)|And Then There Was One|递归、问题转化|
|:----|:-----------------------------------------------------------------|:---------------------|:------|
|例题 27|[UVa10635](http://uva.onlinejudge.org/external/106/10635.html)    |Prince and Princess   |LCS；可转化为LIS|
|例题 28|[UVa10891](http://uva.onlinejudge.org/external/108/10891.html)    |Sum                   |避免重复计算 |
|例题 29|[UVa11825](http://uva.onlinejudge.org/external/118/11825.html)    |Hacker's Crackdown    |集合动态规划；子集枚举|
|例题 30|[UVa10859](http://uva.onlinejudge.org/external/108/10859.html)    |Placing Lampposts     |树上的动态规划|
|例题 31|[LA3983](http://livearchive.onlinejudge.org/external/39/3983.html)|Robotruck             |动态规划；滑动窗口优化；单调队列|
|例题 32|[LA4794](http://livearchive.onlinejudge.org/external/47/4794.html)|Sharing Chocolate     |集合动态规划、状态精简|

## 入门习题 （Exercises: Beginner） ##

|[UVa11584](http://uva.onlinejudge.org/external/115/11584.html)|Partitioning by Palindromes|入门题目|
|:-------------------------------------------------------------|:--------------------------|:---|
|[LA4256](http://livearchive.onlinejudge.org/external/42/4256.html)|Salesman                   |入门题目|
|[UVa10534](http://uva.onlinejudge.org/external/105/10534.html)|Wavio Sequence             |可以转化为经典问题，时间O(nlogn)|
|[UVa11552](http://uva.onlinejudge.org/external/115/11552.html)|Fewest Flops               |序列划分模型；状态设计|
|[UVa11404](http://uva.onlinejudge.org/external/114/11404.html)|Palindromic Subsequence    |可以转化为LCS|
|[LA4731](http://livearchive.onlinejudge.org/external/47/4731.html)|Cellular Network           |需要一点概率知识和推理|
|[UVa11795](http://uva.onlinejudge.org/external/117/11795.html)|Mega Man's Missions        |基础的集合动态规划|
|[LA4727](http://livearchive.onlinejudge.org/external/47/4727.html)|Jump                       |Joseph问题的变形|
|[LA3530](http://livearchive.onlinejudge.org/external/35/3530.html)|Martian Mining             |模型简单，但需要减少重复计算|
|[UVa10564](http://uva.onlinejudge.org/external/105/10564.html)|Paths through the Hourglass|类似01 背包问题|
|[UVa10817](http://uva.onlinejudge.org/external/108/10817.html)|Headmaster's Headache      |集合动态规划|
|[LA2038](http://livearchive.onlinejudge.org/external/20/2038.html)|Strategic Game             |树上动态规划（基础题）|
|[LA3363](http://livearchive.onlinejudge.org/external/33/3363.html)|String Compression         |字符串动态规划|
|[LA2031](http://livearchive.onlinejudge.org/external/20/2031.html)|Dance Dance Revolution     |以跳舞机为背景的题目|
|[LA4643](http://livearchive.onlinejudge.org/external/46/4643.html)|Twenty Questions           |有趣的问题；比较基础的动态规划|
|(extra)[UVa10163](http://uva.onlinejudge.org/external/101/10163.html)|Storage Keepers            |    |
|(extra)[UVa10453](http://uva.onlinejudge.org/external/104/10453.html)|Make Palindrome            |    |
|`*`(extra)UVa10254                                            |The Priest Mathematician   |
|`**`(extra)UVa437                                             |The Tower of Babylon       |
|`**`(extra)UVa442                                             |Matrix Chain Multiplication|最优矩阵乘法|
|`**`(extra)UVa473                                             |Raucous Rockers            |可以优化|
|`**`(extra)UVa590                                             |Always on the Run          |
|`**`(extra)UVa607                                             |Scheduling Lectures        |
|`**`(extra)UVa662                                             |Fast Food                  |可以优化|
|`**`(extra)UVa672                                             |Gangsters                  |

## 中级习题 (Exercises：Intermediate) ##

|[LA4945](http://livearchive.onlinejudge.org/external/49/4945.html)|Free Goodies|也可以贪心，时间效率更高|
|:-----------------------------------------------------------------|:-----------|:-----------|
|[LA4327](http://livearchive.onlinejudge.org/external/43/4327.html)|Parade      |模型不难想，但需要优化 |
|[LA4015](http://livearchive.onlinejudge.org/external/40/4015.html)|Cave        |树的动态规划      |
|[LA4490](http://livearchive.onlinejudge.org/external/44/4490.html)|Help Bubu   |
|[UVa11600](http://uva.onlinejudge.org/external/116/11600.html)    |Masud Rana  |注意状态表示      |
|[LA4987](http://livearchive.onlinejudge.org/external/49/4987.html)|Evacuation Plan|
|[LA4613](http://livearchive.onlinejudge.org/external/46/4613.html)|Mountain Road|
|[LA4614](http://livearchive.onlinejudge.org/external/46/4614.html)|Moving to Nuremberg|
|[LA4050](http://livearchive.onlinejudge.org/external/40/4050.html)|Hanoi Towers|
|[LA3305](http://livearchive.onlinejudge.org/external/33/3305.html)|Tour        |经典问题        |
|[LA3412](http://livearchive.onlinejudge.org/external/34/3412.html)|Pesky Heroes|树的动态规划（题目不太好理解）|
|[LA3679](http://livearchive.onlinejudge.org/external/36/3679.html)|Pitcher Rotation|需要一点优化（精简状态）|
|[LA3605](http://livearchive.onlinejudge.org/external/36/3605.html)|Roommate    |
|[LA3608](http://livearchive.onlinejudge.org/external/36/3608.html)|Period      |
|[LA3610](http://livearchive.onlinejudge.org/external/36/3610.html)|Log Jumping |可以转化为经典问题   |
|[LA2221](http://livearchive.onlinejudge.org/external/22/2221.html)|Frontier    |涉及到几何（见第四章）的动态规划|
|[LA3132](http://livearchive.onlinejudge.org/external/31/3132.html)|Minimax Triangulation|
|[LA3710](http://livearchive.onlinejudge.org/external/37/3710.html)|Interconnect|注意状态表示      |
|[LA5088](http://livearchive.onlinejudge.org/external/50/5088.html)|Alice and Bob's Trip|树上的动态规划     |
|[LA3782](http://livearchive.onlinejudge.org/external/37/3782.html)|Bigger is Better|有多种方法。可以不用高精度|
|(extra)[UVa10003](http://uva.onlinejudge.org/external/100/10003.html)|Cutting Sticks|经典的动态规划题目。可以用四边形不等式优化|
|(extra)[UVa10239](http://uva.onlinejudge.org/external/102/10239.html)|The Book-shelver's Problem|            |
|(extra)[UVa10271](http://uva.onlinejudge.org/external/102/10271.html)|Chopsticks  |            |
|(extra)[UVa10304](http://uva.onlinejudge.org/external/103/10304.html)|Optimal Binary Search Tree|            |
|(extra)[UVa10599](http://uva.onlinejudge.org/external/105/10599.html)|Robots(II)  |            |
|(extra)[UVa10604](http://uva.onlinejudge.org/external/106/10604.html)|Chemical Reaction|            |
|(extra)[UVa10618](http://uva.onlinejudge.org/external/106/10618.html)|Tango Tango Insurrection|            |
|(extra)[UVa10641](http://uva.onlinejudge.org/external/106/10641.html)|Barisal Stadium|            |
|(extra)[UVa10671](http://uva.onlinejudge.org/external/106/10671.html)|Grid Speed  |            |
|(extra)[UVa10688](http://uva.onlinejudge.org/external/106/10688.html)|The Poor Giant|            |
|(extra)[UVa11263](http://uva.onlinejudge.org/external/112/11263.html)|Nested Rectangles|            |
|(extra)[UVa11400](http://uva.onlinejudge.org/external/114/11400.html)|Lighting System Design|            |
|(extra)[UVa11578](http://uva.onlinejudge.org/external/115/11578.html)|Situp Benches|            |
|(extra)[UVa11691](http://uva.onlinejudge.org/external/116/11691.html)|Allergy Test|            |
|(extra)[UVa11766](http://uva.onlinejudge.org/external/117/11766.html)|Racing Car Computer|            |
|(extra)[UVa12002](http://uva.onlinejudge.org/external/120/12002.html)|Happy Birthday|            |
|`*`(extra)UVa10723                                                |Cyborg Genes|推荐          |
|`*`(extra)UVa10934                                                |Dropping water|推荐          |
|`*`(extra)UVa10981                                                |String Morphing|推荐          |
|`*`(extra)UVa11307                                                |Alternative Arborescene|推荐          |
|`*`(extra)UVa11456                                                |Trainsorting|
|`*`(extra)UVa11782                                                |Optimal Cut |
|`**`(extra)LA2096                                                 |Taekwondo   |
|`**`(extra)LA2151                                                 |Telescope   |

## 提高习题（Exercises: Advanced） ##

|[LA4394](http://livearchive.onlinejudge.org/external/43/4394.html)|String Painter|序列的动态规划，有一定难度|
|:-----------------------------------------------------------------|:-------------|:------------|
|[LA4593](http://livearchive.onlinejudge.org/external/45/4593.html)|Exclusive Access 2|
|[LA4048](http://livearchive.onlinejudge.org/external/40/4048.html)|Fund Management|注意状态表示       |
|[LA4625](http://livearchive.onlinejudge.org/external/46/4625.html)|Garlands      |
|[LA3683](http://livearchive.onlinejudge.org/external/36/3683.html)|A Scheduling Problem|树的动态规划       |
|[LA3637](http://livearchive.onlinejudge.org/external/36/3637.html)|The Bookcase  |不太容易想到，且需要优化 |
|[LA5717](http://livearchive.onlinejudge.org/external/57/5717.html)|Peach Blossom Spring|一类经典题目（最早出现在NWERC2006，但本题数据更强）|
|[LA3623](http://livearchive.onlinejudge.org/external/36/3623.html)|The Best Name for Your Baby|有难度的动态规划；注意计算顺序|
|[LA4002](http://livearchive.onlinejudge.org/external/40/4002.html)|The Ultimate Password|有难度的动态规划；注意计算顺序|
|[LA2178](http://livearchive.onlinejudge.org/external/21/2178.html)|The Minimum Number of Rooks|有难度的动态规划     |
|[LA2923](http://livearchive.onlinejudge.org/external/29/2923.html)|Bundling      |
|[LA2930](http://livearchive.onlinejudge.org/external/29/2930.html)|Minimizing Maximizer|01 原则；数据结构优化动态规划|
|[LA3181](http://livearchive.onlinejudge.org/external/31/3181.html)|Fixing the Great Wall|
|[LA4290](http://livearchive.onlinejudge.org/external/42/4290.html)|Easy Climb    |需要优化         |
|[UVa10559](http://uva.onlinejudge.org/external/105/10559.html)    |Blocks        |重点是设计状态及其转移  |
|[LA4031](http://livearchive.onlinejudge.org/external/40/4031.html)|Integer Transmission|需要认真思考。可以做到O(n^2)时间。|
|[UVa11521](http://uva.onlinejudge.org/external/115/11521.html)    |Compressor    |需要认真思考。很容易写错。|
|(extra)[UVa10949](http://uva.onlinejudge.org/external/109/10949.html)|Kids in a Grid|             |
|(extra)[UVa11193](http://uva.onlinejudge.org/external/111/11193.html)|Infinix       |             |
|(extra)[UVa11194](http://uva.onlinejudge.org/external/111/11194.html)|Stone Grid    |             |
|(extra)[UVa11810](http://uva.onlinejudge.org/external/118/11810.html)|Gentle ping, to the old King|             |
|`*`(extra)UVa11171                                                |SMS           |
|`*`(extra)UVa11435                                                |Network EXTREME!!!|推荐           |
|`*`(extra)UVa11502                                                |Rocket Stages |
|`*`(extra)UVa11750                                                |Red-Blue Tree |推荐           |
|`*`(extra)UVa11803                                                |The Great Merge|