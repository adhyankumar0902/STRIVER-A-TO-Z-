#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int> &v,int target){
    int st=0;
    int end=v.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;

        if(v[mid]==target){
            return true;
        }

        if(v[mid]>target){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }

    return false;
}

int main(){
    vector<int>v={-1,0,3,5,9,12};
    int target=0;
    cout<<search(v,target);
    return 0;
}