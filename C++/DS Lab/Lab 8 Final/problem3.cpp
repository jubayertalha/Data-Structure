#include<iostream>
using namespace std;

void printArray(int a[],int s,string ch);

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int num = arr[i];
        int j;
        for(j=i-1;j>=0&&num<arr[j];j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = num;
    }
}

int main(){
    int n;
    cout<<"Enter Elements Number in arr[]: ";
    cin>>n;
    cout<<"\n";
    int arr[n];
    inputArray(arr,n,"arr");
    insertionSort(arr,n);

    return 0;
}
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

void printArray(int a[],int s,string ch){
    cout<<ch<<"[]: ";
    for(int i=0;i<s;i++){
        cout<<a[i]<<"  ";
    }
    cout<<"\n"<<endl;
}