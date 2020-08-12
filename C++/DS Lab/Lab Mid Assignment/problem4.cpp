#include<iostream>
using namespace std;

class Student{
    private:
        int id;
        string name;
        double cgpa;
    public:
        void setId(int id){
            this->id = id;
        }
        int getId(){
            return id;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        void setCgpa(int cgpa){
            this->cgpa = cgpa;
        }
        double getCgpa(){
            return cgpa;
        }
        void show(){
            cout<<"Student ID: "<<id<<endl;
            cout<<"Student Name: "<<name<<endl;
            cout<<"CGPA: "<<cgpa<<endl;
        }
};

int main(){
    int s;
    cout<<"Enter total student numbers: ";
    cin>>s;
    Student students[s];

    cout<<"\nEnter Students Records: \n"<<endl;
    for(int i=0;i<s;i++){
        cout<<"Enter Student Record "<<i+1<<": "<<endl;
        cout<<"Enter Student Name: ";
        string name;
        cin.ignore();
        getline(cin, name);
        students[i].setName(name);
        bool isUnique = true;
        while(isUnique){
            cout<<"Enter Student ID: ";
            int id;
            cin>>id;
            students[i].setId(id);
            isUnique = false;
            for(int j=0;j<i;j++){
                if(students[j].getId()==students[i].getId()){
                    cout<<"This ID is already exist...Try Again"<<endl;
                    isUnique = true;
                    break;
                }
            }
        }
        bool isValid = false;
        double cgpa;
        while(!isValid){
            cout<<"Enter Student CGPA: ";
            cin>>cgpa;
            if(cgpa>=0&&cgpa<=4) isValid = true;
            else cout<<"CGPA is not valid...Try Again"<<endl;
        }
        students[i].setCgpa(cgpa);
        cout<<endl;
    }

    cout<<"All Student Records:\n"<<endl;
    for(int i=0;i<s;i++){
        cout<<"Records of Student "<<i+1<<":"<<endl;
        students[i].show();
        cout<<endl;
    }

    return 0;
}
