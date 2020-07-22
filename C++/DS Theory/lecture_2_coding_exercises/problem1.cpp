#include<iostream>
using namespace std;

struct studentStruct{
    string firstName;
    string lastName;
    string dept;
    double cgpa;
    int year;
};

int main(){
    int n = 10;
    studentStruct students[n];

    cout<<"Enter Students Records: \n"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter Student Record "<<i+1<<": "<<endl;
        cout<<"Enter Student First Name: ";
        cin>>students[i].firstName;
        cout<<"Enter Student Last Name: ";
        cin>>students[i].lastName;
        cout<<"Enter Student Dept: ";
        cin>>students[i].dept;
        cout<<"Enter Student CGPA: ";
        cin>>students[i].cgpa;
        cout<<"Enter Student Birth Year: ";
        cin>>students[i].year;
        cout<<endl;
    }

    cout<<"Printing all students info: "<<endl;
    bool flag;
    for(int i=0;i<n;i++){
        flag = true;
        for(int j=0;j<n-i-1;j++){
            if(students[j].cgpa>students[j+1].cgpa){
                studentStruct temp = students[j+1];
                students[j+1] = students[j];
                students[j] = temp;
                flag = false;
            }
        }
        if(flag){
            break;
        }
    }

    cout<<"Printing Students Info:\n"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Student "<<i+1<<" Info: "<<endl;
        cout<<"First Name: "<<students[i].firstName<<endl;
        cout<<"Last Name: "<<students[i].lastName<<endl;
        cout<<"Dept: "<<students[i].dept<<endl;
        cout<<"CGPA: "<<students[i].cgpa<<endl;
        cout<<"Birth Year: "<<students[i].year<<"\n"<<endl;
    }

    return 0;
}
