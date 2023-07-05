   #include<iostream>
   using namespace std;

class node{
    public:
    int data;
    node* next; 
     node(int data){
      this->data=data;
      this->next=NULL;
    }

};

//  void insertAtHead(node* &head,int d){
//    node* temp=new node(d);
//    temp->next=head;
//    head=temp;
//  }

 void print(node* &head){
   node* temp=head;
   while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
   }
 }

//  void insertAtTail(node* &tail,int d){
//    node* temp=new node(d);
//    tail->next=temp;
//    tail=tail->next;
//  }

 void insertAtPosition(node* &head,int d,int position){
   node* temp=head;
   int cnt=1;
   while(cnt<position-1){
      temp=temp->next;

   }

   node* nodeToInsert=new node(d);
   nodeToInsert->next=temp->next;
   temp->next=nodeToInsert;

   

 }




   int main()
   {

   //  node* node1=new node(12);
   //  node* tail=node1;                  // head pointed to node1
   //  print(tail);
   //  insertAtTail(tail,20);
   //  print(tail);
   //  insertAtHead(head,23);
   //  print(head);



    
   
    return 0;
   }