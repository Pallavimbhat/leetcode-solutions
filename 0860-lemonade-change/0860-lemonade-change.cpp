class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       long long c5=0,c10=0,c20=0;
       for(int i=0;i<bills.size();i++){
        if(bills[i]==5){
            c5++;
        }
        else if(bills[i]==10){
            if(c5<1) return false;
            else{
                c5-=1;
                c10++;
            }
        }
        else{
            if(!(c5>=3) && !(c5>=1 && c10>=1 )) return false;
             
            if(c5>=1 && c10>=1) {
             c5--;
             c10--;
             c20++;
            }
            else if(c5>=3){
                c5-=3;
                c20++;
            }

        }
       } 
       return true;
    }
};