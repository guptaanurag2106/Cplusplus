#include<iostream>
#include<vector>
using namespace std;

class Calc{
   public:
     int removeElement(vector<int> &A, int val)
    {   
        int n=A.size();
        for (int i = 0; i < n;)
        {
            if (A[i] == val) swap(A[i], A[--n]);
            else ++i;
        }
        return n;
            
    }
};


int main(){
    vector<int> num={3,2,2,3,3,4,6,5};
    int val=3;
    Calc calc1;
    cout<<calc1.removeElement(num,val)<<endl;
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<" "<<flush;
    }
    return EXIT_SUCCESS;
}