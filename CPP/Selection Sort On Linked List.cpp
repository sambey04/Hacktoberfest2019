#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
void insert_data(struct Node**,int);
void show_data(struct Node*);
void selection_sort(struct Node*);

void insert_data(struct Node**root,int value)
{
    struct Node*temp=NULL,*new_node=(struct Node*)malloc(sizeof(struct Node));
    if(new_node)
    {  
        new_node->data=value;
        new_node->next=NULL;
        if(*root==NULL)
        {
            *root=new_node;
        }
        else
        {
            temp=*root;
            while(temp->next)
            {
                temp=temp->next;  
            }
            temp->next=new_node;    
        }        
    }
    else
    {
        printf("\n Memory overflow please try again..!");
    }
}

void show_data(struct Node*temp)
{
    if(temp==NULL)
    {
        printf("Empty linked List\n");
    }
    else
    {
        printf("linked list :");
        while(temp)
        {
            printf("%d  ",temp->data);
            temp=temp->next;
        }
    }
}

void selection_sort(struct Node*temp)
{
    struct Node*sort_node=NULL,*help=NULL;
    int sort_value;
    while(temp)
    {
        sort_node=temp;
        help=temp->next;
        while(help)
        {
            if(help->data<sort_node->data)
            {
                sort_node=help;
            }
            help=help->next;
        }
        if(sort_node!=temp)
        {
            sort_value=sort_node->data;
            sort_node->data=temp->data;
            temp->data=sort_value;
        }
        temp=temp->next;
    }
}

int main()
{
    struct Node*root=NULL;
    insert_data(&root,23);
    insert_data(&root,53);
    insert_data(&root,21);
    insert_data(&root,1);
    insert_data(&root,46);
    insert_data(&root,73);
    insert_data(&root,12);
    insert_data(&root,54);
    printf("\n Before selection sort:");
    show_data(root);
    selection_sort(root);
    printf("\n After selection sort :");
    show_data(root);
    printf("\n\n");
}