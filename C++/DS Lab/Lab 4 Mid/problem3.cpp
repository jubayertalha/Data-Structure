#include <iostream>
using namespace std;

class Queue{
    private:
        int queue[10], front, rear, max;

    public:
        Queue(){
            front = -1;
            rear = -1;
            max = 10;
        }

    private:
        bool isEmpty(){
            return ((front == -1) && (rear == -1));
        }

        bool isFull(){
            return (rear == max-1);
        }

    public:
        void enqueue(int element){
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
    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.enqueue(6);

    queue.frontElement();
    queue.rearElement();
    queue.show();

    queue.enqueue(7);
    queue.enqueue(8);
    queue.enqueue(9);
    queue.enqueue(10);
    queue.enqueue(12);
    queue.enqueue(13);

    queue.frontElement();
    queue.rearElement();
    queue.show();

    queue.dequeue();
    queue.dequeue();

    queue.frontElement();
    queue.rearElement();
    queue.show();

    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();

    queue.frontElement();
    queue.rearElement();
    queue.show();

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    queue.frontElement();
    queue.rearElement();
    queue.show();

    return 0;
}
