#include<iostream>
#include<vector>
using namespace std;
void unionofvectors(vector<int>& v1, vector<int>& v2){
    vector<int> output;

    int i = 0, j = 0;

    while(i < v1.size() && j < v2.size()){

        if(v1[i] <= v2[j]){
            if(output.empty() || output.back() != v1[i])
                output.push_back(v1[i]);
            i++;
        }
        else{
            if(output.empty() || output.back() != v2[j])
                output.push_back(v2[j]);
            j++;
        }
    }

    while(i < v1.size()){
        if(output.empty() || output.back() != v1[i])
            output.push_back(v1[i]);
        i++;
    }

    while(j < v2.size()){
        if(output.empty() || output.back() != v2[j])
            output.push_back(v2[j]);
        j++;
    }

    for(int x : output)
        cout << x << " ";
}
int main(){
    vector<int>v1={1,2,3,4,5};
    vector<int>v2={1,2,2,3,4,5,6,6,7};
    unionofvectors(v1,v2);
    
    return 0;
}