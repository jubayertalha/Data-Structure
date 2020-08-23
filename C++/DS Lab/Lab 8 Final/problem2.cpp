#include<iostream>
using namespace std;

void printArray(int a[],int s,string ch);

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main(){
    int n;
    cout<<"Enter Elements Number in arr[]: ";
    cin>>n;
    cout<<"\n";
    int arr[n];
    inputArray(arr,n,"arr");
    selectionSort(arr,n);

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