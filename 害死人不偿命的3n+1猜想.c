//
// Created by Administrator on 2019/1/3.
//
#include "stdio.h"

void main(){
    int num; int i = 0;
    printf("请输入一个小于1000的数");
    scanf("%d",&num);
    if(num > 1000){
        printf("输入数字大于1000");
        return;
    } else if(num == 2){
        printf("1次");
    }
    else{
        if(num%2 == 0)
        {
            while(num!=1)
            {
                i++;
                num = num/2;
            }
            printf("%d",i);
            return;
        }else{
            num = 3*num + 1;
            while(num!=1)
            {
                i++;
                num = num/2;
            }
            printf("%d",i);
            return;
        }
    }
}
