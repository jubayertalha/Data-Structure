#include<iostream>
using namespace std;void inputArray(int a[], int s,string ch);

void printArray(int a[],int s,string ch);
void bubbleSort(int arr[],int n){    printArray(arr,n,"Unsorted arr");    int c = 0,s = 0;
    for(int i=0;i<n;i++){
        bool flag = true;        for(int j=0;j<n-i-1;j++){            c++;
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = false;                s++;
            }
        }
        if(flag) break;
    }    printArray(arr,n,"Sorted arr");    cout<<"Number of comparisons: "<<c<<endl;    cout<<"Number of exchanges: "<<s<<endl;
}

int main(){
    int n;
    cout<<"Enter Elements Number in arr[]: ";
    cin>>n;
    cout<<"\n";
    int arr[n];
    inputArray(arr,n,"arr");
    bubbleSort(arr,n);

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