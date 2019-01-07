//
// Created by Administrator on 2019/1/7.
//

#include <stdio.h>
//选择排序
void selectSort(){
    for (int i = 1; i <= n ; ++i) {
        int k = i;
        for(int j = i; j<= n;j++)
        {
            if(A[j] < A[K])
            {
                k = j;
            }

        }
        int temp = A[i];
        A[i] = A[k];
        A[K] = temp;

    }
}

//插入排序

