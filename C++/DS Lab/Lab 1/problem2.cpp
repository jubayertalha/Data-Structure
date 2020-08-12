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
    cout<<endl;
    int odd=0,even=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    cout<<odd<<" odd numbers"<<endl;
    cout<<even<<" even numbers"<<endl;
    return 0;
}


