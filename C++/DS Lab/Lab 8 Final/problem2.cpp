#include<iostream>
using namespace std;void inputArray(int a[], int s,string ch);

void printArray(int a[],int s,string ch);

void selectionSort(int arr[],int n){    printArray(arr,n,"Unsorted arr");    int c = 0,s = 0;
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){            c++;
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;            s++;
        }
    }    printArray(arr,n,"Sorted arr");    cout<<"Number of comparisons: "<<c<<endl;    cout<<"Number of exchanges: "<<s<<endl;
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
}void inputArray(int a[], int s,string ch){
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