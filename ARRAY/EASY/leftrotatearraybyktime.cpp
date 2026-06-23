#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotatebyksteps(vector<int>&v,int k){
    if(v.empty()) return;
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.end()-k,v.end());
    reverse(v.begin(),v.end()-k);
    

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    rotatebyksteps(v,k);
    return 0;
}