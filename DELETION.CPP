#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    int arr[5] = {1,2,3,4,5};
    node* head = NULL;
    node* tail = NULL;
    for(int i=0;i<5;i++){
        if(head==NULL){
            head =new node(arr[i]);
            tail =head;
        }
        else{ 
            tail->next=new node(arr[i]);;
            tail=tail->next;
        }
    }
    //print linked List
    node*temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    //deletion at first node
    //steps -> check if head!=null , make temp=head, update head to next node , delete temp
    // if(head==NULL){
    //     cout<<"ERROR";
    // }
    // else{
    //     node* temp1 = head;
    //     head = head->next;
    //     delete temp1;
    // }

    //deletion at end - 3cases ->case 1 >> if no node - error
    //case2 >> if one node - make temp = head , head = null , delete temp
    //case 3 >> last node - 2 pointer
    //steps -> make prev = null & curr = head , move curr to end by updating prev 
    // delete curr , prev->next = null

    // if(head==NULL){
    //     cout<<"ERROR"<<endl;
    // } 
    // else if(head->next == NULL){
    //     //only 1 node
    //     node *temp1 = head;
    //     head = NULL;
    //     delete temp1;
    // }
    // else{
    //     node*  prev= NULL;
    //     node* curr = head;

    //     while(curr->next !=NULL){
    //         prev = curr;
    //         curr = curr->next;
    //     }
    //     delete curr;
    //     prev->next = NULL;
    // }

    //DELETION at a particular node
    //steps ->Case 1 -> head = null >>error
    //case 2 -> delete first node - steps >> make temp=head ,head = head->next , delete temp
    //case3 -> delete xth node - steps >> make prev = null & curr= head , do x-- 
    //move curr to Xth node by updating prev , prev->next = curr->next , delete curr
    cout<<"Enter the Xth node to delete "<<endl;
    int x;
    cin>>x;

    if(head==NULL){
        cout<<"ERROR";
    } 
    else if(x==1){
        node *temp = head;
        head = head->next;
        delete temp;
    }
    else{
        node* prev = NULL;
        node* curr = head;
        x--;

        while(x--){
            prev = curr;
            curr= curr->next;
        } 
        prev->next = curr->next;//Important step
        delete curr;
        
    }

    //LL after deletion
    node*temp2 =head;
    while(temp2!=NULL){
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    cout<<endl;
}