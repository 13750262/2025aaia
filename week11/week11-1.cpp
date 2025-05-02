///week11-1.cpp
#include <stdio.h>

int addnum(int a, int b) ///送進整數a,b
{
    printf("在函式addnum()裡.得到參數a:%d b:%d\n" ,a,b);
    int ans=a+b;
    return ans; ///把算出來的結果傳出去
}
int main()
{
    int ans = addnum(2,3);
    printf("在main()得到的答案:%d\n",ans);
}
