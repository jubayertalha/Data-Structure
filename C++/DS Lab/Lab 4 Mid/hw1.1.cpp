#include <iostream>
using namespace std;

template <class StackType> class Stack{
    private:
        StackType *stack;
        int top, max;

    public:
        Stack(){
            top = 0;
            max = 10;
            stack = new StackType[max];
        }

    private:
        bool isEmpty(){
            return (top==0);
        }

        bool isFull(){
            return top==max;
        }

    public:
        void push(StackType element){
            if(isFull()){
                cout<<"Stack is Full!!"<<endl;
                return;
            }
            stack[top] = element;
            top++;
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
    Stack<char> s1, s2;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    s1.topElement();
    s1.show();

    s2.topElement();
    s2.show();

    for(int i=0; i<3; i++) s1.pop();
    s1.topElement();
    s1.show();

    for(int i=0; i<3; i++) s2.pop();
    s2.topElement();
    s2.show();

    Stack<double> ds1, ds2;

    ds1.push(1.1);
    ds2.push(2.2);
    ds1.push(3.3);
    ds2.push(4.4);
    ds1.push(5.5);
    ds2.push(6.6);

    ds1.topElement();
    ds1.show();

    ds2.topElement();
    ds2.show();

    for(int i=0; i<3; i++) ds1.pop();
    ds1.topElement();
    ds1.show();

    for(int i=0; i<3; i++) ds2.pop();
    ds2.topElement();
    ds2.show();

    return 0;
}
