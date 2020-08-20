#include<iostream>
#include<cstdlib>
#include<chrono>
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
        a[i] = rand() % 1000;
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
    duration<double, milli> time_span = (t2 - t1)*1000;
    cout<<time_span.count()<<"\t\t ";
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
    duration<double, milli> time_span = (t2 - t1)*1000;
    cout<<time_span.count()<<"\t\t ";
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
    duration<double, milli> time_span = (t2 - t1)*1000;
    cout<<time_span.count()<<"\t\t ";
}

int main(){
    int ran50[50],ran100[100],ran200[200],ran400[400],ran800[800];
    int a50[50],a100[100],a200[200],a400[400],a800[800];

    initializeWithRandomNumbers(ran50,50);
    initializeWithRandomNumbers(ran100,100);
    initializeWithRandomNumbers(ran200,200);
    initializeWithRandomNumbers(ran400,400);
    initializeWithRandomNumbers(ran800,800);

    cout<<"\t\t\t\t\t\tNumber of Inputs\n"<<endl;
    cout<<"\t\t\t 50 \t\t 100 \t\t 200 \t\t 400 \t\t 800 \n"<<endl;

    cout<<"Bubble Sort\t\t ";
    copyArray(ran50,a50,50);
    copyArray(ran100,a100,100);
    copyArray(ran200,a200,200);
    copyArray(ran400,a400,400);
    copyArray(ran800,a800,800);
    bubbleSort(a50,50);
    bubbleSort(a100,100);
    bubbleSort(a200,200);
    bubbleSort(a400,400);
    bubbleSort(a800,800);
    cout<<"\n\n";

    cout<<"Selection Sort\t\t ";
    copyArray(ran50,a50,50);
    copyArray(ran100,a100,100);
    copyArray(ran200,a200,200);
    copyArray(ran400,a400,400);
    copyArray(ran800,a800,800);
    selectionSort(a50,50);
    selectionSort(a100,100);
    selectionSort(a200,200);
    selectionSort(a400,400);
    selectionSort(a800,800);
    cout<<"\n\n";

    cout<<"Insertion Sort\t\t ";
    copyArray(ran50,a50,50);
    copyArray(ran100,a100,100);
    copyArray(ran200,a200,200);
    copyArray(ran400,a400,400);
    copyArray(ran800,a800,800);
    insertionSort(a50,50);
    insertionSort(a100,100);
    insertionSort(a200,200);
    insertionSort(a400,400);
    insertionSort(a800,800);
    cout<<"\n\n";

    return 0;
}



