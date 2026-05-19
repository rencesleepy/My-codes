#include <iostream>
using namespace std;

class DynamicStack
{
private:
    struct StackNode
    {
        int value;
        StackNode *next;
    };

    StackNode *top;

public:
    DynamicStack()
    {
        top = nullptr;
    }
    void push(int num);
    void pop(int &num);
    bool isEmpty();
};

void DynamicStack::push(int num)
{
    StackNode *newNode;

    newNode = new StackNode;
    newNode->value = num;

    if (isEmpty())
    {
        top = newNode;
        newNode->next = nullptr;
    }
    else
    {
        newNode->next = top;
        top = newNode;
    }
}

void DynamicStack::pop(int &num)
{
    StackNode *temp;

    if (isEmpty())
    {
        cout << "The stack is empty. Cannot pop an item." << endl;
    }
    else
    {
        num = top->value;
        temp = top->next;
        delete top;
        top = temp;
    }
}

bool DynamicStack::isEmpty()
{
    bool status;

    if (!top)
        status = true;
    else
        status = false;

    return status;
}

int main()
{
    DynamicStack stack;
    int catchVar;

    cout << "Pushing 5\n";
    stack.push(5);
    cout << "Pushing 10\n";
    stack.push(10);
    cout << "Pushing 15\n";
    stack.push(15);

    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << " popped.\n";
    stack.pop(catchVar);
    cout << catchVar << " popped.\n";
    stack.pop(catchVar);
    cout << catchVar << " popped.\n";
    cout << "\nAttempting to pop from an empty stack...\n";
    stack.pop(catchVar);

    return 0;
}
