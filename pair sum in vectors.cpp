#include<iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> arr,int target){
    int str =0,end = arr.size()-1;
    int currentsum =0;
    vector<int> ans;
    while(str<end){
        currentsum = arr[str]+arr[end];
        if(currentsum==target){
            ans.push_back(str);
            ans.push_back(end);
            return ans;
        }else if(currentsum>target){
            end--;
        }else{
            str++;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {2,7,11,15};
    int target =9;
     vector<int> ans= pairsum(arr,target);
     cout<<"this is the position of your elements => "<<ans[0]<<","<<ans[1];
}
