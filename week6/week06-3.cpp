//week06-3.cpp
//while迴圈 與if判斷
class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){//只要n還有數字,就剝皮,剝掉3的倍數}
            //n%3會剩下?? 剩1 0 可 剩2不好
            if(n%3==2) return false;
            n= n/3;

         }
         return true;
    }
};
