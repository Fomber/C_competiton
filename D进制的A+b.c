//
// Created by Administrator on 2019/1/7.
//

#include <stdio.h>

int main()
{   int A,B,D;
    printf("请输入A\n");
    scanf("%d",&A);
    printf("请输入B\n");
    scanf("%d",&B);
    printf("请输入进制数D");
    scanf("%d",&D);
    int sum = A + B;
    int ab[40],num=0;
    do{
        ab[num++] = sum % D;
        sum = sum / D;
    }while(sum != 0);

    for (int i = num - 1; i >= 0 ; --i) {
            int y = ab[i];
        printf("%d",y);
    }

}
