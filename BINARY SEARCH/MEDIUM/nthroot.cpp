#include<iostream>
using namespace std;

int nthroot(int m,int n){
    int st=1;
    int end=m;
    int ans=-1;
    while(st<=end){
        long long mid=st+(end-st)/2;
        long long product=1;
        for(int i=0;i<n;i++){
            if(product>(m/mid)){
                product=m+1;
                break;
            }
            product=product*mid;
        }

        if(product==m){
            
            return mid;
        }
        if(product>m){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    int m=64;
    int n=6;
    cout<<nthroot(m,n);
    return 0;
}