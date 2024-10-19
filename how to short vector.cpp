#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int x;
    cout<<"enter your vector size"<<endl;
    cin>>x;
    vector<int> a(x);
    int n=a.size();
    cout<<"enter your vector elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"this is your org vector => ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"this is your sorted vector => ";
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
