//week06-3.cpp
//while�j�� �Pif�P�_
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){//�u�nn�٦��Ʀr,�N���,�鱼3������}
            //n%3�|�ѤU?? ��1 0 �i ��2���n
            if(n%3==2) return false;
            n= n/3;

         }
         return true;
    }
};
