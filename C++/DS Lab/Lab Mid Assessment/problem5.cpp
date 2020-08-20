#include <iostream>
using namespace std;

template <class StackType> class Stack{
    private:
        StackType *stack;
        int top, max;

    public:
        Stack(int len){
            top = 0;
            max = len;
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
        }

        void pop(){
            if(isEmpty()){
                cout<<"Stack is Empty!!"<<endl;
                return;
            }
            top--;
        }

        StackType topElement(){
            if(isEmpty()){
                cout<<"\n\nStack is Empty!!"<<endl;
                return (StackType)'0';
            }
            return stack[top-1];
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
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    int len = 0;
    while(s[len]!='\0') len++;

    Stack<char> s1(len);

    for(int i=0;i<len;i++){
        s1.push(s[i]);
    }

    for(int i=0;i<len;i++){
        s[i] = s1.topElement();
        s1.pop();
    }

    cout<<s<<endl;

    return 0;
}
