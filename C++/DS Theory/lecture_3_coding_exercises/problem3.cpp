#include<iostream>
#include<cstdlib>
#include<chrono>
#include<iomanip>
#include<cmath>
using namespace std;
using namespace std::chrono;

void copyArray(int original[],int cpy[],int n){
    for(int i=0;i<n;i++){
        cpy[i]=original[i];
    }
}

void inversArray(int a[],int n){
    for(int i=0,j=n;i<n/2;i++,j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

void initializeWithRandomNumbers(int a[],int n){
    for(int i=0;i<n;i++){
        a[i] = rand() % 20000;
    }
}

void bubbleSort(int arr[],int n){
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = false;
            }
        }
        if(flag) break;
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, milli> time_span = (t2 - t1);
    cout<<setw(3)<<setfill('0')<<llround(time_span.count())<<"  ";
}

void selectionSort(int arr[],int n){
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
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
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, milli> time_span = (t2 - t1);
    cout<<setw(3)<<setfill('0')<<llround(time_span.count())<<"  ";
}

void insertionSort(int arr[],int n){
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for(int i=1;i<n;i++){
        int num = arr[i];
        int j;
        for(j=i-1;j>=0&&num<arr[j];j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = num;
    }
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, milli> time_span = (t2 - t1);
    cout<<setw(3)<<setfill('0')<<llround(time_span.count())<<"  ";
}

int main(){
    int ran1000[1000],ran2000[2000],ran4000[4000],ran8000[8000],ran16000[16000];
    int a1000[1000],a2000[2000],a4000[4000],a8000[8000],a16000[16000];

    initializeWithRandomNumbers(ran1000,1000);
    initializeWithRandomNumbers(ran2000,2000);
    initializeWithRandomNumbers(ran4000,4000);
    initializeWithRandomNumbers(ran8000,8000);
    initializeWithRandomNumbers(ran16000,16000);

    cout<<"\n\t\t\t\t\t\tNumber of Inputs\n"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t\t\t1000 \t\t  2000 \t\t   4000\t\t     8000\t\t16000"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------\n"<<endl;

    cout<<"Bubble Sort\t|  ";
    copyArray(ran1000,a1000,1000);
    bubbleSort(a1000,1000);
    bubbleSort(a1000,1000);
    inversArray(a1000,1000);
    bubbleSort(a1000,1000);
    cout<<"|  ";

    copyArray(ran2000,a2000,2000);
    bubbleSort(a2000,2000);
    bubbleSort(a2000,2000);
    inversArray(a2000,2000);
    bubbleSort(a2000,2000);
    cout<<"|  ";

    copyArray(ran4000,a4000,4000);
    bubbleSort(a4000,4000);
    bubbleSort(a4000,4000);
    inversArray(a4000,4000);
    bubbleSort(a4000,4000);
    cout<<"|  ";

    copyArray(ran8000,a8000,8000);
    bubbleSort(a8000,8000);
    bubbleSort(a8000,8000);
    inversArray(a8000,8000);
    bubbleSort(a8000,8000);
    cout<<"|  ";

    copyArray(ran16000,a16000,16000);
    bubbleSort(a16000,16000);
    bubbleSort(a16000,16000);
    inversArray(a16000,16000);
    bubbleSort(a16000,16000);
    cout<<"|  ";
    cout<<"\n\n";

    cout<<"Selection Sort\t|  ";
    copyArray(ran1000,a1000,1000);
    selectionSort(a1000,1000);
    selectionSort(a1000,1000);
    inversArray(a1000,1000);
    selectionSort(a1000,1000);
    cout<<"|  ";

    copyArray(ran2000,a2000,2000);
    selectionSort(a2000,2000);
    selectionSort(a2000,2000);
    inversArray(a2000,2000);
    selectionSort(a2000,2000);
    cout<<"|  ";

    copyArray(ran4000,a4000,4000);
    selectionSort(a4000,4000);
    selectionSort(a4000,4000);
    inversArray(a4000,4000);
    selectionSort(a4000,4000);
    cout<<"|  ";

    copyArray(ran8000,a8000,8000);
    selectionSort(a8000,8000);
    selectionSort(a8000,8000);
    inversArray(a8000,8000);
    selectionSort(a8000,8000);
    cout<<"|  ";

    copyArray(ran16000,a16000,16000);
    selectionSort(a16000,16000);
    selectionSort(a16000,16000);
    inversArray(a16000,16000);
    selectionSort(a16000,16000);
    cout<<"|  ";
    cout<<"\n\n";

    cout<<"Insertion Sort\t|  ";
    copyArray(ran1000,a1000,1000);
    insertionSort(a1000,1000);
    insertionSort(a1000,1000);
    inversArray(a1000,1000);
    insertionSort(a1000,1000);
    cout<<"|  ";

    copyArray(ran2000,a2000,2000);
    insertionSort(a2000,2000);
    insertionSort(a2000,2000);
    inversArray(a2000,2000);
    insertionSort(a2000,2000);
    cout<<"|  ";

    copyArray(ran4000,a4000,4000);
    insertionSort(a4000,4000);
    insertionSort(a4000,4000);
    inversArray(a4000,4000);
    insertionSort(a4000,4000);
    cout<<"|  ";

    copyArray(ran8000,a8000,8000);
    insertionSort(a8000,8000);
    insertionSort(a8000,8000);
    inversArray(a8000,8000);
    insertionSort(a8000,8000);
    cout<<"|  ";

    copyArray(ran16000,a16000,16000);
    insertionSort(a16000,16000);
    insertionSort(a16000,16000);
    inversArray(a16000,16000);
    insertionSort(a16000,16000);
    cout<<"|  ";
    cout<<"\n\n\n";    cout<<"*First one is Avg\n*Second one is Best\n*Third one is Worst\n";

    return 0;
}



