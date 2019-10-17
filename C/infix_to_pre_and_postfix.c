/* 

This C programme will let you to convert infix expressions with variables to pre and postfix ex

example: 
     input : A+B*C
    
    output: postfix : ABC*+
            prefix : +A*BC

*/

#include<stdio.h>
#include<string.h>
#define MAX 20
#define POP_ERR '?'

char operator_stack[MAX];
int top = -1;
char expression[MAX];

char pop(){
    if(top == -1){
        // printf("nothing to pop");
        return POP_ERR;
    }
    else{
        char popped = operator_stack[top];
        top = top - 1;
        return popped;
    }
}

char return_top(){
    if(top == -1){
        // printf("nothing to pop");
        return POP_ERR;
    }
    else{
        return operator_stack[top];
    }
}

void push(char char_to_push){
    if(top == MAX){
        // printf("nothing to add");
    }
    else{
        top += 1;
        operator_stack[top] = char_to_push;
    }
}

// this operator_priority function returns priority of operators and returns 0 if it is not operator
int operator_priority(char operator){
    switch(operator){
        case '^': return 6;
        case '*': return 5;
        case '/': return 4;
        case '%': return 3;
        case '+': return 2;
        case '-': return 1;
        default : return 0;
    }
}

// input as operator to be pushed and operator in the stack top 1 means operator can be pushed and 0 means no push
int compare_operator(char operator1, char operator2){
    int op1_pref = operator_priority(operator1);
    int op2_pref = operator_priority(operator2);
    if(op1_pref >= op2_pref){
        return 1;
    }
    else{
        return 0;
    }
}

char* infix_to_postfix(char *prefix)
{
    int i = 0;
    char current_operator,stack_top_operator, operator_to_push;
    int length_of_string = strlen(prefix);
    prefix[length_of_string] = ')';
    prefix[length_of_string + 1] = '\0';
    push('(');
    while(*prefix != '\0')
    {
        if(*prefix == '('){
            push(*prefix);
        }
        else if(*prefix == ')'){
            while(return_top() != '('){
                expression[i] = pop();
                i++;
            }
            pop();
        }
        else if(operator_priority(*prefix) == 0)
        {
            expression[i] = *prefix;
            i++;   
        }
        else{
            stack_top_operator = return_top();
            if(stack_top_operator == POP_ERR){
                push(*prefix);
            }
            else{
                current_operator = *prefix;
                while(compare_operator(current_operator,stack_top_operator) != 1)
                {
                    operator_to_push = pop();
                    expression[i] = operator_to_push;
                    i++;
                    stack_top_operator = return_top();
                }
                push(current_operator);
            }
        }
        prefix++;
    }

    expression[i] = '\0';
    return expression;
}

char* infix_to_prefix(char *infix){
    int i = 0;
    char* rev;
    char* res;
    rev = strrev(infix);
    for(i = 0; i < strlen(rev); i++){
        if(*(rev + i) == ')'){
            *(rev+i) = '(';
        }
        else if(*(rev + i) == '('){
            *(rev+i) = ')';
        }
    }
    res = infix_to_postfix(rev);
    return strrev(res);
}

int main(){
    char main_input[MAX];
    char* pof;
    char* prf;
    printf("Enter the infix expression: ");
    gets(main_input);
    
    pof = infix_to_postfix(main_input);
    printf("\n\nPostfix is: ");
    puts(pof);
    prf = infix_to_prefix(main_input);
    printf("\n\nPrefix is: ");
    puts(prf);
    return 0;
}