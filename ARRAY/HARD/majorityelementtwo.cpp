#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        vector<int>answer;
        int n=nums.size()/3;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==(n+1)){
                answer.push_back(nums[i]);
            }
        }

        for(int i=0;i<answer.size();i++){
            cout<<answer[i]<<" ";
        }
        return answer;
    }
int main(){
    vector<int>v={2,2,1,2,2,1,3,1,1};
    majorityElement(v);
    return 0;
}