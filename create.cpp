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
};

int main(){
    
    NODE *head;
    head = new NODE(10);
    cout<<head->data<<endl;
    cout<<head->next;    
}