#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextpermutation(vector<int> &v){
    int index=-1;
    
    for(int i=v.size()-2;i>=0;i--){
        if(v[i]<v[i+1]){
            index=i;
            break;
        }
    }
    if(index==-1){
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return;
    }
   for(int i=v.size()-1;i>=0;i++){
        if(v[i]>v[index]){
            swap(v[i],v[index]);
            
            break;
        }
   }
    reverse(v.begin()+index+1,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v={2,1,3,0,2,3};
    nextpermutation(v);
    return 0;
}