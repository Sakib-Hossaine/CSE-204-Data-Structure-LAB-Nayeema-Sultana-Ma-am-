#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fastios                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int mx = 1e5 + 123;

// for operator
int precedence(char opra)
{if(opra =='^')
  return 1;
    if (opra == '+' || opra == '-')
        return 2;
    if (opra == '*' || opra == '/')
        return 3;
      //  naile  return 0 nia  biday
    return 0;
}

void inToPost(char infix[], char postfix[]) // value passed from infix to infix and postfix to post
{
    char stack[100];
    int top = -1;
    int k = 0;

    for (int i = 0; infix[i] != '\0'; ++i)

    {
          if (infix[i] == ' ') continue;
        if (isalnum(infix[i])) // is alphabet or number
        {
            postfix[k++] = infix[i];
            postfix[k++] = ' ';
        }


        else if (infix[i] == '(') // if it is opening bracket
        {
            stack[++top] = infix[i]; // push opening bracket to stack
        }


        else if (infix[i] == ')') // if it is closing bracket
        {
            while (top != -1 && stack[top] != '(') // while top is not -1 and top is not opening bracket
            {
                /*if i get closing bracket, 
                i will have to pop out every operator one by one until i find Opening bracket.
                */
                postfix[k++] = stack[top--]; // pop top to postfix
                postfix[k++] = ' ';          // added space after pop
            }
            top--; // top er value decrement kore dilam
        }


        else
        {
            while (top != -1 && precedence(infix[i]) <= precedence(stack[top])) // while top is not -1 and checking operators
            {
                postfix[k++] = stack[top--]; // pop top to postfix
                postfix[k++] = ' ';
            }
            stack[++top] = infix[i];
        }
    }


    while (top != -1) // top is not -1
    {
        postfix[k++] = stack[top--]; // pop top to post
        postfix[k++] = ' ';
    }
    postfix[k] = '\0'; // null paile  the postfix expression print ses
}

int main()
{

    char infix[100];
    char postfix[200];
    cout << "Enter infix : ";
    cin.getline(infix, 100);
    inToPost(infix, postfix); // function for all operation
    cout << "postfix is: " << postfix << endl;
    return 0;
}