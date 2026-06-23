#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<map>
using namespace std;

//BETTER APPROACH FOR ONLY POSITIVE NUMBERS , OPTIMAL FOR ELEMENTS HAVING ZERO AND NEGATIVES
int longestsubarraylength(vector<int>& v,int target){
    int sum=0;
    int maxlength=0;
    map<int ,int> presummap;
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];

        if(sum==target){
            maxlength=i+1;
        }

        int remaining=sum-target;
        if(presummap.find(remaining)!=presummap.end()){
            int length=i-presummap[remaining];
            maxlength=max(length,maxlength);
        }

        //FOR THE EDGE CASES

        if(presummap.find(sum)==presummap.end()){
            presummap[sum]=i;
        }
    }
    return maxlength;
}

int main(){
    vector<int>v={1,5,3,0,0,1,0,0,1,5};
    int target=10;
    cout<<longestsubarraylength(v,target);
    return 0;
}