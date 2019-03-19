#include<bits/stdc++.h>
using namespace std;
struct node
{
 int top;
 node* next;
};

node* push(int t)
{
 node* n=new node;
 n->top=t;
 n->next=NULL;
 return n;
}

void pop(node* start)
{
   node* pre=new node;
   node* i=new node;
 pre=start;
 i=pre->next;
 for(;i!=NULL;i=i->next)
   {
     if(i->next==NULL)
     {
      pre->next=NULL;
      break;
     }
    pre=pre->next;
   }

}

void traverse(node* start)
{
 //start=start->next;
 node* i=new node;
 i=start->next;
   // cout<<i->number<<endl;
 for(;i!=NULL;i=i->next)
 {
  cout<<i->top<<" ";
 }
}

int main()
{
 node* start=new node;
 node* topnode=new node;
 node* pre=new node;
 pre->next=topnode;
 topnode->next=NULL;
 start=topnode;
 
  while(true)
 {
  cout<<endl;
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
    topnode->next=push(t);
    topnode=topnode->next;
    pre=pre->next;
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
