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

int main(){
    vector<int> v={5, 7, 7, 8, 8, 10};
    int key=7;
    int first=firstOccurrence(v,key);
    int last=lastOccurrence(v,key);
    if(first==-1){
        cout<<0;
    }
    else{
        cout<<last-first+1;
    }
    return 0;
}