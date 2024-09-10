#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int value){
        data = value;
        next = NULL;
    }
};
//node at end using recusion
node *createLL(int arr[] , int index, int size){
    if(index==size){
        return NULL;
    }
    node *temp = new node(arr[index]);
    temp->next=createLL(arr, index+1,size);
    return temp;
}

int main(){
    // node *head = new node(10);
    // cout<<head->data<<endl;

    //Insertion at end by basic (Have more time complexity)
    //steps -> Create tail ,Reach at the last node , create a node , link it
    // node *tail = head;
    // while(tail->next!=NULL){
    //     tail = tail->next;
    // }
    // node *temp = new node(20);
    // tail->next =temp;
    // tail=temp;
    // cout<<temp->data<<endl;

    //OPTIMised WAY to insert at end
    //Steps - Create tail = head , check if head==null , else create new node and assign its value to 
    //tail ka next and then update the tail
    // node *head = NULL;
    // node *tail = NULL;
    // int arr[3]={20,30,40};
    // for(int i=0;i<3;i++){
    //     if(head==NULL){
    //         head= new node(arr[i]);
    //         tail=head;
    //     }
    //     else{
    //         tail->next = new node(arr[i]);
    //         tail = tail->next;
    //     }
    // }
    node*head = NULL;
    int arr[3]={1,2,3};
    head = createLL(arr,0,3);

    //Insert at middle
    //steps -> Get x and val ,make temp = head , move temp pointer to Xth node , create new node
    // connect forward node , connect backward node
    cout<<"Enter the value of X and value"<<endl;
    int x,val;
    cin>>x>>val;

    node*temp1 = head;
    x--;//Bcoz one node is used 

    while(x--){
        temp1=temp1->next;
    }
    node *temp2 = new node(val);
    temp2->next=temp1->next;//Forward node connected
    temp1->next=temp2;//Backward node connected

    //printing LL
    node *temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}