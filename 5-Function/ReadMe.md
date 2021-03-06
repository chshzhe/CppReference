- [ 第1关：判断素数](#head1)
- [ 第2关：完全数](#head2)
- [ 第3关：(*)进制转换](#head3)
- [ 第4关：冰雹猜想](#head4)
- [ 第5关：最大值和最小值](#head5)
- [ 第6关：潜泳问题](#head6)
- [ 第7关：（*）Fibonacci函数](#head7)
- [ 第8关：(*)组合数](#head8)
- [ 第9关：计算谐均值](#head9)
- [ 第10关：魔术师猜数](#head10)
- [ 第11关：计算最大的三位约数](#head11)
- [ 第12关：统计非负整数中指定数字的个数](#head12)
- [ 第13关：摘苹果](#head13)
- [ 第14关：孔融分梨](#head14)
- [ 第15关：递归法计算两个数的最大公约数](#head15)
- [ 第16关：递归法计算游戏人员的年龄](#head16)
- [ 第17关：插入排序的递归实现](#head17)
- [ 第18关：（*）strstr](#head18)
- [ 第19关：快速求幂](#head19)
- [ 第20关：归并排序](#head20)
- [ 第21关：0-1背包问题](#head21)
### <span id="head1"> 第1关：判断素数</span>

**任务描述**

本关任务：输入两个正整数m和n（1≤m≤n≤10000），编写一个程序，统计并输出m～n之间（包含m和n）的素数的个数。

**编程要求**

根据提示，在右侧编辑器补充代码，输入两个正整数m和n（1≤m≤n≤10000），输出m～n之间（包含m和n）的素数的个数。要求定义并调用函数 isPrime(n) 来判断n是否是素数

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`1 10` 预期输出： `4`

### <span id="head2"> 第2关：完全数</span>

**任务描述**

本关任务：完全数（perfect number），又称为完美数或完备数，是一些特殊的自然数。它所有的真因子（即除了自身以外的约数）的和，恰好等于它本身。例如：28是一个完全数，它有约数1、2、4、7、14、28，除去它本身28外，其余5个数相加：1+2+4+7+14=28。编写程序，输入两个正整数m和n(1≤m≤n≤10000)，输出m ~ n之间（包含m和n）的所有完全数。如果m ~ n之间没有完全数，则输出-1

**编程要求**

根据提示，在右侧编辑器补充代码，输入两个正整数m和n(1≤m≤n≤10000)，输出m ~ n之间（包含m和n）的所有完全数。如果m ~ n之间没有完全数，则输出-1。要求定义并调用函数 perfectNumber(n) 判断 n 是否是完全数。

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`1 30` 预期输出： `6 28`

### <span id="head3"> 第3关：(*)进制转换</span>

**任务描述**

本关任务：输入两个十进制正整数 n 和 base(2≤base≤16)，将 n 转换为 base 进制后输出。

**编程要求**

根据提示，在右侧编辑器补充代码，输入两个十进制正整数 n 和 base(2≤base≤16)，将 n 转换为 base 进制后输出。大于十进制的 base 进制常用的是十六进制，在十六进制中，除了十进制中用到的 0-9 这十个数字外，还引入了A、B、C、D、E、F 来分别表示十进制的10、11、12、13、14、15。要求定义并调用函数 printInt(n,base)，它的功能是屏幕输出 n 的 base 进制表示

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`255 16` 预期输出： `FF`

### <span id="head4"> 第4关：冰雹猜想</span>

**任务描述**

本关任务：给出一个正整数 n，然后对这个数字一直进行下面的操作：如果这个数字是奇数，那么将其乘 3 再加 1，否则除以 2。经过若干次循环后，最终都会回到 1。经过验证，很大的数字都可以按照这样的方式变成 1，所以被称为“冰雹猜想”。例如：当 n 是 20，变化的过程是 [20, 10, 5, 16, 8, 4, 2, 1]； 而当 n 是 1 的时候，变化的过程是 [1]。根据给定的数字 n，验证这个猜想，即输出整个变化序列。

**编程要求**

根据提示，在右侧编辑器补充代码，用户输入正整数 n，验证这个猜想，即输出整个变化序列。要求定义并调用函数 valid(n)来输出“冰雹猜想”的整个变化序列。

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`20` 预期输出： `20 10 5 16 8 4 2 1`

### <span id="head5"> 第5关：最大值和最小值</span>

**任务描述**

本关任务：编写函数模板maxmin，可以输出数组中最大数和最小数

**编程要求**

根据提示，在右侧编辑器补充代码，输出数组中最大数和最小数。不要修改main函数。输出格式为: 整型数组最大值 最小值 浮点数组最大值 最小值

**测试说明**

平台会对你编写的代码进行测试：

测试输入： `4` `1 2 3 4` `5` `5.1 4.2 3.3 2.4 1.5` 输入说明：第一行为整型数组规模，第二行为整型数组内容，第三行为浮点型数组规模，第四行为浮点型数组内容 预期输出： `4 1` `5.1 1.5`

### <span id="head6"> 第6关：潜泳问题</span>

**任务描述**

本关任务：某单位在某个湖里举行潜水比赛，这是一个团体项目，每一支队伍由n人组成，要求所有队员从A岸潜水到B岸。在潜水过程中必须用氧气瓶，但每支队伍只有一个氧气瓶。最多两个人同时使用一个氧气瓶，但此时两人必须同步前进，因此到达终点的时间等于较慢的一人单独从A到B的时间。大家都很Nice，随便两个人都愿意共用一个氧气瓶一起游泳。请安排一种策略，让最后一名队员尽早到达终点。

**编程要求**

根据提示，在右侧编辑器补充代码，首先输入队伍人数n（n <= 1000），接着是n个队员单独游到终点所用的时间。要求输出所有队员最早到达终点的时间。

**相关知识***

可以通过sort函数对数组进行排序，需要用到的头文件已经给出。例如

```c++
int a[] = {5,4,3,2,1};
sort(a,a+5);// 输出a将得到1,2,3,4,5
```

提示： 首先将n个队员游到终点耗时长短按递增排序，得到 P(1)P(2)…P(n) 我们把A岸耗时最长的两个人P(n)，P(n−1)游到B岸看成一个步骤。为了达到耗时最短，需要在如下两种方案中选择。

方案1：安排耗时最短的两个人P(1)，P(2)先游到B岸，然后P(1)游回A岸，接着安排耗时最长的两个人P(n)，P(n-1)游到B岸，再安排P(2)游回A岸，总耗时t1=2∗P(2)+P(1)+P(n)

方案2：安排耗时最短和最长的P(1)，P(n)先游到B岸，P(n)留在B岸，P(1)回A岸。然后P(1)，P(n-1)游到B岸，再安排P(1)游回A岸。总时间为t2=2∗P(1)+P(n)+P(n-1)

如果t1<t2，就选择方案1，否则选择方案2。重复上述策略，直到所有人到达B。算法实现时还需要考虑人数奇偶。如果是奇数，最后在A岸剩下人为P(1)，P(2)，P(3)，3人到达B岸耗时P(1)+P(2)+P(3)，如果是偶数，最后剩下两人为P(1)，P(2),耗时P(2).

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`3 1 3 4` 预期输出： `8`

### <span id="head7"> 第7关：（*）Fibonacci函数</span>

**任务描述**

本关任务：设计函数fib，每调用一次就返回Fibonacci数列的下一个值，即第一次调用返回1，第二次调用返回1，第三次调用返回2，第四次调用返回3……

**编程要求**

根据提示，在右侧编辑器补充代码，完成fib函数，main函数已隐藏，不得使用全局变量。

**测试说明**

平台会对你编写的代码进行测试：

测试输入：无 预期输出： `1` `1` `2` `3` `5` `8` `13` `21` `34` `55`

### <span id="head8"> 第8关：(*)组合数</span>

**任务描述**

本关任务：编写一个求n!的函数，并用于求从n个数中取m个数的组合数（m<=n<=14）,当n < m时，输出‘wrong’。

**编程要求**

根据提示，在右侧编辑器补充代码，用户输入n和m，输出组合数。不用考虑溢出。

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`4 1` 预期输出： `4`

### <span id="head9"> 第9关：计算谐均值</span>

**任务描述**

本关任务：编写一个带有两个double参数的函数，计算这两个参数的谐均值。两数值的谐均值可以这样计算：首先对两数值的倒数取平均值，最后再取倒数。

**编程要求**

根据提示，在右侧编辑器补充代码，完成函数calculate，main函数已隐藏，其功能是先输入测试样例数t，然后输入t组输入，程序依次输出t个谐均值。

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`2 3 4 6.5 3.8` 预期输出： `3.429` `4.796`

### <span id="head10"> 第10关：魔术师猜数</span>

**任务描述**

本关任务：在一种室内互动游戏中，魔术师要每位观众心里想一个三位数abc（a、b、c分别是百位、十位和个位数字），然后魔术师让观众心中记下acb、bac、bca、cab、cba五个数以及这5个数的和值。只要观众说出这个和是多少，则魔术师一定能猜出观众心里想的原数abc是多少。例如，观众甲说他计算的和值是1999，则魔术师立即说出他想的数是443，而观众乙说他计算的和值是1998，则魔术师说：“你算错了！”。请编程模拟这个数字魔术游戏。

**编程要求**

根据提示，在右侧编辑器补充代码，要求用函数实现，函数原型为：int magic(int m);其中形参m代表观众计算的和值，返回值是观众心里想的原数abc。如果观众计算错误，请返回-1。main函数已隐藏，接受的输入包含t+1个正整数，第一个是测试次数t，随后t个则是观众计算的和值，程序计算输出t个结果。

**测试说明**

平台会对你编写的代码进行测试：

测试输入： `2` `1999` `1998` 预期输出： `The number is 443` `The sum you calculated is wrong!`

### <span id="head11"> 第11关：计算最大的三位约数</span>

**任务描述**

本关任务：从键盘任意输入一个数n（1000<=n<=1000000），编程计算并输出n的所有约数中最大的一个三位数（即最大的三位约数）。如果n小于1000或者大于1000000，则输出“Input error!”。如果没有三位数的约数，则输出“Not found!”。

**编程要求**

根据提示，在右侧编辑器补充代码，完成函数int Func(int n)；函数功能为计算n的所有约数中最大的三位数，如果没有三位数的约数，则返回-1

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`555555` 预期输出： `777`

### <span id="head12"> 第12关：统计非负整数中指定数字的个数</span>

**任务描述**

本关任务：从键盘输入一个非负整数 number，求其中含有指定数字 digit 的个数。例如：从键盘输入 number=1222 ,若 digit=2 ，则 1222 中含有 3 个 2。

**编程要求**

根据提示，在右侧编辑器补充代码，用函数实现，函数原型为：int CountDigit(int number,int digit)

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`1222 2` 预期输出： `3`

### <span id="head13"> 第13关：摘苹果</span>

**任务描述**

本关任务：陶陶家的院子里有一棵苹果树，每到秋天树上就会结出 n （1≤n≤100） 个苹果。苹果成熟的时候，陶陶就会跑去摘苹果。陶陶有个 30cm 高的板凳，当他不能直接用手摘到苹果的时候，就会踩到板凳上再试试。

现在已知每个苹果到地面的高度 a[i] cm（1≤i≤n，100≤a[i]≤200），以及陶陶把手伸直时能达到的最大高度 height cm （100≤height≤120），请你编写程序帮助陶陶计算一下他能摘到的苹果数目。

假设只要他能够伸手碰到苹果，苹果就会掉下来。

**编程要求**

根据提示，在右侧编辑器补充代码，完成函数 int GetApple(int a[], int height, int n)来计算淘淘能摘到的苹果数目。 函数参数：数组 a 保存苹果到地面的高度，height 代表陶陶把手伸直时能达到的最大高度，n为树上总的苹果数。 函数返回值：淘淘能摘到的苹果数目

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`10 100 200 150 140 129 134 167 198 200 111 110` 输入说明：第一个输入的数据是苹果数目n；接着输入的数据是这n个苹果，每个苹果到地面的高度；最后输入的数据是陶陶把手伸直时能达到的最大高度。 预期输出： `5`

### <span id="head14"> 第14关：孔融分梨</span>

**任务描述**

本关任务：孔融没有兄弟姐妹，到了周末，就找堂兄孔明、堂姐孔茹、堂弟孔伟等7个堂兄妹来到家里玩。孔融妈妈买了8个梨给孩子们吃，结果小黄狗桐桐淘气叼走了一个，大花猫鑫鑫偷偷藏了一个。孔融抢过剩下的6个梨，妈妈止住他，说他要和大家平分吃。孔融不高兴，说8个人怎么分6个梨？妈妈说可以用分数解决这个问题。孔融学过分数，说把每个梨切8个相等的块，每个人拿6块就行了。妈妈说不用切那么多块，每个梨切4个相等的块，每个人拿3块正好。孔融糊涂了。孔明说，我来教你。于是孔明给孔融讲起了分数的化简。

分数化简要化简到最简形式，比如12/20可以化简成6/10和3/5，但3/5是最简形式；100/8可以化简成 50 /4和 25 /2 , 而25/2 为最简形式。为了降低难度，不要求将假分数（如7/2）化简成带分数（3(1/2))形式。请编程帮助孔融将任意一个分数化简成最简形式。先从键盘输入两个整数m和n(1<=m,n<=10000) ，其中m表示分子，n表示分母。然后输出分数化简后的最简形式。

**编程要求**

根据提示，在右侧编辑器补充代码，完成函数int Gcd(int a, int b)，该函数在检查a，b是合法的基础上计算a和b的最大公约数

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`8 14` 预期输出： `4/7`

### <span id="head15"> 第15关：递归法计算两个数的最大公约数</span>

**任务描述**

本关任务：编写一个用递归法计算两个数的最大公约数的程序。

利用最大公约数的性质计算。对正整数a和b，当a>b时，若a中含有与b相同的公约数，则a中去掉b后剩余的部分a-b中也应含有与b相同的公约数，对a-b和b计算公约数就相当于对a和b计算公约数。反复使用最大公约数的上述性质，直到a和b相等为止，这时，a或b就是它们的最大公约数。这三条性质，也可以表示为：  性质1 如果a>b，则a和b与a-b和b的最大公约数相同，即Gcd(a, b) = Gcd(a-b, b) 性质2 如果b>a，则a和b与a和b-a的最大公约数相同，即Gcd(a, b) = Gcd(a, b-a) 性质3 如果a=b，则a和b的最大公约数与a值和b值相同，即Gcd(a, b) = a = b

**编程要求**

根据提示，在右侧编辑器补充代码，完成递归函数int Gcd(int a,int b)，a和b是合法的正整数

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`16 24` 预期输出： `8`

### <span id="head16"> 第16关：递归法计算游戏人员的年龄</span>

**任务描述**

本关任务：编写一个使用递归法计算游戏人员年龄的小程序。

有n个人围坐在一起，问第n个人多大年纪，他说比第n-1个人大2岁；问第n-1个人，他说比第n-2个人大2岁,…..,问第3个人，他说比第2个人大2岁；问第2个人，他说比第1个人大2岁。第1个人说自己10岁，问第n个人多大年纪。

**编程要求**

根据提示，在右侧编辑器补充代码，输入人数n>0，使用递归法计算第n个游戏人员年龄并输出。

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`5` 预期输出： `18`

### <span id="head17"> 第17关：插入排序的递归实现</span>

**任务描述**

本关任务：插入排序的递归实现

一个数组有n个元素，假如前面n-1个元素已经排序好了，那么把第n个元素插入到前面n-1个元素中，使得数组有序排列，就是插入排序了。 至于n-1个元素如何已经先排序好，那么我们可以假设前面n-2个元素已经排序好，把第n-1个元素插入到前面n-2个元素中。 依次类推，直到只剩下一个元素，也就是第一个元素。排序完成。 

```c++
void Insert_Sort(int A[],int n) 
{
if(n>1)    
{        
Insert_Sort(A,n-1);//递归将前面n-1个元素排序        
//你的代码，把第n个元素插入到前面n-1个元素中    
}    
//递归的出口是n=1，无需做任何操作 
}
```

**编程要求**

根据提示，在右侧编辑器补充代码，先输入数组元素的个数，再输入数组元素，输出排序后的数组元素。测试样例数组长度范围为1~1000，输入数组限整数。

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`4 2 3 1 4` 预期输出： `1 2 3 4`

### <span id="head18"> 第18关：（*）strstr</span>

**任务描述**

本关任务：编写函数实现字符串函数strstr的功能

**编程要求**

根据提示，在右侧编辑器补充代码，用户输入两个字符串a, b，输出b在a中第一次出现的下标，如果未出现则输出-1.

**测试说明**

平台会对你编写的代码进行测试：

测试输入： `onlinejudge` `line` 预期输出： `2`

### <span id="head19"> 第19关：快速求幂</span>

**任务描述**

本关任务：利用快速幂算法实现函数long long quickPow(int n, int k), 计算原理如下，其中int(x)表示不超过x的最大整数：

当*k*为偶数时,$n^k=(n^{k/2})^2$

当*k*为奇数时,$n^k=n(n^{int(k/2)})^2$

**编程要求**

根据提示，在右侧编辑器补充代码，输入非负整数n和k，输出n的k次方

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`2 3` 预期输出： `8`

### <span id="head20"> 第20关：归并排序</span>

**任务描述**

本关任务：实现归并排序，算法如下：

```c++
Procedure sort(A,low,high) 
// 对数组A[low..high]排序
if high-low>0 
mid=(low+high)/2     
sort(A,low,mid)      
sort(A,mid+1,high)     
merge(A, low, mid, high)        
// merge实现时可以使用一个辅助数组 
endif
```

过程sort(A,low,high)在给A[low..high]这一组数进行排序时，首先判别问题的规模是否为1，如果是的，则原问题是一个规模为1的问题，无需做任何处理。当问题规模超过1时，假设为n，则在过程sort的第3、4行分别利用递归对规模为n/2的子数组排好序，然后再通过调用merge将两个长度为n/2的有序数组合并形成一个长度为n的有序数组，即由两个规模为n/2的子问题的解答得到了规模为n的问题的解答。

**编程要求**

根据提示，在右侧编辑器补充代码，输入的第一个正整数n(<=100)表示元素数量，接下来是n个待排序整数，输出排序后的元素，数字之间用空格分隔

**测试说明**

平台会对你编写的代码进行测试：

测试输入：`3 3 2 -1` 预期输出： `-1 2 3`

### <span id="head21"> 第21关：0-1背包问题</span>

**任务描述**

本关任务：考虑如下定义的背包问题K(U, C)：设U={u(1), u(2),..., u(n)}是一个准备放入容量为C的背包中的n个物品的集合，第i个物品u(i)具有体积s(i)和价值v(i)，要求从这n个物品中挑选出一部分装入背包，在不超过背包容量的前提下使背包中物品的价值最大。这里C, s(i)和v(i)都为正整数，且所有的s(i)都不大于C。

动态规划求解:

设v[i,j]表示从前i项物品中取出的装入容量为j的背包的物品的最大价值，i和j都为整数，且0<=i<=n, 0<=j<=C：

v[i][j]=0 (i=0 or j=0) v[i][j]=v[i-1][j] (i>0 and s(i)>j) v[i][j]=max{v[i-1,j], v[i-1,j-s_i]+v(i)} (i>0 and s(i)<=j )

显然v[n,C]就是我们需要得到的结果。对于上述递推式，v[0,j]=0是因为没有物品可供挑选放入背包，v[i,0]=0是因为背包容量为0，自然也不能装入任何物品。当s(i)>j时，表示该物品超过背包容量，不可能出现在最后的解中，因此v[i,j]=v[i-1,j]。对于其它情况，v[i,j]的值为v[i-1,j]和v[i-1,j-s_i]+v(i)中的最大者，这对应了最优解是否需要包含第i个物品，也反映出v[i,j]的值依赖于v[i-1,j]和v[i-1,j-s(i)]这两个子问题的解。

**编程要求**

根据提示，在右侧编辑器补充代码，完成函数knapsack。程序将先输入物品的个数n和背包的容量C，然后依次输入n个物品的体积s(i)和价值v(i)(i=1, 2, 3, ... , n)，输出能够装入背包中物品总价值的最大值。

**测试说明**

平台会对你编写的代码进行测试：

测试输入： `5 10`  `2 6` `2 3` `6 5` `5 4` `4 6` 预期输出： `15` 输出说明：物品体积=2+2+4<=10，相应的物品价值=6+3+6=15