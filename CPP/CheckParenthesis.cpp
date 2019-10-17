
#include<iostream>
using namespace std;
class node{ //node class
    node*link;
    char data;
    friend class list;
public:
    node(char d)
    {
        link=NULL;
        data=d;
    }
};
class list{  //list class
    node*temp;
    node*ptr,*top;
public:
    list()
    {
        temp=0;
        ptr=0;
        top=NULL;
    }
    void push(char);
    int Isempty();
    char pop();
};
int list::Isempty() //check if stack is empty
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
void list::push(char d)//add at top
{
    temp=new node(d);
    if(Isempty()==1)
        top=temp;
    else
    {
        temp->link=top;
        top=temp;
    }
}

char list::pop()
{
    if(Isempty()==1)
            {
            cout<<"Stack is empty"<<endl;
            return 0;
            }

        else{
        ptr=top;
        temp=top;
        top=top->link;
        delete ptr;
        return temp->data;
        }
}

class expression
{
    list l;
    char str[30];
    int i;
public:
    void check();
    void accept();
};
void expression::accept()
{
    cout<<"Enter the expression to be checked"<<endl;

        cin>>str;
}
void expression::check() //check parenthesis
{
    int flag=0;
     for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
           l.push(str[i]);

        if(str[i]==']')
           {
               if(l.pop()!='[')
               {
                  cout<<"\n\n****Expression is Unbalanced****\nOpening bracket does not match with closing bracket"<<endl;
                    flag=1;
                   break;
               }

           }
            if(str[i]==')')
           {
               if(l.pop()!='(')
               {
                   cout<<"\n\n****Expression is Unbalanced****\nOpening bracket does not match with closing bracket."<<endl;
                    flag=1;
                   break;
               }

           }
            if(str[i]=='}')
           {
               if(l.pop()!='{')
               {
                   cout<<"\n\n****Expression is Unbalanced****\nOpening bracket does not match with closing bracket"<<endl;
                    flag=1;
                   break;
               }

           }


    }

    if(flag==0)
    {
        if(l.Isempty()==1)
            cout<<"\n\n****Expression is Balanced****"<<endl;
        else
            cout<<"\n\n****Expression is Unbalanced because extra opening brackets****"<<endl;
    }

}
int main()
{
    char ans;
    do{
        expression e;
        e.accept();
        e.check();
        cout<<"\nDo you want to check expression?y or n?"<<endl;
        cin>>ans;
    }while(ans=='y'||ans=='Y');
        return 0;
}


//OUTPUT

/*
 * Enter the expression to be checked
[((()


****Expression is Unbalanced because extra opening brackets****

Do you want to check expression?y or n?
y
Enter the expression to be checked
({[]})


****Expression is Balanced****

Do you want to check expression?y or n?
y
Enter the expression to be checked
{{[]))


****Expression is Unbalanced****
Opening bracket does not match with closing bracket.

Do you want to check expression?y or n?
y
Enter the expression to be checked
(())))
Stack is empty


****Expression is Unbalanced****
Opening bracket does not match with closing bracket.

Do you want to check expression?y or n?
n
 *
 */

