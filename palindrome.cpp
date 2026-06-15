#include <iostream>
#include <stack>
using namespace std;

// A simple stack-based palindrome checker class.
// It stores characters in an internal fixed-size array and compares
// the input string against the reversed contents of the stack.
class palindrome {
    private:
    int data[100];
    int top;
    public:
    // Constructor initializes the stack as empty.
    palindrome() {
        top = -1;
    }

    // Returns true when no characters have been pushed onto the stack.
    bool isEmpty() {
        return top == -1;
    }

    // Returns true when the stack has reached its maximum capacity.
    bool isFull() {
        return top == 99;
    }

    // Pushes a character onto the stack if there is room.
    void push(char ch) {
        if (!isFull()) {
            data[++top] = ch;
        }
    }

    // Pops the top character from the stack and returns it.
    // If the stack is empty, returns the null character as a safe fallback.
    char pop() {
        if (!isEmpty()) {
            return data[top--];
        }
        return '\0';
    }

    // Checks whether the provided string is a palindrome.
    // Characters are pushed onto the stack and then compared
    // with the original string in reverse order.
    bool checkpalindrome(string str) {
        for (int i = 0; i < str.length(); i++) {
            push(str[i]);
        }
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != pop()) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    palindrome s;
    string value;

    // Read a value from the user and test it for palindrome property.
    cout << "Enter a value: ";
    cin >> value;

    if (s.checkpalindrome(value)) {
        cout << "It is palindrome\n";
    } else {
        cout << "Not palindrome" << endl;
    }
}