#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i,j;
        vector<int> result(2);
        for(i=0;i<nums.size();i++){
          if(i<=target){  
          for(j=0;j<nums.size();j++){
              if(nums[i]+nums[j]==target){
                  result[0]=i;
                  result[1]=j;}
          } } 
        }
        return result;
        
    }
};

int main(){
    vector<int> vec;
    string buffer;
    int data;
    cout<<"asd";
    getline(std::cin, buffer);
    istringstream iss(buffer);
    while (iss >> data)
       vec.push_back(data);
    int target;
    cin>>target;
    Solution sol1;
    vector<int> result=sol1.twoSum(vec,target);
    cout<<"["<<result[0]<<","<<result[1]<<"]";
    return 0;
    
}