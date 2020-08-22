#include<iostream>
#include<cstdlib>
#include<chrono>
#include <iomanip>
#include <ctime>
#include <ratio>
using namespace std;
using namespace std::chrono;

void copyArray(int original[],int cpy[],int n){
    for(int i=0;i<n;i++){
        cpy[i]=original[i];
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
    cout<<fixed<<std::setprecision(2)<<time_span.count()<<"\t\t ";
}

void selectionSort(int arr[],int n){
    //long double t1 = time(0)*1000;
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
    //long double t2 = time(0)*1000;
    //cout<<t2-t1<<"\t\t ";
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    duration<double, milli> time_span = (t2 - t1);
    cout<<fixed<<setprecision(2)<<time_span.count()<<"\t\t ";
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
    cout<<fixed<<setprecision(2)<<time_span.count()<<"\t\t ";
}

int main(){
    int ran1000[1000],ran2000[2000],ran4000[4000],ran8000[8000],ran16000[16000];
    int a1000[1000],a2000[2000],a4000[4000],a8000[8000],a16000[16000];

    initializeWithRandomNumbers(ran1000,1000);
    initializeWithRandomNumbers(ran2000,2000);
    initializeWithRandomNumbers(ran4000,4000);
    initializeWithRandomNumbers(ran8000,8000);
    initializeWithRandomNumbers(ran16000,16000);

    cout<<"\n\t\t\t\t\t\tNumber of Inputs\n"<<endl;\
    cout<<"-------------------------------------------------------------------------------------------------\n"<<endl;
    cout<<"\t\t\t 1000 \t\t 2000 \t\t 4000 \t\t 8000 \t\t 16000 \n"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------\n"<<endl;

    cout<<"Bubble Sort\t|\t ";
    copyArray(ran1000,a1000,1000);
    copyArray(ran2000,a2000,2000);
    copyArray(ran4000,a4000,4000);
    copyArray(ran8000,a8000,8000);
    copyArray(ran16000,a16000,16000);
    bubbleSort(a1000,1000);
    bubbleSort(a2000,2000);
    bubbleSort(a4000,4000);
    bubbleSort(a8000,8000);
    bubbleSort(a16000,16000);
    cout<<"\n\n";

    cout<<"Selection Sort\t|\t ";
    copyArray(ran1000,a1000,1000);
    copyArray(ran2000,a2000,2000);
    copyArray(ran4000,a4000,4000);
    copyArray(ran8000,a8000,8000);
    copyArray(ran16000,a16000,16000);
    selectionSort(a1000,1000);
    selectionSort(a2000,2000);
    selectionSort(a4000,4000);
    selectionSort(a8000,8000);
    selectionSort(a16000,16000);
    cout<<"\n\n";

    cout<<"Insertion Sort\t|\t ";
    copyArray(ran1000,a1000,1000);
    copyArray(ran2000,a2000,2000);
    copyArray(ran4000,a4000,4000);
    copyArray(ran8000,a8000,8000);
    copyArray(ran16000,a16000,16000);
    insertionSort(a1000,1000);
    insertionSort(a2000,2000);
    insertionSort(a4000,4000);
    insertionSort(a8000,8000);
    insertionSort(a16000,16000);
    cout<<"\n\n";

    return 0;
}



