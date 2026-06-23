#include<iostream>
#include<vector>
using namespace std;

void rearrange(vector<int>&v){
    vector<int>v1(v.size());
    int positiveindex=0;
    int negativeindex=1;
    for(int i=0;i<v.size();i++){
        if(v[i]>0){
            v1[positiveindex]=v[i];
            positiveindex+=2;
        }
        else{
            v1[negativeindex]=v[i];
            negativeindex+=2;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v1[i]<<" ";
    }
}

int main(){
    vector<int>v={2,4,5,-1,-3,-4};
    rearrange(v);
    return 0;
}