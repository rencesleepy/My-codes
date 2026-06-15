#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class intstack {
    private:
    int data[100];
    int top;
    public:
    intstack() {
        top = -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == 99;
    }
    void push(int value) {
        if (!isFull()) {
            data[++top] = value;
        }
    }
    int pop() {
        if (!isEmpty()) {
            return data[top--];
        }
        return -1;
    }
};

int main() {
    intstack s;
    string name;

    cout << "Enter a string of digits: ";
    cin >> name;

    for (int i = 0; i < static_cast<int>(name.length()); i++) {
        if (isdigit(static_cast<unsigned char>(name[i]))) {
            s.push(name[i] - '0');
        }
    }

    if (s.isEmpty()) {
        cout << "No digits were entered." << endl;
        return 0;
    }

    int largest = -1;
    while (!s.isEmpty()) {
        int digit = s.pop();
        if (digit > largest) {
            largest = digit;
        }
    }

    cout << "Largest digit: " << largest << endl;
    return 0;
}