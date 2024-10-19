#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a ={1,2,3,4};
    cout<<"size of vector is => "<<a.size()<<endl;
    cout<<"capacity of the vector is =>"<<a.capacity()<<endl;
    a.push_back(5);
    cout<<"this is new vector => ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
      cout<<"size of vector is => "<<a.size()<<endl;
    cout<<"capacity of the vector is =>"<<a.capacity()<<endl;
    
    a.pop_back();
    cout<<"this is new vector => ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
     cout<<"size of vector is => "<<a.size()<<endl;
    cout<<"capacity of the vector is =>"<<a.capacity()<<endl;
}
