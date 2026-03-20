#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
int main(){
    //2,4,6,3
    Node *head=NULL;
    Node *Tail =NULL;
    int a[]={2,4,6,8,10};
    for(int i=0;i<5;i++){
    if(head==NULL){
        head=new Node(a[i]);
        Tail=head;
    }
    else{
   Tail->next=new Node(a[i]);
    Tail=Tail->next;
    }
}
Node *t;
t=head;
while(t){
    cout<<t->data<<endl;
    t=t->next;
}
return 0;
}