#include<iostream>
#include<vector>
using namespace std;
int singleelement(vector<int> &v){
    if(v[0]!=v[1]){
        return v[0];
    }
    if(v[v.size()-1]!=v[v.size()-2]){
        return v[v.size()-1];
    }
    int st=1;
    int end=v.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(v[mid]!=v[mid+1] && v[mid]!=v[mid-1]){
            return v[mid];
        }
        if(mid%2==0){//mid is even
            if(v[mid]==v[mid+1]){
                st=mid+2;
            }
            else{
                end=mid-2;
            }
        }
        else{
            if(v[mid]==v[mid+1]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int>v={1,1,2,2,3,3,4,4,5,6,6};
    cout<<singleelement(v);
    return 0;
}