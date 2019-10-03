// by @Vivek4075 (https://github.com/Vivek4075)
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
typedef long long int ll;
#define mset(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define iosbase ios_base::sync_with_stdio(false); cin.tie(NULL);
#define Size 100
void INFIX_TO_POSTFIX();
int priority(char symbol);
void push(int symbol);
int pop();
char infix[Size],postfix[Size];
int top=-1;
int stack1[Size];

int main()
{


    printf("ENTER THE EXPRESSION\n");
    
    cin>>infix;

    INFIX_TO_POSTFIX();
    
    cout<<postfix<<endl;



}

void INFIX_TO_POSTFIX()
{
    unsigned i,c=0;
    char symbol,next;
    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];

        if(symbol!='\0')
        {
            switch(symbol)
            {
                    case '(' :
                                push(symbol);
                                break;
                    case ')' :

                                while((next=pop())!='(')
                                {
                                    postfix[c++]=next;
                                }
                                break;
                    case '+' :
                    case '-' :
                    case '*' :
                    case '/' :
                    case '%' :
                    case '^' :
                                while(top!=-1 && priority(stack1[top])>=priority(symbol))
                                {
                                    postfix[c++]=pop();

                                }
                                push(symbol);
                                break;
                    default :
                                postfix[c++]=symbol;
            }
        }

    }
    while(top!=-1)
    {
        postfix[c++]=pop();
    }


}

int priority(char symbol)
{
    if(symbol=='^')
    {
        return(3);

    }
    else if(symbol=='*' || symbol =='/')
    {
        return (2);
    }
    else if(symbol=='+' || symbol=='-')
    {
        return(1);
    }
    else
    {
        return (0);
    }
}
void push(int symbol)
{
    if(top>Size)
    {
        cout<<"MEMORY NOT AVAILABLE\n";
    }
    top=top+1;
    stack1[top]=symbol;


}

int pop()
{
    if(top==-1)
    {
        cout<<"STACK UNDERFLOW\n";
    }
    return (stack1[top--]);
}
