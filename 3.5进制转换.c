//
// Created by Administrator on 2019/1/5.
//
#include <stdio.h>

// 十进制y转换为Q进制

void transfor()
{
    int z[40],num=0;
    do{
        z[num++] = y % Q;
        y= y/Q;
    }while(y!=0);
}

//p进制数X转换为十进制数Y

void trans()
{
 int y =0,product =1;
 while(x!=0)
 {
     y = y +(x%10)*product;
     x = x/10;
     product = product * p;
 }
}
