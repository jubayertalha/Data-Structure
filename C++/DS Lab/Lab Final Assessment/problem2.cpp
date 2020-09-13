#include<iostream>
using namespace std;

void inputArray(char a[], char s,string ch);

void printArray(char a[], char s,string ch);

void bubbleSort(char arr[],int n){
    int steps = 0;
    bool flag = true;
    int i,j,k=0;

    for(i=0;i<n;i++){
        flag = true;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = false;
            }
            cout<<"STEP "<<steps++<<": ";
            printArray(arr,n,"");
        }
        if(flag) break;
    }
}

int main(){
    int n;
    cout<<"Enter Elements Number in arr[]: ";
    cin>>n;
    cout<<"\n";
    char arr[n];
    inputArray(arr,n,"arr");
    cout<<"Output (Bubble Sort): "<<endl;
    bubbleSort(arr,n);

    return 0;
}

void inputArray(char a[], char s,string ch){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

void printArray(char a[], char s,string ch){
    for(int i=0;i<s;i++){
        cout<<a[i]<<"  ";
    }
    cout<<"\n"<<endl;
}