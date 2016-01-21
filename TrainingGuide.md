#《算法竞赛入门经典——训练指南》

# 《算法竞赛入门经典——训练指南》 #

![http://wiki.aoapc-book.googlecode.com/git/images/TrainingGuideChapter.jpg](http://wiki.aoapc-book.googlecode.com/git/images/TrainingGuideChapter.jpg)

|章节|名称|资料|题解|
|:-|:-|:-|:-|
|第一章|算法设计基础|TrainingGuideChapterOne|[DP](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC1_Solutions_DP) [暴力法](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC1_Solutions_BruteForce) [问题求解策略](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC1_Solutions_General) [高效算法设计](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC1_Solutions_Efficient) |
|第二章|数学基础|TrainingGuideChapterTwo|[基础问题](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC2_Solutions_Basic)  [数论](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC2_Solutions_NumberTheory) [组合游戏](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC2_Solutions_CombinatorialGames) [概率](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC2_Solutions_Probability)|
|第三章|实用数据结构|TrainingGuideChapterThree|[基础数据结构](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC3_Solutions_Fundamental) [区间信息维护与查询](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC3_Solutions_MaintainingIntervalData) [字符串算法](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC3_Solutions_StringAlgorithms)|
|第四章|几何问题|TrainingGuideChapterFour|[基础问题](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC4_Solutions01_Basic) [二维几何计算](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC4_Solutions02_GeometricComputations2D) [二维几何算法](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC4_Solutions03_GeometricAlgorithms2D) [三维几何](http://code.google.com/p/aoapc-book/wiki/TrainingGuideC4_Solutions04_Geometric3D) |
|第五章|图论算法与模型|TrainingGuideChapterFive|TrainingGuideChapterFiveSolutions|
|第六章|更多算法专题|TrainingGuideChapterSix|  |

## 目录 ##
### 第1章  算法设计基础	1 ###
  * 1.1  思维的体操	1
  * 1.2  问题求解常见策略	15
  * 1.3  高效算法设计举例	39
  * 1.4  动态规划专题	60
  * 1.5  小结与习题	77

### 第2章  数学基础	103 ###
  * 2.1  基本计数方法	103
  * 2.2  递推关系	109
  * 2.3  数论	119
    * 2.3.1  基本概念	119
    * 2.3.2  模方程	126
  * 2.4  组合游戏	132
  * 2.5  概率与数学期望	139
  * 2.6  置换及其应用	144
  * 2.7  矩阵和线性方程组	151
  * 2.8  数值方法简介	163
  * 2.9  小结与习题	170
### 第3章  实用数据结构	186 ###
  * 3.1  基础数据结构回顾	186
    * 3.1.1  抽象数据类型（ADT）	186
    * 3.1.2  优先队列	188
    * 3.1.3  并查集	191
  * 3.2  区间信息的维护与查询	194
    * 3.2.1  二叉索引树（树状数组）	194
    * 3.2.2  RMQ问题	197
    * 3.2.3  线段树（1）：点修改	199
    * 3.2.4  线段树（2）：区间修改	202
  * 3.3  字符串（1）	208
    * 3.3.1  Trie	208
    * 3.3.2  KMP算法	211
    * 3.3.3  Aho-Corasick自动机	214
  * 3.4  字符串（2）	219
    * 3.4.1  后缀数组	219
    * 3.4.2  最长公共前缀（LCP）	222
    * 3.4.3  基于哈希值的LCP算法	224
  * 3.5  排序二叉树	227
    * 3.5.1  基本概念	227
    * 3.5.2  用Treap实现名次树	230
    * 3.5.3  用伸展树实现可分裂与合并的序列	239
  * 3.6  小结与习题	244
### 第4章  几何问题	254 ###
  * 4.1  二维几何基础	254
    * 4.1.1  基本运算	255
    * 4.1.2  点和直线	256
    * 4.1.3  多边形	258
    * 4.1.4  例题选讲	259
    * 4.1.5  二维几何小结	263
  * 4.2  与圆和球有关的计算问题	264
    * 4.2.1  圆的相关计算	264
    * 4.2.2  球面相关问题	269
  * 4.3  二维几何常用算法	270
    * 4.3.1  点在多边形内判定	270
    * 4.3.2  凸包	271
    * 4.3.3  半平面交	276
    * 4.3.4  平面区域	282
  * 4.4  三维几何基础	286
    * 4.4.1  三维点积	287
    * 4.4.2  三维叉积	288
    * 4.4.3  三维凸包	290
    * 4.4.4  例题选讲	292
    * 4.4.5  三维几何小结	295
  * 4.5  小结与习题	296
### 第5章  图论算法与模型	307 ###
  * 5.1  基础题目选讲	307
  * 5.2  深度优先遍历	310
    * 5.2.1  无向图的割顶和桥	312
    * 5.2.2  无向图的双连通分量	314
    * 5.2.3  有向图的强连通分量	319
    * 5.2.4  2-SAT问题	323
  * 5.3  最短路问题	327
    * 5.3.1  再谈Dijkstra算法	327
    * 5.3.2  再谈Bellman-Ford算法	332
    * 5.3.3  例题选讲	335
  * 5.4  生成树相关问题	343
  * 5.5  二分图匹配	347
    * 5.5.1  二分图最大匹配	347
    * 5.5.2  二分图最佳完美匹配	348
    * 5.5.3  稳定婚姻问题	352
    * 5.5.4  常见模型	355
  * 5.6  网络流问题	357
    * 5.6.1  最短增广路算法	358
    * 5.6.2  最小费用最大流算法	363
    * 5.6.3  建模与模型变换	365
    * 5.6.4  例题选讲	368
  * 5.7  小结与习题	372
### 第6章  更多算法专题	383 ###
  * 6.1  轮廓线动态规划	383
  * 6.2  嵌套和分块数据结构	389
  * 6.3  暴力法专题	395
    * 6.3.1  路径寻找问题	395
    * 6.3.2  对抗搜索	400
    * 6.3.3  精确覆盖问题和DLX算法	406
  * 6.4  几何专题	412
    * 6.4.1  仿射变换与矩阵	412
    * 6.4.2  离散化和扫描法	414
    * 6.4.3  运动规划	423
  * 6.5  数学专题	425
    * 6.5.1  小专题集锦	425
    * 6.5.2  快速傅里叶变换（FFT）	428
    * 6.5.3  线性规划	430
  * 6.6  浅谈代码设计与静态查错	431
    * 6.6.1  简单的Bash	431
    * 6.6.2  《仙剑奇侠传四》之最后的战役	440
  * 6.7  小结与习题	447
### 附录A  训练指南：使用UVa/LA题库	481 ###
  * A.1  UVa在线比赛推荐	481
  * A.2  LA套题（ACM/ICPC真题）推荐	482
  * A.3  UVa在线比赛单题推荐	483
### 附录B  Java、C#和Python语言简介	505 ###
  * B.1  Java	505
  * B.2  C#	507
  * B.3  Python	509