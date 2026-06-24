#include<iostream>
#include<vector>
using namespace std;

void floorandseil(vector<int> &v,int key){
    int n=v.size();;
    int ans=n;
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(v[mid]==key){
            cout<<mid<<" "<<mid;
            return ;
        }

        if(v[mid]>key){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    if(ans==n){
        cout<<ans-1<<" "<<-1;
        return;
    }

    if(ans==0){
        cout<<-1<<" "<<ans;
        return;
    }
    
    cout<<ans-1<<" "<<ans;
    return ;
}

int main(){
    int key=19;
    vector<int> v={-1,0,3,5,9,12};
    floorandseil(v,key);
    return 0;
}