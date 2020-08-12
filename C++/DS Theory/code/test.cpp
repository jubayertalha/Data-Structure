#include<iostream>
using namespace std;

char* myfunc(char *ptr){
    ptr+=3;
    return (ptr);
}

int main(){
    char *x,*y;
    x = "EXAMVEDA";
    y=myfunc(x);
    cout<<"y="<<y;
    return 0;
}

