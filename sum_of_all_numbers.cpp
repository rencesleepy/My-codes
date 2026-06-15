#include <iostream>
#include <stack>
using namespace std;

class intstack {
    private:
    char data[100];
    int top;
    public:
    intstack() {
        top =-1;
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == 99;
    }
    void push (char ch) {
        top++;
        data[top] = ch;
    }
    char pop() {
        char temp = data[top];
        top--;
        return temp;
    }
};

int main() 
{
    intstack s;
    string name;

    cout << "Enter a string: " ;
    cin >> name;

    for (int i=0; i<name.length(); i++) {
        s.push(name[i]);
    }
    int sum = 0;

    while (!s.isEmpty()) {
        sum += s.pop();
    }
    cout << "Result: " << sum << endl;

    return 0;

}