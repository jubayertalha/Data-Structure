#include<iostream>
using namespace std;

struct student{
    int id;
    int credit;
    double cgpa;
};

int main(){
    student students[10];

    cout<<"Enter Students Records: \n"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Enter Student Record "<<i+1<<": "<<endl;
        bool isUnique = true;
        while(isUnique){
            cout<<"Enter Student ID: ";
            cin>>students[i].id;
            isUnique = false;
            for(int j=0;j<i;j++){
                if(students[j].id==students[i].id){
                    cout<<"This ID is already exist...Try Again"<<endl;
                    isUnique = true;
                    break;
                }
            }
        }
        cout<<"Enter Student Credits: ";
        cin>>students[i].credit;
        cout<<"Enter Student CGPA: ";
        cin>>students[i].cgpa;
        cout<<endl;
    }

    cout<<"Printing all the student's ID whose CGPA is more than 3.75 : \n"<<endl;
    for(int i=0;i<10;i++) if(students[i].cgpa>3.75) cout<<"Student ID: "<<students[i].id<<endl;

    cout<<"\nPrinting all the student's ID who has completed more than 50 credits : \n"<<endl;
    for(int i=0;i<10;i++) if(students[i].credit>50) cout<<"Student ID: "<<students[i].id<<endl;

    return 0;
}
