#include <iostream>
#include <stack>
using namespace std;

class charstack {
    private:
    int data[100];
    int top;
    public:
    charstack() {
        top = -1;
    }
    bool isEmpty() {
       return top == -1;
    }
    bool isFull () {
        return top == 99;
    }
    void push(char ch) {
        data[++top] = ch;
    }
    char pop() {
        return data[top--];
    }
    bool isVowels(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
    string removeconsotants(string str) {
        string result = "";

        for (int i=0; i<str.length(); i++) {
            if(isVowels(str[i]))
            {
                push(str[i]);
            }
        }
        charstack temp;


        while(!isEmpty()) {
            temp.push(pop());
        }
        while (!temp.isEmpty()) {
            result += temp.pop();
        }
        return result;
    }
};

int main () 
{
    charstack s;
    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Result: " << s.removeconsotants(str) << endl;
}