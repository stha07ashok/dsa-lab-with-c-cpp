#include <iostream>
using namespace std;
#define MAX_SIZE 100
class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; // Initializing the top of the stack
    }

    bool push(int value) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack Overflow! Cannot push more elements.\n";
            return false; // Stack overflow condition
        }
        arr[++top] = value; // Increment top and add the value to the stack
        cout << value << " pushed into the stack.\n";
        return true;
    }
};

int main() {
    Stack stack;

    // Pushing elements into the stack
    stack.push(5);
    stack.push(10);
    stack.push(15);

    return 0;
}
