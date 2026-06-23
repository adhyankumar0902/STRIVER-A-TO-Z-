#include<iostream>
#include<vector>
using namespace std;

// BRUTE FORCE
void removeduplicate(vector<int>& v){
    vector<int>v1;
    if(v.size()==0){
        return ;
    }
    v1.push_back(v[0]);
    for(int i=1;i<v.size();i++){
        if(v[i]!=v[i-1]){
            v1.push_back(v[i]);
        }
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return;
}

//OPTIMAL CODE
void remove_duplicate(vector<int>& v){
    if(v.empty()) return;

    int j = 1;

    for(int i = 1; i < v.size(); i++){
        if(v[i] != v[j-1]){
            v[j] = v[i];
            j++;
        }
    }

    for(int i = 0; i < j; i++){
        cout << v[i] << " ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    removeduplicate(v);
    cout<<endl;
    remove_duplicate(v);
    return 0;
}