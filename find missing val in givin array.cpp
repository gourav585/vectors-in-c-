#include<iostream>
#include<vector>
using namespace std;
int missingnumber(vector<int> arr , int n){
    int totalsum = n*(n+1)/2;
    int arrsum =0;
    for(int i=0;i<arr.size();i++){
        arrsum = arrsum + arr[i];
    }
    return totalsum - arrsum;
}
int main(){
    vector<int> arr ={1,2,3,5};
    int n=5;
    cout<<"missing val is => "<<missingnumber(arr,n);
}
