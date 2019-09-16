//
//  ComplexityAnalysis.cpp
//  HairLossMagic
//
//  Created by DoZhui on 2019/9/16.
//  Copyright © 2019 DoZhui. All rights reserved.
//

#include "ComplexityAnalysis.hpp"

/*
 时间复杂度
 
 先说下时间复杂度：描述一个算法执行时间与数据规模的增长关系，通常用 T(n) = O(f(n)) 来表示，这里的 n 表示数据的规模，f(n) 每行代码执行的次数总和。这里重点在于增长关系这几个字，一个算法的时间复杂度，通常只需要考虑 n 的增长规模，这里的 n 指的是每段代码的执行次数，所以时间复杂度大多都只看循环、递归来分析，而与那些常数、系数等无关。
 */

void swap(int &a, int& b){
    int tmp = a; a = b; b = tmp;
}

int sum(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += n;
    }
    return sum;
}


/*
 分析小技巧
 
 如果没有循环或递归，都是常量级的代码，时间复杂度就是 O(1)
 只关注循环次数最多的一段代码，它的量级就可作为整段代码的时间复杂度
 如果是 for 循环嵌套的代码，采用乘法计算其内外复杂度；如果是一个函数里有多段代码，则分析出每一段代码的时间复杂度，在将它们相加，最后去掉系数以及常数，取最大量级的作为整段代码的时间复杂度。例如，O(2n²+n+2) 则简化为 O(n²)
 */


/*
空间复杂度

类比时间复杂度，空间复杂度的概念在几个字上不一样，完整表述为:描述一个算法占用空间与数据规模的增长关系。
*/

void kongjianfuzadu(int n) {
    
    //1
    for(int i=0;i<n;i++){
        int temp = i;
    }
    
    //2
    int temp=0;
    for(int i=0;i<n;i++){
        temp = i;
    }
}


////斐波那契数列循环算法：(*****)
// 1 1 2 3 5
//时间复杂度：O(n)
//空间复杂度：O(1)
long long Fib(long N)
{
    long long  first = 1;
    long long second = 1;
    long long  ret = 0;
    int i = 3;
    for (; i <= N; ++i)
    {
        ret = first + second;
        first = second;
        second = ret;
    }
    return second;
}


//斐波那契数列递归算法：
//时间复杂度: O(2^n)
//空间复杂度：O（n）
long long Fib_D(long long N)
{
    return (N < 3) ? 1 : Fib_D(N - 1) + Fib_D(N - 2);
}
/*
 注意：
 
 斐波那契数列的时间复杂度为二叉树的个数；
 
 斐波那契数列的时间复杂度为函数调用栈的次数即二叉树的深度。
 */

long long Fib_G(long long first,long long second,int N)
{
    if (N < 3 )
    {
        return 1;
    }
    if (N == 3)
    {
        return first + second;
    }
    return Fib_G(second,first+second,N-1);
}
