#include<iostream>
using namespace std;

class NODE{
    public:
    int data;
    NODE *next;

    //constructor
    NODE(int value){
        data = value;
        next = NULL;
    }
    NODE(){

    }
};

int main(){
    //dma
    // NODE *head;
    // head = new NODE(10);
    //At Starting - 1) Create the node 2)point temp's next to head 3)head=temp;
    // NODE *temp;
    // temp = new NODE(20);
    // temp->next=head;
    // head=temp;
    // cout<<head->data;

    //ARRAY to LL
    NODE *head = NULL;
    int arr[5]= {1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(head == NULL){
            head = new NODE(arr[i]);
        }
        else{
            NODE *temp;
            temp = new NODE(arr[i]);
            temp->next=head;
            head=temp;
        }
    }
    //Traversing the LL
    NODE *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}