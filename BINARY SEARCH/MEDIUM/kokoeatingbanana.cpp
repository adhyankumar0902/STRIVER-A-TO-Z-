#include<iostream>
#include<vector>
#include<climits>
#include<cmath>
using namespace std;

int maxi(vector<int> &v){
    int maximum=INT_MIN;
    for(int i=0;i<v.size();i++){
        maximum=max(maximum,v[i]);
    }
    return maximum;
}

int timetaken(vector<int>& v,int mid){
    int totaltime=0;
    for(int i=0;i<v.size();i++){
        totaltime+=ceil((double)v[i]/(double)mid);
    }
    return totaltime;
}

int minimumbananas(vector<int> &v,int hours){
    int maximum= maxi(v);
    int st=1;
    int end=maximum;
    int ans=INT_MAX;
    while(st<=end){
        int mid=st+(end-st)/2;
        int time=timetaken(v,mid);
        if(time<=hours){
            ans=min(ans,mid);
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    int hours=8;
    vector<int>v={3,6,7,11};
    cout<<minimumbananas(v,hours);
    return 0;
}