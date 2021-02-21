#include<iostream>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        
        if (x>INT_MAX || x < -INT_MAX) {
           
              return 0;
        }
        
        int rev = 0;
        bool ispos = (x > 0);
        x *= ispos ? 1 : -1;
        
        while (x>0) {
            int last_d = x % 10;
            
            if (rev>INT_MAX/10){
                
               return 0;
            }
            
            rev = rev*10 + last_d;
            x /= 10;
        }
        return rev * (ispos ? 1 : -1);
    }
};



int main(){
    int x,r;
    cout<<"ad";
    cin>>x;
    Solution sol1;
    
    r=sol1.reverse(x);
    
    cout<<r<<flush;
    return 0;

}