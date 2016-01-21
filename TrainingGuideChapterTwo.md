#《算法竞赛入门经典——训练指南》第二章相关内容

# 勘误 #

P111页 问题5最后的表达式f(root) =
(s(root)-1)!/(s(1)!s(2)!s(3)!...s(n)!) 应该是f(root) = (s(root)-1)!/(s(1)s(2)s(3)...s(n))

（感谢gyarenas）

P112. 例题4，LA3516的图画错了，请参考原题： https://icpcarchive.ecs.baylor.edu/external/35/3516.html

（感谢liuzykl）

P135. Nim游戏的解法，(1)证明的最后一段，新的Nim和等于`X xor Y xor Z = X or Y xor (Y xor X) = 0`。这里的`or`改为`xor`

（感谢）

P171. UVa10780的翻译里，输入顺序是先m后n而不是先n后m，而且无解要输出"Impossible to divide"

（感谢：luyuncheng）
（来源：http://blog.csdn.net/luyuncheng/article/details/8475181 ）

[第二次印刷改正]p180. 表2-8 第一行信息有误，应为：

|例题14|UVa11021|Tribbles|离散概率；递推|
|:---|:-------|:-------|:------|


---


以下是《算法竞赛入门经典——训练指南》第二章中的例题和习题列表。多数题目在书中已经给出了题目翻译，这里主要是为了让大家能方便的找到题解链接、数据下载等其他信息。

如果大家写了或者找到了下面题目（尤其是习题）的解题报告，欢迎留言推荐，我会做个链接 :)

或者有些题解网上找不到但你特别想知道怎么做，也可以留言，我们会努力在业余时间里选一些request很多的题目写点题解或者提示

# UVa特别题库 #

UVa网站专门为本书设立的分类题库配合，方便读者提交：

http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=442

注意，下面注有“extra”的习题并没有在书中出现，但在上面的特别题库中有，属于附加习题。

# 基础练习 （Basic Problems） #

|[UVa11388](http://uva.onlinejudge.org/external/113/11388.html)|GCD LCM|
|:-------------------------------------------------------------|:------|
|[UVa11889](http://uva.onlinejudge.org/external/118/11889.html)|Benefit|
|[UVa10943](http://uva.onlinejudge.org/external/109/10943.html)|How do you add?|
|[UVa10780](http://uva.onlinejudge.org/external/107/10780.html)|Again Prime? No time.|
|[UVa10892](http://uva.onlinejudge.org/external/108/10892.html)|LCM Cardinality|
|[UVa11752](http://uva.onlinejudge.org/external/117/11752.html)|The Super Powers|
|[UVa11076](http://uva.onlinejudge.org/external/110/11076.html)|Add Again|
|[UVa11609](http://uva.onlinejudge.org/external/116/11609.html)|Teams  |
|[LA2889](http://livearchive.onlinejudge.org/external/28/2889.html)|Palindrome Numbers|
|[UVa11489](http://uva.onlinejudge.org/external/114/11489.html)|Integer Game|
|[UVa10791](http://uva.onlinejudge.org/external/107/10791.html)|Minimum Sum LCM|
|[UVa11461](http://uva.onlinejudge.org/external/114/11461.html)|Square Numbers|
|[LA2911](http://livearchive.onlinejudge.org/external/29/2911.html)|Maximum|
|[LA2756](http://livearchive.onlinejudge.org/external/27/2756.html)|Crazy tea party|
|`*`(extra)UVa10339                                            |Watching Watches|推荐     |
|`*`(extra)UVa10367                                            |Equations|推荐     |
|`*`(extra)UVa10586                                            |Polynomial Remains|
|`*`(extra)UVa10693                                            |Traffic Volume|
|`*`(extra)UVa10726                                            |Coco Monkey|
|`*`(extra)UVa10773                                            |Back to Intermediate Math|
|`*`(extra)UVa10995                                            |Educational Journey|推荐     |
|`*`(extra)UVa11029                                            |Leading and Trailing|
|`*`(extra)UVa11314                                            |Hardly Hard|
|`**`(extra)LA2080                                             |Floating Point Numbers|
|`**`(extra)LA2077                                             |Clock  |
|`**`(extra)UVa244                                             |Train Time|
|`**`(extra)UVa278                                             |Chess  |
|`**`(extra)UVa591                                             |Box of Bricks|
|`**`(extra)UVa616                                             |Coconuts, Revisited|
|`**`(extra)UVa617                                             |Nonstop Travel|
|`**`(extra)UVa618                                             |Doing Windows|
|`**`(extra)UVa783                                             |Trains |
|`**`(extra)UVa797                                             |Two Way Traffic|
|`**`(extra)UVa808                                             |Bee Breeding|

# 组合计数 （Counting） #

## 例题 （Examples） ##

|例题1|[UVa11538](http://uva.onlinejudge.org/external/115/11538.html)|Chess Queen|基本计数原理|
|:--|:-------------------------------------------------------------|:----------|:-----|
|例题2|[UVa11401](http://uva.onlinejudge.org/external/114/11401.html)|Triangle Counting|基本计数原理|
|例题3|[UVa11806](http://uva.onlinejudge.org/external/118/11806.html)|Cheerleaders|容斥原理  |
|例题4|[LA3516](http://livearchive.onlinejudge.org/external/35/3516.html)|Exploring Pyramids|递推    |
|例题5|[UVa11361](http://uva.onlinejudge.org/external/113/11361.html)|Investigating Div-Sum Property|整数区间分解；递推|
|例题6|[LA4123](http://livearchive.onlinejudge.org/external/41/4123.html)|Glenbow Museum|递推；状态精简|
|例题7|[UVa10253](http://uva.onlinejudge.org/external/102/10253.html)|Series-Parallel Networks|综合应用  |

## 入门习题 （Exercises：Beginner） ##

|[UVa11038](http://uva.onlinejudge.org/external/110/11038.html)|How Many 0's?|
|:-------------------------------------------------------------|:------------|
|[UVa10883](http://uva.onlinejudge.org/external/108/10883.html)|Supermean    |
|[LA5846](http://livearchive.onlinejudge.org/external/58/5846.html)|Neon Sign    |
|[LA3357](http://livearchive.onlinejudge.org/external/33/3357.html)|Pinary       |
|[UVa11645](http://uva.onlinejudge.org/external/116/11645.html)|Bits         |
|(extra)[UVa10079](http://uva.onlinejudge.org/external/100/10079.html)|Pizza Cutting|
|(extra)[UVa10081](http://uva.onlinejudge.org/external/100/10081.html)|Tight Words  |
|(extra)[UVa10157](http://uva.onlinejudge.org/external/101/10157.html)|Expressions  |
|(extra)[UVa10312](http://uva.onlinejudge.org/external/103/10312.html)|Expression Bracketing|
|(extra)[UVa10497](http://uva.onlinejudge.org/external/104/10497.html)|Sweet Child Makes Trouble|
|`**`(extra)UVa417                                             |Word Index   |字符串的字典序      |
|`**`(extra)UVa580                                             |Critical Mass|递推           |

## 中级习题 （Exercises：Intermediate） ##

|[LA3720](http://livearchive.onlinejudge.org/external/37/3720.html)|Highways|
|:-----------------------------------------------------------------|:-------|
|[LA3295](http://livearchive.onlinejudge.org/external/32/3295.html)|Counting Triangles|
|[UVa11529](http://uva.onlinejudge.org/external/115/11529.html)    |Strange Tax Calculation|
|[LA4064](http://livearchive.onlinejudge.org/external/40/4064.html)|Magnetic Train Tracks|
|[LA4390](http://livearchive.onlinejudge.org/external/43/4390.html)|Counting Heaps|
|[UVa11481](http://uva.onlinejudge.org/external/114/11481.html)    |Arrange the Numbers|
|[LA4258](http://livearchive.onlinejudge.org/external/42/4258.html)|Metal   |
|[UVa10237](http://uva.onlinejudge.org/external/102/10237.html)    |Bishops |
|(extra)[UVa10128](http://uva.onlinejudge.org/external/100/10128.html)|Queue   |
|(extra)[UVa10458](http://uva.onlinejudge.org/external/104/10458.html)|Cricket Ranking|
|(extra)[UVa10623](http://uva.onlinejudge.org/external/106/10623.html)|Thinking Backward|
|(extra)[UVa10712](http://uva.onlinejudge.org/external/107/10712.html)|Counting the Numbers|
|(extra)[UVa11290](http://uva.onlinejudge.org/external/112/11290.html)|Gangs   |
|(extra)[UVa11421](http://uva.onlinejudge.org/external/114/11421.html)|Arranging Cards|
|(extra)[UVa11885](http://uva.onlinejudge.org/external/118/11885.html)|Number of Battlefields|
|(extra)[UVa12034](http://uva.onlinejudge.org/external/120/12034.html)|Race    |
|(extra)[UVa12508](http://uva.onlinejudge.org/external/125/12508.html)|Triangles in the Grid|
|`*`(extra)UVa10574                                                |Counting Rectangles|
|`*`(extra)UVa10581                                                |Partitioning for fun and profit|
|`*`(extra)UVa10593                                                |Kites   |
|`*`(extra)UVa10843                                                |Annie's game|
|`*`(extra)UVa10844                                                |Bloques |
|`*`(extra)UVa11123                                                |Counting Trapezoid|
|`*`(extra)UVa11133                                                |Eigensequence|
|`**`(extra)UVa766                                                 |Sum of powers|递推      |

## 提高习题 （Exercises：Advanced） ##

|[UVa11139](http://uva.onlinejudge.org/external/111/11139.html)|Counting Quadrilaterals|
|:-------------------------------------------------------------|:----------------------|
|[UVa10884](http://uva.onlinejudge.org/external/108/10884.html)|Persephone             |
|[LA5092](http://livearchive.onlinejudge.org/external/50/5092.html)|Permutation Counting   |
|[LA5028](http://livearchive.onlinejudge.org/external/50/5028.html)|Delta Wave             |
|[LA5101](http://livearchive.onlinejudge.org/external/51/5101.html)|Math teacher's homework|
|[LA4352](http://livearchive.onlinejudge.org/external/43/4352.html)|Binary Integer         |
|(extra)[UVa10743](http://uva.onlinejudge.org/external/107/10743.html)|Blocks on Blocks       |
|(extra)[UVa11379](http://uva.onlinejudge.org/external/113/11379.html)|Chichi's Home Work     |
|(extra)[UVa11625](http://uva.onlinejudge.org/external/116/11625.html)|Nice Prefixes          |
|`*`(extra)UVa10643                                            |Facing Problem With Trees|
|`*`(extra)UVa10694                                            |Combinatorial Summation|
|`*`(extra)UVa10824                                            |Regular Polygon        |
|`*`(extra)UVa11303                                            |Permutation            |
|`*`(extra)UVa11915                                            |Recurrence             |
|`*`(extra)UVa12037                                            |Musical Chair          |

# 数论 （Number Theory） #

## 例题 （Examples） ##

|例题8|[LA4119](http://livearchive.onlinejudge.org/external/41/4119.html)|Always an Integer|多项式；差分；整除性|
|:--|:-----------------------------------------------------------------|:----------------|:---------|
|例题9|[UVa11426](http://uva.onlinejudge.org/external/114/11426.html)    |GCD              |gcd、phi函数 |
|例题10|[UVa11754](http://uva.onlinejudge.org/external/117/11754.html)    |Code Feat        |中国剩余定理    |
|例题11|[UVa11916](http://uva.onlinejudge.org/external/119/11916.html)    |Emoogle Grid     |离散对数      |

## 入门习题 （Exercises：Beginner） ##

|[UVa10673](http://uva.onlinejudge.org/external/106/10673.html)|Play with Floor and Ceil|
|:-------------------------------------------------------------|:-----------------------|
|[UVa11490](http://uva.onlinejudge.org/external/114/11490.html)|Just Another Problem    |
|[UVa11728](http://uva.onlinejudge.org/external/117/11728.html)|Alternate Task          |
|[UVa10692](http://uva.onlinejudge.org/external/106/10692.html)|Huge Mods               |
|[UVa10951](http://uva.onlinejudge.org/external/109/10951.html)|Polynomial GCD          |
|[LA4079](http://livearchive.onlinejudge.org/external/40/4079.html)|Gauss Prime             |
|(extra)[UVa10061](http://uva.onlinejudge.org/external/100/10061.html)|How many zero's and how many digits?|
|(extra)[UVa10090](http://uva.onlinejudge.org/external/100/10090.html)|Marbles                 |
|(extra)[UVa10110](http://uva.onlinejudge.org/external/101/10110.html)|Light, more light       |
|(extra)[UVa10127](http://uva.onlinejudge.org/external/101/10127.html)|Ones                    |
|(extra)[UVa10140](http://uva.onlinejudge.org/external/101/10140.html)|Prime Distance          |
|(extra)[UVa10368](http://uva.onlinejudge.org/external/103/10368.html)|Euclid's Game           |
|(extra)[UVa10515](http://uva.onlinejudge.org/external/105/10515.html)|Powers Et Al.           |
|(extra)[UVa10539](http://uva.onlinejudge.org/external/105/10539.html)|Almost Prime Numbers    |
|(extra)[UVa10560](http://uva.onlinejudge.org/external/105/10560.html)|Minimum Weight          |
|(extra)[UVa10622](http://uva.onlinejudge.org/external/106/10622.html)|Perfect P-th Powers     |
|(extra)[UVa10710](http://uva.onlinejudge.org/external/107/10710.html)|Chinese Shuffle         |
|(extra)[UVa11105](http://uva.onlinejudge.org/external/111/11105.html)|Semi-prime H-numbers    |
|`**`(extra)UVa138                                             |Street Numbers          |推荐                      |
|`**`(extra)UVa294                                             |Divisors                |推荐                      |
|`**`(extra)UVa463                                             |Polynomial Factorization|
|`**`(extra)UVa467                                             |Synching Signals        |
|`**`(extra)UVa550                                             |Multiplying by Rotation |推荐                      |
|`**`(extra)UVa701                                             |The Archeologists' Dilemma|对数                      |
|`**`(extra)UVa718                                             |Skyscraper Floors       |线性同余方程                  |
|`**`(extra)UVa756                                             |Biorhythms              |中国剩余定理                  |

## 中级习题 （Exercises：Intermediate） ##

|[UVa11768](http://uva.onlinejudge.org/external/117/11768.html)|Lattice Point or Not|
|:-------------------------------------------------------------|:-------------------|
|[LA4270](http://livearchive.onlinejudge.org/external/42/4270.html)|Discrete Square Roots|
|[LA4353](http://livearchive.onlinejudge.org/external/43/4353.html)|Cryptography Reloaded|
|[LA5916](http://livearchive.onlinejudge.org/external/59/5916.html)|GCD Guessing Game   |
|[UVa11014](http://uva.onlinejudge.org/external/110/11014.html)|Make a Crystal      |
|[LA2683](http://livearchive.onlinejudge.org/external/26/2683.html)|Payment System      |
|[LA4060](http://livearchive.onlinejudge.org/external/40/4060.html)|The Bells are Ringing|
|[LA3998](http://livearchive.onlinejudge.org/external/39/3998.html)|Prime k-tuple       |
|[LA2955](http://livearchive.onlinejudge.org/external/29/2955.html)|Vivian's Problem    |
|[LA3262](http://livearchive.onlinejudge.org/external/32/3262.html)|Different Digits    |
|[LA3521](http://livearchive.onlinejudge.org/external/35/3521.html)|Joseph's Problem    |
|[LA4382](http://livearchive.onlinejudge.org/external/43/4382.html)|YAPTCHA             |
|(extra)[UVa10162](http://uva.onlinejudge.org/external/101/10162.html)|Last Digit          |
|(extra)[UVa10236](http://uva.onlinejudge.org/external/102/10236.html)|The Fibonacci Primes|
|(extra)[UVa10413](http://uva.onlinejudge.org/external/104/10413.html)|Crazy Savages       |
|(extra)[UVa10548](http://uva.onlinejudge.org/external/105/10548.html)|Find the Right Changes|
|(extra)[UVa10555](http://uva.onlinejudge.org/external/105/10555.html)|Dead Fraction       |
|(extra)[UVa10620](http://uva.onlinejudge.org/external/106/10620.html)|A Flea on a Chessboard|
|(extra)[UVa10627](http://uva.onlinejudge.org/external/106/10627.html)|Infinite Race       |
|(extra)[UVa10837](http://uva.onlinejudge.org/external/108/10837.html)|A Research Problem  |
|(extra)[UVa11237](http://uva.onlinejudge.org/external/112/11237.html)|Halloween treats    |
|(extra)[UVa11440](http://uva.onlinejudge.org/external/114/11440.html)|Help Tomisu         |
|(extra)[UVa11657](http://uva.onlinejudge.org/external/116/11657.html)|Rational Billard    |
|`*`(extra)UVa10542                                            |Hyper-drive         |推荐                  |
|`*`(extra)UVa10831                                            |Gerg's Cake         |
|`*`(extra)UVa11024                                            |Circular Lock       |推荐                  |
|`*`(extra)UVa11246                                            |K-Multiple Free Set |
|`*`(extra)UVa11256                                            |Repetitive Multiple |
|`*`(extra)UVa11317                                            |GCD+LCM             |
|`*`(extra)UVa12009                                            |Avaricious Maryanna |推荐                  |
|`**`(extra)LA2176                                             |Lattice Point       |
|`**`(extra)LA2177                                             |Coin Exchange       |
|`**`(extra)LA2100                                             |Poly-polygonal Numbers|
|`**`(extra)LA2101                                             |Rational Approximation|

## 提高习题 （Exercises：Advanced） ##

|[LA4998](http://livearchive.onlinejudge.org/external/49/4998.html)|Simple Encryption|
|:-----------------------------------------------------------------|:----------------|
|[LA5769](http://livearchive.onlinejudge.org/external/57/5769.html)|Ji-Tu Problem    |
|[LA4384](http://livearchive.onlinejudge.org/external/43/4384.html)|Business Cards   |

# 组合游戏 （Game Theory） #

## 例题 （Examples） ##

|例题12|[LA5059](http://livearchive.onlinejudge.org/external/50/5059.html)|Playing With Stones|找规律；SG定理|
|:---|:-----------------------------------------------------------------|:------------------|:-------|
|例题13|[UVa10561](http://uva.onlinejudge.org/external/105/10561.html)    |Treblecross        |SG定理；输出方案|

## 入门习题 （Exercises：Beginner） ##

|[UVa12293](http://uva.onlinejudge.org/external/122/12293.html)|Box Game|
|:-------------------------------------------------------------|:-------|
|[UVa11892](http://uva.onlinejudge.org/external/118/11892.html)|ENimEN  |
|(extra)[UVa11927](http://uva.onlinejudge.org/external/119/11927.html)|Games Are Important|
|`**`(extra)UVa10165                                           |Stone Game|
|`**`(extra)UVa11534                                           |Say Goodbye to Tic-Tac-Toe|
|`**`(extra)UVa847                                             |A multiplication game|
|`**`(extra)LA2321                                             |Calendar Game|
|`**`(extra)LA2406                                             |Nim     |
|`**`(extra)LA2336                                             |Number Game|

## 中级习题 （Exercises：Intermediate） ##

|[LA4411](http://livearchive.onlinejudge.org/external/44/4411.html)|Addition-Subtraction Game|
|:-----------------------------------------------------------------|:------------------------|
|[LA3668](http://livearchive.onlinejudge.org/external/36/3668.html)|A Funny Stone Game       |
|(extra)[UVa11249](http://uva.onlinejudge.org/external/112/11249.html)|Game                     |
|`**`(extra)LA3830                                                 |John                     |

## 提高习题 （Exercises：Advanced） ##

|[LA5760](http://livearchive.onlinejudge.org/external/57/5760.html)|Alice and Bob|
|:-----------------------------------------------------------------|:------------|
|(extra)[UVa11758](http://uva.onlinejudge.org/external/117/11758.html)|Left Right   |
|(extra)[UVa12033](http://uva.onlinejudge.org/external/120/12033.html)|Game of CS   |
|(extra)[UVa12370](http://uva.onlinejudge.org/external/123/12370.html)|Game of Connect|
|`**`(extra)LA4323                                                 |A simple stone game|
|`**`(extra)LA2813                                                 |Cycle Game   |

# 概率 （Probability） #

## 例题 （Examples） ##

|例题14|[UVa11021](http://uva.onlinejudge.org/external/110/11021.html)|Tribbles|离散概率；递推|
|:---|:-------------------------------------------------------------|:-------|:------|
|例题15|[UVa11722](http://uva.onlinejudge.org/external/117/11722.html)|Joining with Friend|连续概率；几何|
|例题16|[UVa11427](http://uva.onlinejudge.org/external/114/11427.html)|Expect the Expected|数学期望   |
|例题17|[UVa11762](http://uva.onlinejudge.org/external/117/11762.html)|Race To 1|马尔科夫过程；数学期望|

## 入门习题（Exercises：Beginner） ##

|[LA4485](http://livearchive.onlinejudge.org/external/44/4485.html)|Crossing Rivers|
|:-----------------------------------------------------------------|:--------------|
|[UVa11181](http://uva.onlinejudge.org/external/111/11181.html)    |Probability|Given|
|[UVa10491](http://uva.onlinejudge.org/external/104/10491.html)    |Cows and Cars  |
|[UVa10900](http://uva.onlinejudge.org/external/109/10900.html)    |So you want to be a 2n-aire?|
|(extra)[UVa10288](http://uva.onlinejudge.org/external/102/10288.html)|Coupons        |
|(extra)[UVa11291](http://uva.onlinejudge.org/external/112/11291.html)|Smeech         |
|(extra)[UVa11346](http://uva.onlinejudge.org/external/113/11346.html)|Probability    |
|`**`(extra)LA2104                                                 |To Bet or Not to Bet|
|`**`(extra)UVa542                                                 |France '98     |
|`**`(extra)UVa557                                                 |Burger         |推荐             |

## 中级习题 （Exercises：Intermediate） ##

|[UVa11637](http://uva.onlinejudge.org/external/116/11637.html)|Garbage Remembering Exam|
|:-------------------------------------------------------------|:-----------------------|
|[UVa11605](http://uva.onlinejudge.org/external/116/11605.html)|Lights inside a 3d Grid |
|(extra)[UVa10417](http://uva.onlinejudge.org/external/104/10417.html)|Gift Exchanging         |
|(extra)[UVa10529](http://uva.onlinejudge.org/external/105/10529.html)|Dumb Bones              |
|(extra)[UVa11176](http://uva.onlinejudge.org/external/111/11176.html)|Winning Streak          |
|(extra)[UVa11971](http://uva.onlinejudge.org/external/119/11971.html)|Polygon                 |

## 提高习题（Exercises：Advanced） ##

|[LA5721](http://livearchive.onlinejudge.org/external/57/5721.html)|Activation|
|:-----------------------------------------------------------------|:---------|
|[LA4049](http://livearchive.onlinejudge.org/external/40/4049.html)|Game      |
|[LA2344](http://livearchive.onlinejudge.org/external/23/2344.html)|Parallel Expectations|
|[LA4412](http://livearchive.onlinejudge.org/external/44/4412.html)|The Great Game|
|(extra)[UVa11429](http://uva.onlinejudge.org/external/114/11429.html)|Randomness|

# 置换（Permutation） #

## 例题（Examples） ##

|例题18|[UVa10294](http://uva.onlinejudge.org/external/102/10294.html)|Arif in Dhaka (First Love part 2)|等价类计数|
|:---|:-------------------------------------------------------------|:--------------------------------|:----|
|例题19|[LA3641](http://livearchive.onlinejudge.org/external/36/3641.html)|Leonardo's Notebook              |置换分解；递推|
|例题20|[UVa11077](http://uva.onlinejudge.org/external/110/11077.html)|Find the Permutations            |置换分解；置换乘法|
|例题21|[LA3510](http://livearchive.onlinejudge.org/external/35/3510.html)|Pixel Shuffle                    |置换分解；置换乘法|

## 入门习题（Exercises：Beginner） ##

|[UVa10601](http://uva.onlinejudge.org/external/106/10601.html)|Cubes|
|:-------------------------------------------------------------|:----|
|[UVa11774](http://uva.onlinejudge.org/external/117/11774.html)|Doom's Day|
|[UVa10733](http://uva.onlinejudge.org/external/107/10733.html)|The Colored Cubes|
|`**`(extra)UVa239                                             |Tempus et mobilius. Time and motion|
|`**`(extra)UVa306                                             |Cipher|

## 中级习题 （Exercises：Intermediate） ##

|[UVa11330](http://uva.onlinejudge.org/external/113/11330.html)|Andy's Shoes|
|:-------------------------------------------------------------|:-----------|
|[UVa11255](http://uva.onlinejudge.org/external/112/11255.html)|Necklace    |
|[LA2481](http://livearchive.onlinejudge.org/external/24/2481.html)|Silly Sort  |
|`**`(extra)UVa716                                             |Commedia dell Arte|

## 提高习题（Exercises：Advanced） ##

|[UVa11540](http://uva.onlinejudge.org/external/115/11540.html)|Sultan's Chandelier|
|:-------------------------------------------------------------|:------------------|
|[LA5819](http://livearchive.onlinejudge.org/external/58/5819.html)|Alphabet Soup      |
|(extra)[UVa11924](http://uva.onlinejudge.org/external/119/11924.html)|Unlock the Winning Pot|
|`**`(extra)UVa11118                                           |Prisoners Boxes and Pieces of Paper|
|`**`(extra)UVa11698                                           |Code Permutations  |

# 矩阵与线性方程组（Matrix & System of Linear Equations） #

## 例题（Examples） ##

|例题22|[UVa10870](http://uva.onlinejudge.org/external/108/10870.html)|Recurrences|线性递推关系。Q矩阵|
|:---|:-------------------------------------------------------------|:----------|:---------|
|例题23|[LA3704](http://livearchive.onlinejudge.org/external/37/3704.html)|Cellular Automaton|循环矩阵的乘法   |
|例题24|[UVa10828](http://uva.onlinejudge.org/external/108/10828.html)|Back to Kernighan-Ritchie|马尔科夫过程；实数域的线性方程组（有特殊情况）|
|例题25|[UVa11542](http://uva.onlinejudge.org/external/115/11542.html)|Square     |XOR方程组    |

## 入门习题（Exercises：Beginner） ##

|[UVa10655](http://uva.onlinejudge.org/external/106/10655.html)|Contemplation|
|:-------------------------------------------------------------|:------------|
|[UVa11149](http://uva.onlinejudge.org/external/111/11149.html)|Power of Matrix|
|`**`(extra)LA2561                                             |Extended Lights Out|
|`**`(extra)UVa10689                                           |Yet another Number Sequence|
|`**`(extra)UVa11551                                           |Experienced Endeavour|
|`**`(extra)LA2155                                             |Complete the sequence!|
|`**`(extra)UVa472                                             |Simultaenous Equations|
|`**`(extra)UVa684                                             |Integral Determinant|

## 中级习题 （Exercises：Intermediate） ##

|[UVa10808](http://uva.onlinejudge.org/external/108/10808.html)|Rational Resistors|
|:-------------------------------------------------------------|:-----------------|
|[LA3891](http://livearchive.onlinejudge.org/external/38/3891.html)|The Teacher's Side of Math|
|`**`(extra)LA3529                                             |Widget Factory    |
|`**`(extra)LA3131                                             |SETI              |
|`**`(extra)LA2974                                             |Balanced Chemical Equations|
|`**`(extra)LA2185                                             |Cog-Wheels        |
|`**`(extra)UVa11651                                           |Krypton Number System|
|`**`(extra)UVa720                                             |Hares and Foxes   |

## 提高习题（Exercises：Advanced） ##

|[LA3139](http://livearchive.onlinejudge.org/external/31/3139.html)|Kid's Problem|
|:-----------------------------------------------------------------|:------------|
|`*`(extra)UVa11778                                                |Graph Coloring in HSL|

# 数值方法（Numerical Methods） #

## 例题（Examples） ##

|例题26|[UVa10341](http://uva.onlinejudge.org/external/103/10341.html)|Solve It|非线性方程求根|
|:---|:-------------------------------------------------------------|:-------|:------|
|例题27|[LA5009](http://livearchive.onlinejudge.org/external/50/5009.html)|Error Curves|凸函数求极值 |
|例题28|[LA3485](http://livearchive.onlinejudge.org/external/34/3485.html)|Bridge  |数值积分   |

## 入门习题（Exercises：Beginner） ##

|[UVa10668](http://uva.onlinejudge.org/external/106/10668.html)|Expanding Rods|
|:-------------------------------------------------------------|:-------------|
|[UVa10385](http://uva.onlinejudge.org/external/103/10385.html)|Duathlon      |
|(extra)[UVa10693](http://uva.onlinejudge.org/external/106/10693.html)|Traffic Volume|
|`*`(extra)UVa10428                                            |The Roots     |
|`**`(extra)LA2034                                             |Hot or Cold?  |多项式的积分        |
|`**`(extra)UVa474                                             |Heads / Tails Probability|推荐            |

## 中级习题 （Exercises：Intermediate） ##

|[LA5096](http://livearchive.onlinejudge.org/external/50/5096.html)|Volume|
|:-----------------------------------------------------------------|:-----|
|[LA3962](http://livearchive.onlinejudge.org/external/39/3962.html)|Tough Water Level|
|[LA4330](http://livearchive.onlinejudge.org/external/43/4330.html)|Timer |
|(extra)[UVa11102](http://uva.onlinejudge.org/external/111/11102.html)|Moonshine|
|`*`(extra)UVa10228                                                |Star not a Tree?|推荐    |

## 提高习题（Exercises：Advanced） ##

|[UVa12413](http://uva.onlinejudge.org/external/124/12413.html)|Big Decimal Calculator|
|:-------------------------------------------------------------|:---------------------|
|`*`(extra)UVa10631                                            |Normals               |推荐                    |
|`*`(extra)UVa10727                                            |Practice              |推荐                    |
|`*`(extra)UVa11102                                            |Moonshine             |推荐                    |
|`*`(extra)UVa11120                                            |Very Funny Mr.Feynman |
|`*`(extra)UVa11702                                            |Meltdown              |推荐                    |
|`*`(extra)UVa11901                                            |Elliipse Hazard       |