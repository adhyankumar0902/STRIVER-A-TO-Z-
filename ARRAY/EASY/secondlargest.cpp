#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int secondlargest(vector<int>&v){
    int largest=INT_MIN;
    int secondlargest=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>largest){
            secondlargest=largest;
            largest=v[i];
        }
        if(v[i]>secondlargest && v[i]!=largest){
            secondlargest=v[i];
        }
    }

    return secondlargest;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k=secondlargest(v);
    if(k==INT_MIN){
        cout<<-1;
    }
    else{
        cout<<k;
    }
    return 0;
}