#include <iostream>
using namespace std;

class Queue{
    private:
        int *queue, front, rear, max;

    public:
        Queue(int size){
            front = -1;
            rear = -1;
            max = size;
            queue = new int[max];
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
            if(isEmpty()) front++;
            rear++;
            for(int i=front;i<=rear;i++){
                if(rear==i) queue[i] = element;
                else if(element>queue[i]){
                    int t = queue[i];
                    queue[i] = element;
                    element = t;
                }
            }
        }

        void dequeue(){
             if(isEmpty()){
                cout<< "Queue is Empty!!"<<endl;
                return;
            }else if(front==rear) front = rear = -1;
            else front++;
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
            cout << "Priority QUEUE: ";
            for(int i=front; i<=rear; i++) cout << queue[i] << " ";
            cout<<endl;
        }
};

int main()
{
    int n;
    cout<<"How many number do you want to enter: ";
    cin>>n;

    Queue queue(n);

    for(int i=0;i<n;i++){
        int t;
        cout<<"\nEnter Number: ";
        cin>>t;
        queue.enqueue(t);
        queue.show();
    }

    return 0;
}
