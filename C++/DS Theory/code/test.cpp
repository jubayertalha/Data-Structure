#include<iostream>
using namespace std;

void print(int i){
    cout<<i<<endl;
    i--;
    if(i>0) print(i);
    else return;
}

int main() {
    print(100);
    return 0;
}

