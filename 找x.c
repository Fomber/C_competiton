//
// Created by Administrator on 2019/1/3.
//
#include <stdio.h>

const int MAX = 201;
int main(){
    int num[MAX];
    int n,m,b,j=0;
    printf("请问你想输入几个数");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&m);
        num[i] = m;
    }
    printf("输入完成\n");
    printf("请输入查询的数\n");
    scanf("%d",&b);
    while(j<n)
    {
        if(num[j] == b)
        {
            printf("已经找到位置:");
            printf("%d",j);
            break;
        }else{
            ++j;
        }
    }
    if(j>=n)
    {
        printf("没有找到这个数");
    }
    return 0;
}
