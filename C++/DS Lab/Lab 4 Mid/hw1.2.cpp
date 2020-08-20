#include <iostream>
using namespace std;

template <class QueueType> class Queue{
    private:
        QueueType *queue;
        int front, rear, max;

    public:
        Queue(){
            front = -1;
            rear = -1;
            max = 10;
            queue = new QueueType[max];
        }

    private:
        bool isEmpty(){
            return ((front == -1) && (rear == -1));
        }

        bool isFull(){
            return (rear == max-1);
        }

    public:
        void enqueue(QueueType element){
            if(isFull()){
                cout<< "Queue is Full!!"<<endl;
                return;
            }
            if(isEmpty()) front++;
            rear++;
            queue[rear] = element;
            cout<< element <<" is inserted."<<endl;
        }

        void dequeue(){
             if(isEmpty()){
                cout<< "Queue is Empty!!"<<endl;
                return;
            }else if(front==rear) front = rear = -1;
            else front++;
            cout<<"Front element is removed."<<endl;
        }

        void frontElement(){
            if(isEmpty()){
                cout<<"\n\nQueue is Empty!!"<<endl;
                return;
            }
            cout<<"\n\nFront Element of the Queue: " << queue[front] << endl;
        }

        void rearElement(){
            if(isEmpty()){
                cout<<"\n\nQueue is Empty!!"<<endl;
                return;
            }
            cout<<"\n\nRear Element of the Queue: " << queue[rear] << endl;
        }

        void show(){
            if(isEmpty()){
                cout<<"Queue is Empty!!"<<endl;
                return;
            }
            cout << "\nQUEUE ELEMENTS: ";
            for(int i=front; i<=rear; i++) cout << queue[i] << " ";
            cout<<endl;
        }
};

int main()
{
    Queue<char> s1, s2;

    s1.enqueue('a');
    s2.enqueue('x');
    s1.enqueue('b');
    s2.enqueue('y');
    s1.enqueue('c');
    s2.enqueue('z');

    s1.frontElement();
    s1.rearElement();
    s1.show();

    s2.frontElement();
    s2.rearElement();
    s2.show();

    for(int i=0; i<3; i++) s1.dequeue();
    s1.frontElement();
    s1.rearElement();
    s1.show();

    for(int i=0; i<3; i++) s2.dequeue();
    s2.frontElement();
    s2.rearElement();
    s2.show();

    Queue<double> ds1, ds2;

    ds1.enqueue(1.1);
    ds2.enqueue(2.2);
    ds1.enqueue(3.3);
    ds2.enqueue(4.4);
    ds1.enqueue(5.5);
    ds2.enqueue(6.6);

    ds1.frontElement();
    ds1.rearElement();
    ds1.show();

    ds2.frontElement();
    ds2.rearElement();
    ds2.show();

    for(int i=0; i<3; i++) ds1.dequeue();
    ds1.frontElement();
    ds1.rearElement();
    ds1.show();

    for(int i=0; i<3; i++) ds2.dequeue();
    ds2.frontElement();
    ds2.rearElement();
    ds2.show();

    return 0;
}
