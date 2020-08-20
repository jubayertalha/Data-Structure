#include<iostream>
using namespace std;


int main() {
    int i = 0, x = 0;
    do {
        if (i % 5 == 0) {
             cout<<x;
             x++;
             }
       ++i;
    } while(i < 10);

    cout<<x;
    return 0;
}

