#include <iostream>
using namespace std;

class Stack{
    private:
        int stack[10], top, max;

    public:
        Stack(){
            top = 0;
            max = 10;
        }

    private:
        bool isEmpty(){
            return (top==0);
        }

        bool isFull(){
            return top==max;
        }

    public:
        void push(int element){
            if(isFull()){
                cout<<"Stack is Full!!"<<endl;
                return;
            }
            stack[top++] = element;
            cout<<element<<" is pushed."<<endl;
        }

        void pop(){
            if(isEmpty()){
                cout<<"Stack is Empty!!"<<endl;
                return;
            }
            top--;
            cout<<"Top element is popped."<<endl;
        }

        void topElement(){
            if(isEmpty()){
                cout<<"\n\nStack is Empty!!"<<endl;
                return;
            }
            cout<<"\n\nTop Element of the Stack: " << stack[top-1] << endl;
        }

        void show(){
            if(isEmpty()){
                cout<<"Stack is Empty!!"<<endl;
                return;
            }
            cout << "\n---------- STACK ELEMENTS ----------\n";
            for(int i=top-1; i>=0; i--) cout << stack[i] << endl;
        }
};

int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);

    stack.topElement();
    stack.show();

    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);
    stack.push(11);
    stack.push(12);

    stack.topElement();
    stack.show();

    stack.pop();
    stack.pop();

    stack.topElement();
    stack.show();

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    stack.topElement();
    stack.show();

    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.topElement();
    stack.show();

    return 0;
}
