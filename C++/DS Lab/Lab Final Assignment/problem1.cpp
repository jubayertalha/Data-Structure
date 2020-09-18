#include<iostream>
using namespace std;

void inputArray(int a[], char s,string ch);

void printArray(int a[], char s,string ch);

void bubbleSort(int arr[],int n){
    int steps = 0;
    bool flag = true;
    int i,j;

    for(i=0;i<n;i++){
        flag = true;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = false;
            }
        }
        if(flag) break;        cout<<"STEP "<<steps++<<": ";
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
    cout<<"Output (Bubble Sort): "<<endl;
    bubbleSort(arr,n);

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