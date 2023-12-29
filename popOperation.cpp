#include <iostream>
using namespace std;
#define MAX_SIZE 100 // Maximum size of the stack

class Stack {
private:
    int top;
    int arr[MAX_SIZE];

public:
    Stack() {
        top = -1; // Initialize top of the stack
    }

    bool isEmpty() {
        return (top == -1); // Check if the stack is empty
    }

    bool pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: No element to pop.\n";
            return false;
        } else {
            top--; // Decrement top to remove the top element
            return true;
        }
    }
};

int main() {
    Stack stack;
    // Perform pop operation
    if (stack.pop()) {
        cout << "Element popped successfully.\n";
    }

    return 0;
}
