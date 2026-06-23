#include<iostream>
#include<vector>
using namespace std;

void numberthatappearonce(vector<int>& v){
    int output=0;
    for(int i=0;i<v.size();i++){
        output=output^v[i];
    }
    cout<<output;
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    numberthatappearonce(v);
    return 0;
}