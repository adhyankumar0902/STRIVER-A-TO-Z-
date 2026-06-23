#include<iostream>
#include<vector>
using namespace std;

void movezeroestoend(vector<int> &v){
    if(v.empty()) return;
    int j=0;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0){
            swap(v[i],v[j]);
            j++;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    movezeroestoend(v);
    return 0;
}