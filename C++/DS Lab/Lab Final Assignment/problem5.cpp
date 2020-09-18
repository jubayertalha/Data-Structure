#include <iostream>
using namespace std;

    int item;
    struct Node* link;
};
class Stack{
    private:

    public:
        Stack(){
            top = NULL;
        }

    private:
        bool isEmpty(){
            return (top==NULL);
        }

    public:
        void push(int element){
            struct Node* new_node = new Node();

            new_node->item = element;
            new_node->link = top;
        }

        void pop(){
            top = top->link;
        }

        void topElement(){
            if(isEmpty()){
                cout<<"\n\nStack is Empty!!"<<endl;
                return;
            }
            cout<<"\n\nTop Element of the Stack: " << top->item << endl;
        }

        void show(){
            if(isEmpty()){
                cout<<"Stack is Empty!!"<<endl;
                return;
            }
            cout << "\n---------- STACK ELEMENTS ----------\n";
        }
};

int main()
{
    Stack stack;


    return 0;
}