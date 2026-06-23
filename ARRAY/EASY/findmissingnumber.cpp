#include<iostream>
#include<vector>
using namespace std;
void otherapproach(vector<int>&v){
    if(v.empty()) return;
    int n=v.size();
    vector<int>v1(n+1,0);
    for(int i=0;i<n;i++){
        v1[v[i]]=1;
    }
    for(int i=0;i<v1.size();i++){
        if(v1[i]==0){
            cout<<i;
            return;
        }
    }
    
}

void xorapproach(vector<int>&v){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<v.size();i++){
        xor1=xor1^v[i];
        xor2=xor2^(i+1);
    }
    int output=xor1 ^ xor2;
    cout<<output;
    return;
}
int main(){
    vector<int>v={0,1,2,5,4};
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
    }
   
    int n=v.size();
    long long total=(1LL*n*(n+1))/2;
    cout<<total-sum<<endl;

    otherapproach(v);
    cout<<endl;
    xorapproach(v);
    return 0;
}
