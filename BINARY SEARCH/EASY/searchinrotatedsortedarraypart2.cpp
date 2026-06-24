#include<iostream>
#include<vector>
using namespace std;

bool searchinrotatedarray(vector<int> &v,int target){
    int st=0;
    int end=v.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(v[mid]==target){
            return true;
        }
        if(v[st]==v[mid] && v[mid]==v[end]){
            st++;
            end--;
            continue;
        }
        if(v[mid]>=v[st]){//LEFT SORTED
            if(target>=v[st] && target<v[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{//RIGHT SORTED
            if(target>v[mid] && target<=v[end]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }

        }
    }

    return false;
}

int main(){
    int target=9;
    vector<int> v={2,5,6,7,1,1,2};
    cout<<searchinrotatedarray(v,target);
    return 0;
}