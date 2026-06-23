#include<iostream>
#include<vector>
using namespace std;

/*void pascaltriangle(int n){
    for(int i=0;i<n;i++){
        int sum=1;
        for(int j=0;j<=i;j++){
            cout<<sum<<" ";
            sum=
        }
    }
}*/

/* SEE THIS SOLUTION

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = result[i - 1][j - 1] + result[i - 1][j];
            }
            result.push_back(row);
        }
        return result;
    }
};

*/

//PRINTING THE ELEMENT AT RTH ROW AND CTH COLUMN
int nCr(int n,int r){
    long long result=1;
    for(int i=0;i<r;i++){
        result=result*(n-i);
        result=result/(i+1);
        
    }
    return result;
}

//PRINTING THE NTH LINE OF THE PASCAL TRIANGLE
vector<int> printnthline(int n){
    vector<int> answer;
    answer.push_back(1);
    long long result=1;

    for(int i = 1; i < n; i++){
        result = result * (n - i);
        result = result / i;
        answer.push_back(result);
       
    }
    return answer;
}
//pascal triangle
vector<vector<int>> pascal(int n){
    vector<vector<int>>ans;
    for(int i=1;i<=n;i++){
        ans.push_back(printnthline(i));
    }
    return ans;
}
int main(){
    int n=5;
    // pascaltriangle(n);
    int row=5;
    int column=3;
    cout<<nCr(row-1,column-1)<<endl;
    printnthline(n);
    return 0;
}