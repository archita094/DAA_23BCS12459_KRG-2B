#include <iostream>
using namespace std;

#define SIZE 5

class Stack {
    int arr[SIZE];
    int top;
public:
    Stack() { top = -1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == SIZE - 1; }
    void push(int value) {
        if (isFull()) cout << "Stack Overflow!" << endl;
        else arr[++top] = value;
    }
    void pop() {
        if (isEmpty()) cout << "Stack Underflow!" << endl;
        else top--;
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.peek() << endl;
    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    while (!s.isEmpty()) {
        cout << "Popping: " << s.peek() << endl;
        s.pop();
    }
    s.pop();
    return 0;
}
