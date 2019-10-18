//The following node structure 

typedef struct slnode 
{
  int data;		// data element
  struct slnode* next;	// address of next node (if present)	
} SINODE;		// SINODE represents a node of [S]ingle linked list of [I]ntegers

#include<stdio.h>
#include<stdlib.h>
#include<error.h>
SINODE* sin_create(int data)
{
  struct slnode* temp;
  temp=(struct slnode*)malloc(sizeof(struct slnode*)); // Allocating memory 
  temp->data=data;// Storing the data
  temp->next=NULL;       
  if (temp==NULL) // Checking if the memory is allocated or not
  {
    
    return 0; // Returns the error
  }
  else
  {
    return temp;  //returns address of the new node
  }
  
}

/* sin_add(): Adds a node at the end of existing list.
 */
void sin_add(SINODE** head, SINODE* new_node)
{                                 
  struct slnode* temp,*end_node;
  temp=*head;
  end_node=new_node;
  if (temp==NULL)
  {
    *head=new_node;        
  }
else
  {
    while (temp->next!=NULL)
    {
        temp=temp->next; // Linkng two nodes at the end
    }
    temp->next=new_node;//linked with previous node
    printf("Node is added at the end");
  }
}