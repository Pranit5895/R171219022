#include<iostream>
#include<process>                 //important header file 
using namespae std;
struct node                       //declared node structure
{
  int item;
  node*next;
}*top,*newptr,*save,*ptr;
node* create_node(int n)
{
ptr=new node;
ptr->item=n;
ptr->next=NULL;
return ptr;
}

void push(node*np)                 // push function for inserting values
{
if(top==NULL)
top=np;
else
{
save=top;
top=np;
np->next=save;
}
}

void pop()                    //function for deleting values
{
if(top==NULL)
  cout<<"UNDERFLOW!!\n";
  else
   {
     ptr=top;
     top=top->next;
     delete ptr;
   }
}




void display(node*np)          //function for displaying contents
{
   while(np!=NULL)
   {
    cout<<np->item<<endl;
    np=np->next;
   }
}
void main()                       //main function 
{
  top=NULL;
  int item1;
  int ch;
do
  {
   clrscr();
   cout<<"\t\t\tMENU\n";	//Menu
   cout<<"\t1.PUSHING\n";
   cout<<"\t2.POPPING\n";
   cout<<"\t3.DISPLAY\n";
   cout<<"\t4.EXIT\n";
   cout<<"Enter your choice(1-4)...\n";
   cin>>ch;
}

