#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findMin(vector<int>& nums) {
      int st=0;
      int end=nums.size()-1;
      int minimum=INT_MAX;
      while(st<=end){
        int mid=st+(end-st)/2;
        minimum=min(minimum,nums[mid]);
        if(nums[mid]>=nums[st]){//left sorted
            minimum=min(minimum,nums[st]);
            st=mid+1;
        }
        else{
            //right sorted
            minimum=min(minimum,nums[mid+1]);
            end=mid-1;
        }
      }
      return minimum;
    }

    int main(){
    
    vector<int> v={2,5,6,7,1,0,2};
    cout<<findMin(v);
    return 0;
}