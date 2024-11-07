#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;};

struct node*TOP=NULL;

void push(){
struct node*newnode,*ptr;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data:");
scanf("%d",&newnode->data);
newnode->next=NULL;

if(TOP==NULL)
TOP=newnode;
else{
ptr=TOP;
newnode->next=TOP;
TOP=newnode;}
}

void pop(){
struct node*ptr;
if(TOP==NULL){
printf("stack is empty,deletion is not possible");
}
else{
ptr=TOP;
TOP=TOP->next;
printf("deleted item is %d",ptr->data);
free(ptr);
}
}
void display(){
struct node*ptr;
if(TOP==NULL)
{printf("stack empty");}
else{
ptr=TOP;
while(ptr!=NULL){
printf("%d->",ptr->data);
ptr=ptr->next;
}
printf("NULL");
}
}

void main(){
int c;
while(1){
printf("1.push\t2.pop\t3.display\t4.exit\t");
printf("enter the choice:");
scanf("%d",&c);
switch(c){
case 1:
   push();
   break;
   
case 2:
  pop();
  break;
case 3:
  display();
  break;
 case 4:
   exit(0);
   break;
default:
printf("wrong entry");
      
   }}}

