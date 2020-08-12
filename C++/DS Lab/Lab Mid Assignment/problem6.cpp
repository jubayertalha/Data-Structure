#include <iostream>
using namespace std;

class Stack{
    private:
        int *stack, top, max, maxV, minV;

    public:
        Stack(int size){
            top = 0;
            max = size;
            stack = new int[max];
        }
        ~Stack(){
            delete [] stack;
        }

    private:
        bool isEmpty(){
            return (top==0);
        }

        bool isFull(){
            return top==max;
        }

        void resize(int size = 10){
            int *tempStack = new int[size];
            for(int i=0;i<max;i++) tempStack[i] = stack[i];
            delete [] stack;
            stack = tempStack;
            max+=size;
        }

    public:
        void push(int element){
            if(isFull()) resize();
            if(isEmpty()){
                maxV = element;
                minV = element;
            }else{
                if(element<minV) minV = element;
                if(element>maxV) maxV = element;
            }
            stack[top++] = element;
        }

        void pop(){
            if(isEmpty()){
                cout<<"Stack is Empty!!"<<endl;
                return;
            }
            int t = topElement();
            if(t==maxV){
                for(int i=0;i<top-1;i++){
                    if(maxV>stack[i]) maxV = stack[i];
                }
            }
            if(t==minV){
                for(int i=0;i<top-1;i++){
                    if(minV<stack[i]) minV = stack[i];
                }
            }
            top--;
        }

        int topElement(){
            if(isEmpty()){
                cout<<"\n\nStack is Empty!!"<<endl;
                return 0;
            }
            cout<<"\n\nTop Element of the Stack: " << stack[top-1] << endl;
            return stack[top-1];
        }

        int getMax(){
            if(isEmpty()){
                cout<<"\n\nStack is Empty!!"<<endl;
                return 0;
            }
            return maxV;
        }

        int getMin(){
            if(isEmpty()){
                cout<<"\n\nStack is Empty!!"<<endl;
                return 0;
            }
            return minV;
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
    int t;
    cout<<"Enter your stack length: ";
    cin>>t;
    Stack stack(t);
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        stack.push(n);
    }

    cout<<"Max: "<<stack.getMax()<<endl;
    cout<<"Min: "<<stack.getMin()<<endl;

    return 0;
}
