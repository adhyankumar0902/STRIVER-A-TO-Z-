#include<iostream>
#include<vector>
using namespace std;

bool sortedarray(vector<int>&v){
    if(v.size()==0 || v.size()==1){
        return true;
    }
    for(int i=1;i<v.size();i++){
        if(v[i]<v[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<sortedarray(v);

    return 0;
}