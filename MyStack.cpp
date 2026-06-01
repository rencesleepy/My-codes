#include <iostream>
#include <stack>
using namespace std;

int main ()
{
    stack<int> numbers;

    cout << "Size: " << numbers.size() << endl;
    
    if(numbers.empty())  
    {                       
        cout << "It is empty\n";
    }
    else
    {
        cout << "It is not empty";
    }
    numbers.push(8);
    numbers.push(7);
    numbers.push(6);
   
    cout << "Size: " << numbers.size() << endl;
    if(!numbers.empty())
    {
        cout << "Not empty" << endl;
    }
    cout << "top: " << numbers.top() << endl;
    cout << "Size: " << numbers.size() << endl;

    cout << "top: " << numbers.top() << endl;
    cout << "size: " << numbers.size() << endl;

    int popped_value = numbers.top();
    numbers.pop();

    cout << endl;
    cout << "top: " << numbers.top() << endl;
    cout << "size: " << numbers.size() << endl;
    cout << "popped: " << popped_value << endl;
    
    stack<int> other_stack;
    other_stack.push(4);

    cout << "the other stack: " << other_stack.size() << endl;
    cout << endl;
    other_stack.swap(numbers);

    return 0;
}
