#include<iostream>
#include<vector>
#include<map>
using namespace std;

int countsubarraywithsumk(vector<int> &v,int k){
    int count=0;
    map<int,int> mp;
    mp[0]=1;
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum=sum+v[i];
        int remaining=sum-k;
        if(mp.find(remaining)!=mp.end()){
            count=count+mp[remaining];
        }

        mp[sum]++;
    }

    return count;
}
int main(){
    vector<int>v={1,2,3,-3,1,1,1,4,2,-3};
    int k=3;
    cout<<countsubarraywithsumk(v,k);
    return 0;
}