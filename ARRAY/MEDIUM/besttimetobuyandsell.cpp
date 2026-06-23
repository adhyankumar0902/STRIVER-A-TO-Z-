#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maximumprofit(vector<int>& v){
    int buy=v[0];
    int maxprofit=0;
    
    for(int i=1;i<v.size();i++){
        int profit=v[i]-buy;
        maxprofit=max(maxprofit,profit);
        buy=min(buy,v[i]);
    }
    
    return maxprofit;
}

int main(){
    vector<int>v={8,4,3,18,1};
    cout<<maximumprofit(v);
    return 0;
}