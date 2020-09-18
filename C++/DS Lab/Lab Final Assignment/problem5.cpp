#include <iostream>
using namespace std;
struct Node{
    int item;
    struct Node* link;
};
class Stack{
    private:        struct Node* top;

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
            new_node->link = top;            top = new_node;
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
            cout << "\n---------- STACK ELEMENTS ----------\n";            struct Node* new_node = top;            while(new_node!=NULL){                cout << new_node->item << endl;                new_node = new_node->link;            }
        }
};

int main()
{
    Stack stack;
    stack.push(3);    stack.push(9);    stack.push(7);    stack.show();    stack.pop();    stack.pop();    stack.topElement();    stack.push(37);    stack.push(5);    stack.show();    stack.pop();    stack.topElement();

    return 0;
}
