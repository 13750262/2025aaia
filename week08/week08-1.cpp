///week08-1.cpp 獁獁逼
#include <stdio.h>
int main()
{
        int a[10] = {3,0,1,8,7,2,5,4,6,9};
        for(int i=0; i<10; i++) printf("%d ",a[i] );
        printf("\n");

    for(int k=0; k<9; k++){ ///程9计常т
        for(int i=0; i< 9; i++){ ///10,ㄢㄢゑ 9Ω
            if(a[i] > a[i+1]){ ///ぃ癸, 碞ユ传
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
             }
        }
        for(int i=0; i<10; i++) printf("%d ",a[i] );
        printf("\n");
    }
}



