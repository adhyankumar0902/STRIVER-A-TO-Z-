#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void leadersinthearray(vector<int>& v){
    if(v.empty()) return;
    vector<int>v1;
    int maximum=v[v.size()-1];
    v1.push_back(v[v.size()-1]);
    for(int i=v.size()-2;i>=0;i--){
        
        if(v[i]>maximum){
            v1.push_back(v[i]);
        }
        maximum=max(maximum,v[i]);
    }
    reverse(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
}
int main(){
    vector<int>v={1,2,5,3,1,2};
    leadersinthearray(v);
    return 0;
}