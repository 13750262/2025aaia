///week05-1.cpp
///�D�D:�}�C arry �t�Xfor�j��

# include <stdio.h>
int main()
{///�}�C�ŧi4��,�j�A���̭�,��l��4�ӭ�
    int a[4]= {10,20,30,40};
    for(int i=0; i<4; i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    a[0]=99;///��a[0]�ȴ���99
    for(int i=0; i<4; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
