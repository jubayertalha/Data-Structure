#include <iostream>
using namespace std;struct Node{
    int item;
    struct Node* link;
};

class Queue{
    private:
        struct Node* front;        struct Node* rear;

    public:
        Queue(){
            front = NULL;            rear = NULL;
        }

    private:
        bool isEmpty(){
            return ((front == NULL) && (rear == NULL));
        }

    public:
        void enqueue(int element){            struct Node* new_node = new Node();            new_node->item = element;            new_node->link = NULL;
            if(isEmpty()){                front = new_node;                rear = new_node;                return;            }            rear->link = new_node;            rear = new_node;
        }

        void dequeue(){
            if(isEmpty()){
                cout<< "Queue is Empty!!"<<endl;
                return;
            }            front = front->link;            if(front==NULL) rear = NULL;
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
            cout << "\nQUEUE ELEMENTS: ";            struct Node* new_node = front;            while(new_node!=NULL){                cout << new_node->item << " ";                new_node = new_node->link;            }        }
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
