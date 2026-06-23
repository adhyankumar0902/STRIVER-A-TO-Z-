#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int largestsubbarraysum(vector<int>& v){
    int sum = 0;
    int maxsum = INT_MIN;

    int start = -1;
    int end = -1;
    int tempStart = 0;

    for(int i = 0; i < v.size(); i++){

        if(sum == 0){
            tempStart = i;
        }

        sum += v[i];

        if(sum > maxsum){
            maxsum = sum;
            start = tempStart;
            end = i;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    for(int i = start; i <= end; i++){
        cout << v[i] << " ";
    }

    cout << endl;
    return maxsum;
}
int main(){
    vector<int>v={2,-3,5,-2,7,8,7,6,5,4,3,2,1,-4};
    cout<<largestsubbarraysum(v);
    return 0;
}