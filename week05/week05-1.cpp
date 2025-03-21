///week05-1.cpp
///主題:陣列 arry 配合for迴圈

# include <stdio.h>
int main()
{///陣列宣告4格,大括號裡面,初始化4個值
    int a[4]= {10,20,30,40};
    for(int i=0; i<4; i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    a[0]=99;///把a[0]值換成99
    for(int i=0; i<4; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
