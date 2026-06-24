#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;


//better method
vector<vector<int>> betterapproach(vector<int> &v){
    set<vector<int>> st1;
    int n=v.size();

    for(int i=0;i<n-1;i++){
        set<int> hashset;
        for(int j=0;j<n;j++){
            int temp= -(v[i]+v[j]);
            if(hashset.find(temp)!=hashset.end()){
                
            }
        }
    }
}


//BRUTE FORCE METHOD

vector<vector<int>> threesum(vector<int> &v){
    int n=v.size();
    set<vector<int>> st;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(v[i]+v[j]+v[k]==0){
                    vector<int> temp={v[i],v[j],v[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            } 
        }
    }
    vector<vector<int>> answer(st.begin(),st.end());
    //or we can write 
    // vector<vector<int>> answer;
    //for(auto it:st){
    //   answer.push_back(it);
    //}

    return answer;
}

int main(){
    vector<int>v={};
    threesum(v);
    betterapproach(v);
    return 0;
}