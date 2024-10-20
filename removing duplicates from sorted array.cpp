#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
 int removeDuplicates(vector<int>& nums){
     if(nums.empty()) return 0;
     int i=0;
     for(int j=1;j<nums.size();j++){
         if(nums[j]!=nums[i]){
             i++;
             nums[i] = nums[j];
         }
         
     }
     return i+1;
     
 }
 int main(){
     int n;
     cout<<"enter your vector size"<<endl;;
     cin>>n;
     vector<int> arr(n);
     cout<<"enter your vector elements"<<endl;
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     cout<<"this is your vector element => ";
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }cout<<endl;
     cout<<"this is your sorted vector";
     sort(arr.begin(),arr.end());
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }cout<<endl;
     int newLength = removeDuplicates(arr);

    cout << "Vector after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "New length of vector after removing duplicates: " << newLength << endl;
 }
