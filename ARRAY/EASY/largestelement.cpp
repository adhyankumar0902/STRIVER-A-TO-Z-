#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int largestelement(vector<int>& v){
    int largest=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>largest){
            largest=v[i];
        }
    }
    return largest;
}


int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<< largestelement(v);   
    return 0;
}