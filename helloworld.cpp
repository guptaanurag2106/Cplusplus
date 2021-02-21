#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7};
    cout<<sizeof(a)/sizeof(int)<<endl;
    int* pa=a;
    cout<<pa<<endl;
    cout<<*pa<<endl;
    cout<<pa[2]<<endl;
    pa+=2;
    cout<<*pa<<endl;
    int array[3];
    for(int i=0;i<3;i++){
        cin>>array[i];
    }
    for(int i=0;i<3;i++){
        cout<<array[i]<<" "<<flush;
        const int asd=12;
        cout<<asd<<endl;
    }
    
    return EXIT_SUCCESS;
}