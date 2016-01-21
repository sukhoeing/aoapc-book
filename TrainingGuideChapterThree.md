#《算法竞赛入门经典——训练指南》第三章相关内容

# 勘误 #

P186的表格中, 在"操作"下, `1x` 应为 `1 x`.

（感谢LiuYuPan）

P189例4的题目描述中, 最后一行:
"求这些和中最小的k值"
应为
"求这些和中最小的k个值"

（感谢LiuYuPan）

P191代码下一行：
“注意（`*`）处，combine函数”
应为
“注意（`*`）处，merge函数”

（感谢LiuYuPan）

[第二次印刷改正]P198 RMQ部分的代码改为：

```
  void RMQ_init(const vector<int>& A) {
    int n = A.size();
    for(int i = 0; i < n; i++) d[i][0] = A[i];
    for(int j = 1; (1<<j) <= n; j++)
      for(int i = 0; i + (1<<j) - 1 < n; i++)
        d[i][j] = min(d[i][j-1], d[i + (1<<(j-1))][j-1]);
  }
```

（感谢hunjioier）


[第二次印刷改正]P199. 最后一行“其左右子节点的编号分别为2i+1和2i+2”应改为“其左右子节点的编号分别为2i和2i+1”

（感谢hunjioier）

p203. maintain函数中`if(R>L)`之前加一行：

```
    sumv[o] = minv[o] = maxv[o] = 0;
```

这是因为那个代码是在讲标记传递之前的，并没有pushdown函数来及时清除add标记，所以只能在maintain里每次重置sumv, minv, maxv。如果采用后面讲的标记传递法来处理add操作，则这一行是不需要加的。

（感谢yingsihao和906476903@xsc.com）

P203. 第二段“信息维护的代码如下。”后加：“假设修改/查询范围均为`[y1,y2]`，后同。”

P209. 倒数第5行，20071207改成20071027。

（感谢450978053@qq.com）

P211. 第四行`T[m-1]=P[m-1]`应为`T[i+m-1]=P[m-1]`

（感谢wustboli）

P212. KMP的代码find函数的返回值应该是void.

P213. `i-f[i]=k*i`应改为`k(i-f[i])=i`

（感谢Tankchen）

P214. 在文本串T中找模板中find函数的返回值应该是void.

P223. "后缀k和后缀i+1分别删除首字符之后得到后缀k+1和后缀i"应该为"后缀k和后缀i-1分别删除首字符之后得到后缀k+1和后缀i"，并且图3-33第二行的“后缀k-1”应为“后缀i-1”

（感谢sjh394461153）

P231~P233. **原先的Treap代码实际比较的是结点指针而非优先级的大小，虽然在数据不强的时候经常可以侥幸AC，但并不是正确的写法**。具体来说：Treap结点定义中删除`bool operator <`开始的三行；insert函数中的`if(o->ch[d] > o)`改为`if(o->ch[d]->r > o->r)`；remove函数中的`o->ch[0] > o->ch[1]`应改为`o->ch[0]->r > o->ch[1]->r`。P236代码也要做同样的修改。代码仓库已更新并增加了一个treap实现的纯ranktree。

（感谢叶子卿）

[第二次印刷改正]P244 表 3-8, 最大-最小堆或者 STL 的 set 对应的题不应为 UVa11645 Bits, 而是 UVa11136 Hoax or what.

（感谢lzy4575）

P246. 指令`3 p`以及输出格式中，“p所在集合的元素个数”均改为“p所在集合的元素个数和该集合所有元素之和”


---


以下是《算法竞赛入门经典——训练指南》第三章中的例题和习题列表。多数题目在书中已经给出了题目翻译，这里主要是为了让大家能方便的找到题解链接、数据下载等其他信息。

如果大家写了或者找到了下面题目（尤其是习题）的解题报告，欢迎留言推荐，我会做个链接 :)

或者有些题解网上找不到但你特别想知道怎么做，也可以留言，我们会努力在业余时间里选一些request很多的题目写点题解或者提示

# UVa特别题库 #

UVa网站专门为本书设立的分类题库配合，方便读者提交：

http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=442

注意，下面注有“extra”的习题并没有在书中出现，但在上面的特别题库中有，属于附加习题。

# 基础数据结构（Fundamental Data Structures） #

## 例题（Examples） ##

|例题1|[UVa11995](http://uva.onlinejudge.org/external/119/11995.html)|I Can Guess the Data Structure!|ADT|
|:--|:-------------------------------------------------------------|:------------------------------|:--|
|例题2|[UVa11991](http://uva.onlinejudge.org/external/119/11991.html)|Easy Problem from Rujia Liu    |排序或者善用STL|
|例题3|[LA3135](http://livearchive.onlinejudge.org/external/31/3135.html)|Argus                          |优先队列；模拟|
|例题4|[UVa11997](http://uva.onlinejudge.org/external/119/11997.html)|K Smallest Sums                |优先队列；有序表合并|
|例题5|[LA3644](http://livearchive.onlinejudge.org/external/36/3644.html)|X-Plosives                     |并查集|
|例题6|[LA3027](http://livearchive.onlinejudge.org/external/30/3027.html)|Corporative Network            |加权并查集|

## 入门习题（Exercises: Beginner） ##

|[UVa11988](http://uva.onlinejudge.org/external/119/11988.html)|Broken Keyboard (a.k.a. Beiju Text)|模拟；链表|
|:-------------------------------------------------------------|:----------------------------------|:----|
|[UVa11136](http://uva.onlinejudge.org/external/111/11136.html)|Hoax or what                       |最大-最小堆或者STL的set|
|(extra)[UVa10588](http://uva.onlinejudge.org/external/10588/10588.html)|Queuing at the doctors             |     |
|`*`(extra)UVa10410                                            |Tree Reconstruction                |
|`*`(extra)UVa10895                                            |Matrix Transpose                   |
|`**`(extra)UVa246                                             |10-20-30                           |
|`**`(extra)UVa514                                             |Rails                              |栈    |
|`**`(extra)UVa536                                             |Tree Recovery                      |树遍历序列|
|`**`(extra)UVa548                                             |Tree                               |树遍历序列|

## 中级习题 （Exercises：Intermediate） ##

|[LA4487](http://livearchive.onlinejudge.org/external/44/4487.html)|Exclusive-OR|加权并查集|
|:-----------------------------------------------------------------|:-----------|:----|
|[UVa11987](http://uva.onlinejudge.org/external/119/11987.html)    |Almost Union-Find|并查集；需要一点技巧|
|[LA3977](http://livearchive.onlinejudge.org/external/39/3977.html)|Summits     |用数据结构加速算法|
|[LA3634](http://livearchive.onlinejudge.org/external/36/3634.html)|The SetStack Computer|模拟；数据结构|
|(extra)[UVa10273](http://uva.onlinejudge.org/external/102/10273.html)|Eat or Not to Eat?|     |
|`**`(extra)UVa305                                                 |Joseph      |活用数据结构|
|`**`(extra)UVa501                                                 |Black Box   |堆    |
|`**`(extra)UVa540                                                 |Team Queue  |推荐   |
|`**`(extra)UVa586                                                 |Instant Complexity|栈    |

## 提高习题（Exercises: Advanced） ##

|[LA5908](http://livearchive.onlinejudge.org/external/59/5908.html)|Tracking RFIDs|规模不大，不用高级数据结构|
|:-----------------------------------------------------------------|:-------------|:------------|

# 区间信息维护（Maintaining Interval Data） #

## 例题（Examples） ##

|例题7|[LA4329](http://livearchive.onlinejudge.org/external/43/4329.html)|Ping pong|Fenwick树；类似逆序对|
|:--|:-----------------------------------------------------------------|:--------|:-------------|
|例题8|[UVa11235](http://uva.onlinejudge.org/external/112/11235.html)    |Frequent Values|RMQ           |
|例题9|[LA3938](http://livearchive.onlinejudge.org/external/39/3938.html)|Ray, pass me the dishes|线段树；区间查询      |
|例题10|[UVa11992](http://uva.onlinejudge.org/external/119/11992.html)    |Fast Matrix Operations|线段树；区间修改；懒标记传递|

## 入门习题（Exercises: Beginner） ##

|[LA2191](http://livearchive.onlinejudge.org/external/21/2191.html)|Potentiometers|Fenwick树|
|:-----------------------------------------------------------------|:-------------|:-------|
|[LA5902](http://livearchive.onlinejudge.org/external/59/5902.html)|Movie collection|Fenwick树|
|[UVa12299](http://uva.onlinejudge.org/external/122/12299.html)    |RMQ with shifts|线段树；单点修改，区间查询|
|[LA4108](http://livearchive.onlinejudge.org/external/41/4108.html)|Skyline       |线段树     |
|[UVa11525](http://uva.onlinejudge.org/external/115/11525.html)    |Permutations  |递推；线段树（或二分+Fenwick树）|
|(extra)[UVa11402](http://uva.onlinejudge.org/external/114/11402.html)|Ahoy, Pirates!|        |

## 中级习题 （Exercises：Intermediate） ##

|[LA4730](http://livearchive.onlinejudge.org/external/47/4730.html)|Kingdom|并查集；线段树|
|:-----------------------------------------------------------------|:------|:------|
|[LA5698](http://livearchive.onlinejudge.org/external/56/5698.html)|Draw a Mess|线段树可以做，但并查集更好|
|[LA5694](http://livearchive.onlinejudge.org/external/56/5694.html)|Adding New Machine|线段树；组合计数|
|[LA4013](http://livearchive.onlinejudge.org/external/40/4013.html)|A Sequence of Numbers|转化为区间问题；预处理|
|(extra)[UVa10869](http://uva.onlinejudge.org/external/108/10869.html)|Brownie Points II|       |
|(extra)[UVa11423](http://uva.onlinejudge.org/external/114/11423.html)|Cache Simulator|       |
|(extra)[UVa11898](http://uva.onlinejudge.org/external/118/11898.html)|Killer Problem|       |
|(extra)[UVa11983](http://uva.onlinejudge.org/external/119/11983.html)|Weird Advertisement|       |

## 提高习题（Exercises: Advanced） ##

|[LA5915](http://livearchive.onlinejudge.org/external/59/5915.html)|Flights|
|:-----------------------------------------------------------------|:------|

# 字符串算法（String Algorithms） #

## 例题（Examples） ##

|例题11|[LA3942](http://livearchive.onlinejudge.org/external/39/3942.html)|Remember the Word|用Trie加速动态规划|
|:---|:-----------------------------------------------------------------|:----------------|:----------|
|例题12|[UVa11732](http://uva.onlinejudge.org/external/117/11732.html)    |strcmp() Anyone? |Trie的性质    |
|例题13|[LA3026](http://livearchive.onlinejudge.org/external/30/3026.html)|Period           |KMP算法的失配函数 |
|例题14|[LA4670](http://livearchive.onlinejudge.org/external/46/4670.html)|Dominating Patterns|AC自动机      |
|例题15|[UVa11468](http://uva.onlinejudge.org/external/114/11468.html)    |Substring        |AC自动机上的算法  |
|例题16|[UVa11019](http://uva.onlinejudge.org/external/110/11019.html)    |Matrix Matcher   |二维匹配；AC自动机 |
|例题17|[UVa11107](http://uva.onlinejudge.org/external/111/11107.html)    |Life Forms       |后缀数组+height数组|
|例题18|[LA4513](http://livearchive.onlinejudge.org/external/45/4513.html)|Stammering Aliens|LCP；hash函数 |

## 入门习题（Exercises: Beginner） ##

|[UVa11488](http://uva.onlinejudge.org/external/114/11488.html)|Hyper Prefix Sets|Trie的应用|
|:-------------------------------------------------------------|:----------------|:------|
|[LA5913](http://livearchive.onlinejudge.org/external/59/5913.html)|Dictionary Size  |前缀；后缀；字符串集合|
|[LA3907](http://livearchive.onlinejudge.org/external/39/3907.html)|Puzzle           |给s个禁止子串，求不含它们的最长串|
|`*`(extra)UVa10298                                            |Power Strings    |
|`*`(extra)UVa10887                                            |Concatenation of Languages|
|`*`(extra)UVa11475                                            |Extend to Palindrome|
|`*`(extra)UVa12338                                            |Anti-Rhyme Pairs |
|`**`(extra)LA2223                                             |Disk Tree        |
|`**`(extra)UVa257                                             |Palinwords       |
|`**`(extra)UVa261                                             |The Window Property|
|`**`(extra)UVa282                                             |Rename           |
|`**`(extra)UVa475                                             |Wild Thing       |

## 中级习题 （Exercises：Intermediate） ##

|[LA3703](http://livearchive.onlinejudge.org/external/37/3703.html)|Billing Tables|Trie的应用|
|:-----------------------------------------------------------------|:-------------|:------|
|[LA2755](http://livearchive.onlinejudge.org/external/27/2755.html)|Hidden Password|求字符串的最小表示|
|[LA4126](http://livearchive.onlinejudge.org/external/41/4126.html)|Password Suspects|字符串的动态规划|
|[UVa10829](http://uva.onlinejudge.org/external/108/10829.html)    |L-Gap Substrings|后缀数组   |
|[LA3490](http://livearchive.onlinejudge.org/external/34/3490.html)|Generator     |自动机；数学期望；数学推导|
|[LA4769](http://livearchive.onlinejudge.org/external/47/4769.html)|Fuzzy Google Suggest|模糊查找   |
|`*`(extra)UVa10526                                                |Intellectual Property|
|`*`(extra)UVa11557                                                |Code Theft    |
|`*`(extra)UVa11855                                                |Buzzwords     |
|`*`(extra)UVa11888                                                |Abnormal 89's |
|`*`(extra)UVa12012                                                |Detection of Extraterrestrial|
|`**`(extra)UVa719                                                 |Glass Beads   |环状串的最小表示|

## 提高习题（Exercises: Advanced） ##

|[LA4975](http://livearchive.onlinejudge.org/external/49/4975.html)|Casting Spells|有难度；需要配合其他数据结构|
|:-----------------------------------------------------------------|:-------------|:-------------|
|[LA5766](http://livearchive.onlinejudge.org/external/57/5766.html)|GRE Words     |用串算法加速动态规划    |
|[LA4619](http://livearchive.onlinejudge.org/external/46/4619.html)|Accountant notes|AC自动机的应用。有难度  |

# 排序二叉树（Binary Search Trees） #

## 例题（Examples） ##

|例题19|[UVa11020](http://uva.onlinejudge.org/external/110/11020.html)|Efficient Solutions|维护点集；单调性|
|:---|:-------------------------------------------------------------|:------------------|:-------|
|例题20|[LA5031](http://livearchive.onlinejudge.org/external/50/5031.html)|Graph and Queries  |名次树；并查集；时光倒流|
|例题21|[UVa11922](http://uva.onlinejudge.org/external/119/11922.html)|Permutation Transformer|伸展树；和分裂合并的序列|
|例题22|[UVa11996](http://uva.onlinejudge.org/external/119/11996.html)|Jewel Magic        |字符串；Hash函数；伸展树|

## 入门习题（Exercises: Beginner） ##

|[LA4847](http://livearchive.onlinejudge.org/external/48/4847.html)|Binary Search Tree|和BST有关的计数问题|
|:-----------------------------------------------------------------|:-----------------|:----------|
|[LA3961](http://livearchive.onlinejudge.org/external/39/3961.html)|Robotic Sorting   |伸展树        |
|[LA4976](http://livearchive.onlinejudge.org/external/49/4976.html)|Defense Line      |维护点集；单调性   |
|(extra)[UVa11688](http://uva.onlinejudge.org/external/116/11688.html)|Rotate to root    |           |
|`*`(extra)UVa10821                                                |Constructing BST  |
|`**`(extra)LA2064                                                 |Falling Leaves    |
|`**`(extra)UVa10909                                               |Lucky Number      |

## 中级习题 （Exercises：Intermediate） ##

|[LA5707](http://livearchive.onlinejudge.org/external/57/5707.html)|Very Boring Homework|BST快速模拟；递归。注意栈溢出|
|:-----------------------------------------------------------------|:-------------------|:---------------|
|[LA3525](http://livearchive.onlinejudge.org/external/35/3525.html)|Wild West           |扫描法；维护点集；单调性（或线段树）|
|`*`(extra)UVa11672                                                |Dynamic Summation   |

## 提高习题（Exercises: Advanced） ##

|[UVa12419](http://uva.onlinejudge.org/external/124/12419.html)|Heap Manager|
|:-------------------------------------------------------------|:-----------|
|(extra)[UVa12538](http://uva.onlinejudge.org/external/125/12538.html)|Version Controlled IDE|            |
|(extra)[UVa11989](http://uva.onlinejudge.org/external/119/11989.html)|Cake Cutting|            |