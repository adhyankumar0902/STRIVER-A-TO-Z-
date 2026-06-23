#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;


void twosum(vector<int> &v,int target){
    vector<int>v1={-1,-1};
    unordered_map<int,int>twosummap;
    for(int i=0;i<v.size();i++){
        
        int remaining=target-v[i];
        if(twosummap.find(remaining)!=twosummap.end()){
            v1[0]=i;
            v1[1]=twosummap[remaining];
            break;
        }
        if(twosummap.find(v[i])==twosummap.end()){
        twosummap[v[i]]=i;}   
    }
    cout<<v1[0]<<" "<<v1[1];
}

int main(){
    vector<int>v={1,6,2,10,3};
    int target=12;
    twosum(v,target);
    return 0;
}