///week08-1.cpp 泡泡排序
#include <stdio.h>
int main()
{
        int a[10] = {3,0,1,8,7,2,5,4,6,9};
        for(int i=0; i<10; i++) printf("%d ",a[i] );
        printf("\n");

    for(int k=0; k<9; k++){ ///最大的9個數字都找到
        for(int i=0; i< 9; i++){ ///10個人,兩兩相比 9次
            if(a[i] > a[i+1]){ ///大小不對, 就交換
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
             }
        }
        for(int i=0; i<10; i++) printf("%d ",a[i] );
        printf("\n");
    }
}



