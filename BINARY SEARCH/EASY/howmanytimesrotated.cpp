#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int howmanytimesrotated(vector<int>& nums) {
      int st=0;
      int end=nums.size()-1;
      int minimum=INT_MAX;
      int index=-1;
      while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]<minimum){
            minimum=nums[mid];
            index=mid;
        }
        //minimum=min(minimum,nums[mid]);
        if(nums[mid]>=nums[st]){//left sorted
            if(nums[st]<minimum){
            minimum=nums[st];
            index=st;
        }
            //minimum=min(minimum,nums[st]);
            st=mid+1;
        }
        else{
            //right sorted
             if(nums[mid+1]<minimum){
            minimum=nums[mid+1];
            index=mid+1;
        }
            //minimum=min(minimum,nums[mid+1]);
            end=mid-1;
        }
      }
      return index;
    }


    //OPTIMAL AND CLEANER

int rotations(vector<int>& v){
    int st=0;
    int end=v.size()-1;
    if(v[st] <= v[end])
    return st;

    while(st<end){
        int mid=st+(end-st)/2;
        if(v[mid]<=v[end]){
            end=mid;
        }
        else{
            st=mid+1;
        }
        
    }
    return st;
}


    int main(){
    
    vector<int> v={4,5,6,7,-2,0,2};
    //cout<<howmanytimesrotated(v);
    cout<<rotations(v);
    return 0;
}