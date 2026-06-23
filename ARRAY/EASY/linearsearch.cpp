#include<iostream>
#include<vector>
using namespace std;

int linearsearch(vector<int>&v , int target){
    if(v.empty()) return -1;
    for(int i=0;i<v.size();i++){
        if(v[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    int answer;
    answer=linearsearch(v,target);
    cout<<answer;
    return 0;
}