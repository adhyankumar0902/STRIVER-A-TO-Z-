#include<iostream>
#include<vector>
using namespace std;

int squareroot(int num){
    int st=1;
    int end=num;
    int ans;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(1LL*mid*mid<=num){
            ans=mid;
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int num=36;
    
    cout<<squareroot(num);
    return 0;
}