#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void revese(vector<int> arr){
    int n = arr.size();
    reverse(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter your size of vector"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter your elements"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
        
    }
     revese(arr);
}
