#include<iostream>
using namespace std;

int main(){
    cout<<"Enter Size: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter Data: ";
    int i,j,temp;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0,j=n-1;i<n/2;i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout<<"Inverse Data: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
