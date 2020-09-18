#include<iostream>
using namespace std;

void inputArray(int a[], char s,string ch);

void printArray(int a[], char s,string ch);

void selectionSort(int arr[],int n){
    int steps = 0;
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1,l=1;j<n;j++,l++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min != i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }        cout<<"STEP "<<steps++<<": ";
        printArray(arr,n,"");
    }
}


int main(){
    int n;
    cout<<"Enter Elements Number in arr[]: ";
    cin>>n;
    cout<<"\n";
    int arr[n];
    inputArray(arr,n,"arr");
    cout<<"Output (Selection Sort): "<<endl;
    selectionSort(arr,n);

    return 0;
}

void inputArray(int a[], char s,string ch){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

void printArray(int a[], char s,string ch){
    for(int i=0;i<s;i++){
        cout<<a[i]<<"  ";
    }
    cout<<"\n"<<endl;
}