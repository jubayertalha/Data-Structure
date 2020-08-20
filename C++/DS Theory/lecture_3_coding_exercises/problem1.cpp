#include<iostream>
using namespace std;

void inputArray(int a[], int s,string ch);

void printArray(int a[],int s,string ch);

void copyArray(int arr[],int a[],int n);

void bubbleSort(int arr[],int n){
    int steps = 0;
    bool flag = true;
    int i,j,k=0;

    cout<<"\n\n---------------Bubble Sort---------------\n\n";

    printArray(arr,n,"Unsorted arr");

    for(i=0;i<n;i++){
        flag = true;
        cout<<"PASS: "<<i+1;
        for(j=0;j<n-i-1;j++){
            bool isNotSwapped = true;
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = false;
                isNotSwapped = false;
                k++;
            }
            steps++;
            cout<<"\tSTEP: "<<j+1<<endl;
            if(isNotSwapped){
                cout<<"\tarr["<<j<<"]>arr["<<j+1<<"] = "<<arr[j]<<">"<<arr[j+1]<<" = "<<std::boolalpha<<(!isNotSwapped)<<endl;
                cout<<"\tNothing Swapped"<<endl;
            }else{
                cout<<"\tarr["<<j<<"]>arr["<<j+1<<"] = "<<arr[j+1]<<">"<<arr[j]<<" = "<<std::boolalpha<<(!isNotSwapped)<<endl;
                cout<<"\tSwapped "<<arr[j]<<" & "<<arr[j+1]<<endl;
            }
            printArray(arr,n,"\tCurrent arr");
        }
        if(flag) break;
    }

    cout<<"\nFinal Result:"<<endl;
    cout<<"Total Comparisons: "<<steps<<endl;
    cout<<"Total Swapped: "<<k<<endl;
    cout<<"Worst Complexity : O(n^2)"<<endl;
    printArray(arr,n,"Sorted arr");
}

void selectionSort(int arr[],int n){
    int steps = 0,k = 0;

    cout<<"\n\n---------------Selection Sort---------------\n\n";

    printArray(arr,n,"Unsorted arr");

    for(int i=0;i<n-1;i++){
        int min = i;
        cout<<"Pass: "<<i+1<<"\tmin=i="<<min<<"\tarr[min] = "<<arr[min]<<endl;
        for(int j=i+1,l=1;j<n;j++,l++){
            cout<<"\tStep: "<<l<<endl;
            cout<<"\tarr[min]>arr[j] = arr["<<min<<"]>arr["<<j<<"] = "<<arr[min]<<">"<<arr[j]<<" = "<<std::boolalpha<<(arr[min]>arr[j])<<endl;
            if(arr[min]>arr[j]){
                min = j;
                cout<<"\tmin changed to arr[min] = arr["<<min<<"] = "<<arr[min]<<"\n"<<endl;
            }else cout<<"\tmin is not changed\n"<<endl;
            steps++;
        }
        if(min != i){
            cout<<"Swapped between arr[i]=arr["<<i<<"]="<<arr[i]<<" & arr[min]=arr["<<min<<"]="<<arr[min]<<endl;
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
            k++;
        } else cout<<"\nIs not swapped as arr[i]=arr["<<i<<"]="<<arr[i]<<" = arr[min]=arr["<<min<<"]="<<arr[min]<<endl;
        printArray(arr,n,"Current arr");
    }
    cout<<"\nFinal Result:"<<endl;
    cout<<"Total Comparisons: "<<steps<<endl;
    cout<<"Total Swapped: "<<k<<endl;
    cout<<"Worst Complexity : O(n^2)"<<endl;
    printArray(arr,n,"Sorted arr");
}

void insertionSort(int arr[],int n){
    int steps = 0,k = 0;

    cout<<"\n\n---------------Insertion Sort---------------\n\n";

    printArray(arr,n,"Unsorted arr");

    for(int i=1;i<n;i++){
        int num = arr[i];
        int j,l;
        cout<<"Pass: "<<i<<"\tnum = arr[i] = arr["<<i<<"] = "<<arr[i]<<endl;
        for(j=i-1,l=0;j>=0;j--,l++){
            steps++;
            cout<<"\tStep: "<<l<<endl;
            cout<<"\tnum<arr[j] = "<<num<<"<arr["<<j<<"] = "<<num<<"<"<<arr[j]<<" = "<<std::boolalpha<<(num<arr[j])<<endl;
            if(num<arr[j]){
                cout<<"\tarr[j]=arr["<<j<<"]="<<arr[j]<<" shifted to arr[j+1]=arr["<<j+1<<"]"<<endl;
                arr[j+1] = arr[j];
                k++;
                printArray(arr,n,"\tCurrent arr");
                cout<<endl;
            }else{
                cout<<"\tno shifting\n"<<endl;
                break;
            }
        }
        cout<<"num placed to arr[j+1] = arr["<<j+1<<"] = "<<num<<endl;
        arr[j+1] = num;
        printArray(arr,n,"Current arr");
    }

    cout<<"\nFinal Result:"<<endl;
    cout<<"Total Comparisons: "<<steps<<endl;
    cout<<"Total Swapped: "<<k<<endl;
    cout<<"Best Complexity : O(n)"<<endl;
    cout<<"Worst Complexity : O(n^2)"<<endl;
    printArray(arr,n,"Sorted arr");
}

int main(){
    int n;
    cout<<"Enter Elements Number in arr[]: ";
    cin>>n;
    cout<<"\n";
    int arr[n];
    inputArray(arr,n,"arr");
    int a[n];

    copyArray(arr,a,n);
    bubbleSort(a,n);

    copyArray(arr,a,n);
    selectionSort(a,n);

    copyArray(arr,a,n);
    insertionSort(a,n);

    return 0;
}

void inputArray(int a[], int s,string ch){
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

void copyArray(int arr[],int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=arr[i];
    }
}



