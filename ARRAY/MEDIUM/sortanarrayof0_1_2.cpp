#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//OPTIMAL APPROACH
//dutch national flag algorithm
void sorting(vector<int>& v){
    int low=0,mid=0,high=v.size()-1;
    while(mid<=high){
        if(v[mid]==0){
            swap(v[low],v[mid]);
            low++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            swap(v[mid],v[high]);
            high--;
        }
    }
}


//HASHING
void sort012inorder(vector<int> &v){
    map<int,int>sort;
    for(int i=0;i<v.size();i++){
        sort[v[i]]++;
    }
    for(int i=0;i<v.size();i++){
        if(i<sort[0]){
            v[i]=0;
        }
        else if(i>=sort[0] && i<(sort[1]+sort[0])){
            v[i]=1;
        }
        else{
            v[i]=2;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v={1,2,0,0,2,0,1,2,0,0,0,0};
    sort012inorder(v);
    cout<<endl;
    sorting(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}