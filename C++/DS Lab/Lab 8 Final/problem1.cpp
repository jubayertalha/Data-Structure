#include<iostream>
using namespace std;

void printArray(int a[],int s,string ch);
void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag = true;
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = false;
            }
        }
        if(flag) break;
    }
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