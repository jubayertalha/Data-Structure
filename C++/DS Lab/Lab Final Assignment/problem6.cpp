#include <iostream>
using namespace std;
    int item;
    struct Node* link;
};

class Queue{
    private:
        struct Node* front;

    public:
        Queue(){
            front = NULL;
        }

    private:
        bool isEmpty(){
            return ((front == NULL) && (rear == NULL));
        }

    public:
        void enqueue(int element){
            if(isEmpty()){
        }

        void dequeue(){
            if(isEmpty()){
                cout<< "Queue is Empty!!"<<endl;
                return;
            }
        }

        void frontElement(){
            if(isEmpty()){
                cout<<"\n\nQueue is Empty!!"<<endl;
                return;
            }
            cout<<"\n\nFront Element of the Queue: " << front->item << endl;
        }

        void rearElement(){
            if(isEmpty()){
                cout<<"\n\nQueue is Empty!!"<<endl;
                return;
            }
            cout<<"\nRear Element of the Queue: " << rear->item << endl;
        }

        void show(){
            if(isEmpty()){
                cout<<"Queue is Empty!!"<<endl;
                return;
            }
            cout << "\nQUEUE ELEMENTS: ";
};

int main()
{
    Queue queue;

    queue.enqueue(3);
    queue.enqueue(9);
    queue.enqueue(7);
    queue.show();
    queue.dequeue();
    queue.frontElement();
    queue.enqueue(37);
    queue.enqueue(5);
    queue.show();
    queue.dequeue();
    queue.frontElement();
    queue.rearElement();

    return 0;
}