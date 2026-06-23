#include<iostream>
#include<vector>
using namespace std;

void leftrotatebyone(vector<int>& v){

    if(v.empty()) return;

    for(int i=0;i<v.size()-1;i++){
        swap(v[i],v[i+1]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return;
}

void left_rotate_by_one(vector<int>& v){
    if(v.empty()) return;

    int temp = v[0];

    for(int i = 1; i < v.size(); i++){
        v[i-1] = v[i];
    }

    v[v.size()-1] = temp;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return;
}


int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    leftrotatebyone(v);
    cout<<endl;
    left_rotate_by_one(v);
    return 0;
}