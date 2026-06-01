#include <iostream>
#include <string>
using namespace std;

class NameStack {
private:
    char data[100];
    int top;

public:
    NameStack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(char ch) {
        if (top < 99) {
            data[++top] = ch;
        }
    }

    char pop() {
        if (!isEmpty()) {
            return data[top--];
        }
        return '\0';
    }

    bool isVowel(char ch) {
        ch = tolower(ch);
        return (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u');
    }

    string removeConsonants(string name) {
        string result = "";

        // Push vowels into stack
        for (int i = 0; i < name.length(); i++) {
            if (isVowel(name[i])) {
                push(name[i]);
            }
        }

        // Temporary stack to restore order
        NameStack temp;

        while (!isEmpty()) {
            temp.push(pop());
        }

        while (!temp.isEmpty()) {
            result += temp.pop();
        }

        return result;
    }
};

int main() {
    NameStack ns;
    string name;

    cout << "Enter a name: ";
    cin >> name;

    string processed = ns.removeConsonants(name);

    cout << "Processed Name: " << processed << endl;

    return 0;
}
