#include<iostream>
#include<vector>
using namespace std;

int upperbound(vector<int>& v, int target){

    int n = v.size();

    int st = 0;
    int end = n - 1;

    int ans = n;

    while(st <= end){

        int mid = st + (end - st)/2;

        if(v[mid] > target){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }

    return ans;
}

int main(){
    vector<int>v={-1,0,3,5,9,12};
    int target=4;
    cout<<upperbound(v,target);
    return 0;
}