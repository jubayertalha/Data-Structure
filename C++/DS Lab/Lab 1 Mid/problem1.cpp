#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int arr[n];
    cout<<"Enter Data: ";
    int i,j;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Normal Order: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nInverse Order: ";
    for(j=n-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    return 0;
}

