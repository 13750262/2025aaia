///week11-1.cpp
#include <stdio.h>

int addnum(int a, int b) ///�e�i���a,b
{
    printf("�b�禡addnum()��.�o��Ѽ�a:%d b:%d\n" ,a,b);
    int ans=a+b;
    return ans; ///���X�Ӫ����G�ǥX�h
}
int main()
{
    int ans = addnum(2,3);
    printf("�bmain()�o�쪺����:%d\n",ans);
}
