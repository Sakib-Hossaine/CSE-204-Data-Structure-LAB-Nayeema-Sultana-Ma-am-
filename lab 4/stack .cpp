#include <bits/stdc++.h>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the stack: ";
    cin >> size;

    int stack[1000];
    int top = -1;

    while (1) {
        int option;
        cout << "\nType.." << "\n 1 to push" << "\n2 to pop" << "\n3 to check if the stack is Empty" << "\n4 to check the stack is Full" << "\n0 to exit\n";
        cin >> option;

        if (option == 1) {
            if (top == size - 1) {
                cout << "Overflow" << endl;
            } else {
                int push;
                cout << "Enter the value to push: ";
                cin >> push;
                top++;
                stack[top] = push;
            }
        } else if (option == 2) {
            if (top == -1) {
                cout << "Underflow" << endl;
            } else {
                stack[top] = 0;
                top--;
            }
        } else if (option == 3) {
            if (top == -1) {
                cout << "Stack is empty" << endl;
            } else {
                cout << "Stack is not empty" << endl;
            }
        } else if (option == 4) {
            if (top == size - 1) {
                cout << "Stack is full" << endl;
            } else {
                cout << "Stack is not full" << endl;
            }
            
        } 
         else if (option == 5) //Size()
         {
            cout << "The size of the stack is: " << top + 1 << endl;
        } 
        else if (option == 6) //top()
        {
            if (top == -1) {
                cout << "Stack is empty" << endl;
            } else 
            {
                cout << "The top element is: " << stack[top] << endl;
            }
        } 
        else if (option == 7) 
        {
            if (top == -1)
             {
                cout << "Stack is empty" << endl;
            } 
            else 
            {
                cout << "The elements in the stack are: ";
                for (int i = top; i >= 0; i--) 
                {
                    cout << stack[i] << " ";
                }
                cout << endl;
            }
        }
        else if (option == 0) 
        {
            break;
        } else 
        {
            cout << "Invalid input." << endl;
        }
    

    return 0;
}