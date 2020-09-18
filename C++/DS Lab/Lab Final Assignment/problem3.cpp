#include<iostream>
using namespace std;

void inputArray(int a[], char s,string ch);

void printArray(int a[], char s,string ch);

void insertionSort(int arr[],int n){
    int steps = 0;
    for(int i=1;i<n;i++){
        int num = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(num<arr[j]){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = num;        cout<<"STEP "<<steps++<<": ";
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
    cout<<"Output (Insertion Sort): "<<endl;
    insertionSort(arr,n);

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