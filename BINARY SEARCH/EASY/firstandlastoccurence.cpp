#include<iostream>
#include<vector>
using namespace std;
int firstOccurrence(vector<int>& v, int key){

    int st = 0;
    int end = v.size()-1;
    int ans = -1;

    while(st <= end){

        int mid = st + (end-st)/2;

        if(v[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(v[mid] > key){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }

    return ans;
}

int lastOccurrence(vector<int>& v, int key){

    int st = 0;
    int end = v.size()-1;
    int ans = -1;

    while(st <= end){

        int mid = st + (end-st)/2;

        if(v[mid] == key){
            ans = mid;
            st = mid + 1;
        }
        else if(v[mid] > key){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }

    return ans;
}

int lowerbound(vector<int>& v, int target){

    int n = v.size();
    int st = 0;
    int end = n - 1;

    int ans = n;

    while(st <= end){

        int mid = st + (end - st)/2;

        if(v[mid] >= target){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }

    return ans;
}

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
    vector<int> v={5, 7, 7, 8, 8, 10};
    int key=22;
    

    if(lowerbound(v,key)==v.size() || v[lowerbound(v,key)]!=key){
        cout<<-1<<" "<<-1<<endl;
    }else{
        cout<<lowerbound(v,key)<<" "<<upperbound(v,key)-1<<endl;
    }

    cout << firstOccurrence(v,key)
     << " "
     << lastOccurrence(v,key)<<endl;
    return 0;
}