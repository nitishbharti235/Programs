#include<bits/stdc++.h>
using namespace std;
struct node
{
 int last;
 node* next;
};

node* push(int t)
{
 node* n=new node;
 n->last=t;
 n->next=NULL;
 return n;
}

void pop(node* start)
{
 node* n=new node;
 n=start->next;
 start->next=n->next;
}

void traverse(node* start)
{
 //start=start->next;
 node* i=new node;
 i=start->next;
   // cout<<i->number<<endl;
 for(;i!=NULL;i=i->next)
 {
  cout<<i->last<<" ";
 }
}

int main()
{
 node* start=new node;
 node* lastnode=new node;
 start=lastnode;
 
  while(true)
 {
  cout<<endl<<endl;
  cout<<"1 for push a element"<<endl;
  cout<<"2 for pop a element"<<endl;
  cout<<"3 for stack showing"<<endl;
  cout<<"4 for exit"<<endl;
  int x,t;
  cin>>x;
  switch(x)
  {
   case 1:
    cout<<"give a number: ";
    cin>>t;
    lastnode->next=push(t);
    lastnode=lastnode->next;
    break;

   case 2:
    pop(start);
    break;

   case 3:
     traverse(start);
     break;

   case 4:
     return 0;
  }
}
}
