#include <iostream>
using namespace std;

struct Node{
    int item;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtEnd(int data){
    struct Node* new_node = new Node();
    struct Node* last = head;

    new_node->item = data;
    new_node->next = NULL;

    if (head == NULL){
      head = new_node;
    }else{
        while(last->next != NULL){
          last = last->next;
        }
        last->next = new_node;
    }
}

bool searchList(struct Node* node, int item){
}

int main(){
    cout<<"Input(Enter -1 to end):\nLinked list: ";

    cout<<"\nInput Searching Item: ";

    return 0;
}