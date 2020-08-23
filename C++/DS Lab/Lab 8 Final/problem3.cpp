#include<iostream>
using namespace std;void inputArray(int a[], int s,string ch);

void printArray(int a[],int s,string ch);

void insertionSort(int arr[],int n){    printArray(arr,n,"Unsorted arr");    int c = 0,s = 0;
    for(int i=1;i<n;i++){
        int num = arr[i];
        int j;
        for(j=i-1;j>=0&&num<arr[j];j--){            c++;            s++;
            arr[j+1] = arr[j];
        }        c++;
        arr[j+1] = num;
    }    printArray(arr,n,"Sorted arr");    cout<<"Number of comparisons: "<<c<<endl;    cout<<"Number of exchanges: "<<s<<endl;
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