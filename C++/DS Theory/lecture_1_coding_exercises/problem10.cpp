#include<iostream>
using namespace std;

void inputArray(int a[], int s,char ch[]){
    cout<<"Enter "<<s<<" Elements into "<<ch<<"[]: "<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter "<<i<<" index Element: ";
        cin>>a[i];
    }
    cout<<"\n";
}

void printArray(int a[],int s,char ch[]){
    cout<<"Printing "<<ch<<"[]:"<<endl;
    for(int i=0;i<s;i++){
        cout<<ch<<"["<<i<<"] = "<<a[i]<<endl;
    }
    cout<<"\n";
}

int main(){
    int s;
    cout<<"Enter Elements Number in a[]: ";
    cin>>s;
    cout<<"\n";
    int a[s];
    inputArray(a,s,"a");
    printArray(a,s,"a");

    while(1){
        int option;
        cout<<"Enter 0 to Delete an Element or 1 to Exit"<<endl;
        cout<<"Option: ";
        cin>>option;
        cout<<"\n";
        if(option==0){
            if(s!=0){
                int element;
                cout<<"Enter Index of the Element you want to be Deleted: ";
                cin>>element;
                if(element<s&&element>=0){
                    for(int i=element;i<s;i++){
                        a[i] = a[i+1];
                    }
                    s-=1;
                    cout<<"\nDeleted\n"<<endl;
                    printArray(a,s,"a");
                }else{
                    cout<<"\nIndex must be between "<<0<<" to "<<s-1<<"\n"<<endl;
                }
            }else{
                cout<<"There is no Element to be Deleted\n"<<endl;
            }
        }else if(option==1){
            cout<<"Exited"<<endl;
            break;
        }else{
            cout<<"Invalid Option\n"<<endl;
        }
    }

    return 0;
}



