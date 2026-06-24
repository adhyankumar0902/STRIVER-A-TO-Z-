#include<iostream>
#include<vector>
using namespace std;

int searchinsert(vector<int> &v,int key){
    int n=v.size();;
    int ans=n;
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(v[mid]==key){
            return mid;
        }

        if(v[mid]>key){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    int key=4;
    vector<int> v={-1,0,3,5,9,12};
    cout<<searchinsert(v,key);
    return 0;
}