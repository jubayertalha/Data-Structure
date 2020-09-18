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

bool searchList(struct Node* node, int item){    if(node==NULL) return false;    else if(node->item==item) return true;    searchList(node->next,item);
}

int main(){
    cout<<"Input(Enter -1 to end):\nLinked list: ";    int v = 0;    while(v!=-1){      cin>>v;      if(v!=-1) insertAtEnd(v);    }

    cout<<"\nInput Searching Item: ";    int item;    cin>>item;    if(searchList(head,item)) cout<<"\nOutput:\nFound !!"<<endl;    else cout<<"\nOutput:\nNot Found !!"<<endl;    cout<<endl;

    return 0;
}