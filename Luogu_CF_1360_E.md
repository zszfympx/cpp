# 多边形

## 题目描述

多边形不仅是开发问题的最佳平台，还是一个边长为 $n$ 的正方形矩阵，初始填充为字符 0。

在多边形上进行了军事训练。士兵们在第一行的每个单元格上方放置了一门大炮，在第一列的每个单元格左边放置了一门大炮。因此，一共有 $2n$ 门大炮。

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF1360E/af538d3417e3bff02f7ca9d4302ffeb8985b4df9.png) $n=4$ 时的初始多边形。大炮发射字符 1。在任何时间点上，最多只有一门大炮在射击。当 1 从大炮中射出时，它会沿着前进方向（射击方向）飞行，直到碰到多边形的边界或另一个 1。然后，它将占据碰撞前的单元格并停在那里。为了更好地理解，请看一下示例。

更正式地说：

- 如果第 $i$ 行的一个大炮位于第一列的左侧，并且以 1 射击，那么 1 将从单元格 $(i, 1)$ 开始飞行，最终停在某个单元格 $(i, j)$ 处；
- 如果第 $j$ 列的一个大炮位于第一行的上方，并且以 1 射击，那么 1 将从单元格 $(1, j)$ 开始飞行，最终停在某个单元格 $(i, j)$ 处。

例如，考虑以下射击序列：

![](https://cdn.luogu.com.cn/upload/vjudge_pic/CF1360E/b0a2a2240d9a0a11c84c2c0dd9be686db3e431b3.png) 1. 射击第 2 行的大炮。2. 射击第 2 行的大炮。3. 射击第 3 列的大炮。

你桌上有一份军事训练的报告。这份报告是一个边长为 $n$ 的方阵，由 0 和 1 组成。你想知道训练是否真的进行了。换句话说，是否存在一系列射击，使得训练后得到给定的矩阵？

每门大炮可以进行任意次数的射击。在训练之前，多边形的每个单元格都包含 0。

## 输入格式

第一行包含整数 $t$ ( $1 \le t \le 1000 $ ) — 测试用例的数量。接下来是 $t$ 个测试用例。

每个测试用例以包含整数 $n$ ( $1 \le n \le 50 $ ) 的行开始，表示多边形的大小。

接下来的 $n$ 行，每行包含长度为 $n$ 的由 0 和 1 组成的字符串，表示训练后的多边形矩阵。

一个测试中所有测试案例中矩阵的总面积不超过 $10^5$。

## 输出格式

对于每个测试用例，打印：

- 如果存在一系列射击，使得得到给定的矩阵，则输出 YES；
- 如果不存在这样的射击序列，则输出 NO。

YES 和 NO 中的字母可以以任何大小写形式输出。

## 样例 #1

### 样例输入 #1

```
5
4
0010
0011
0000
0000
2
10
01
2
00
00
4
0101
1111
0101
0111
4
0100
1110
0101
0111
```

### 样例输出 #1

```
YES
NO
YES
YES
NO
```

## 提示

第一个测试用例在题目中已经解释过了。

第二个测试用例的答案是 NO，因为从任何一门大炮射出的在单元格 ( $1, 1$ ) 中的 1 会继续前进。