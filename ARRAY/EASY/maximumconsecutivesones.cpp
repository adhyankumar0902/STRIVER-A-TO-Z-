#include<iostream>
#include<vector>
using namespace std;
void maximumones(vector<int> &v){
    if(v.empty()) return;
    int count=0;
    int maximum=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==1){
            count++;
            maximum=max(maximum,count);
        }
        else{
            count=0;
        }
    }
    cout<<maximum;
    return;

}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    maximumones(v);
    return 0;
}