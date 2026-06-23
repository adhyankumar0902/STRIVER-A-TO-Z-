#include<iostream>
#include<vector>
#include<map>
#include <unordered_map>
using namespace std;

//moore"s algorithm
//OPTIMAL APPROACH (the code is when there is definitely a majority element , if not we have to write code for checking the freq)
int majority(vector<int>& v){
    int el;
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(cnt==0){
            el=v[i];
        }
        if(v[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    return el;
}

//better approach
int majorityelement(vector<int>&v){
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }

    for(auto it:mp){
        if(it.second>(v.size()/2)){
            return it.first;
        }
    }

    return -1;

}
int main(){
    vector<int>v={1,2,2,1,2,1,1};
    cout<<majorityelement(v)<<endl;

    cout<<majority(v);
    return 0;
}