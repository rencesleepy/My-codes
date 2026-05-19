#include <iostream>
#include <list>
using namespace std;

struct Linkedlist
{

private:
    // Declare a structure for the list
    struct ListNode
    {
        float value;
        ListNode *next;
    };

    ListNode *head; 

public:
    
    Linkedlist()
    {
        head = nullptr; 
    }

    ~Linkedlist()
    {
        ListNode *nodePtr, *nextNode;

        nodePtr = head;

        while (nodePtr != nullptr)
        {
            nextNode = nodePtr->next;
            delete nodePtr;
            nodePtr = nextNode;
        }
    }; // Destructor

    void appendNode(float);
    void insertNode(float);
    void deleteNode(float);
    void displayList();
};

void Linkedlist::appendNode(float num)
{
    ListNode *newNode, *nodePtr;

    
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = nullptr;

    
    if (!head)
    {
        head = newNode;
    }
    else 
    {
       
        nodePtr = head;
        
        while (nodePtr->next)
        {
            nodePtr = nodePtr->next;
            cout << nodePtr->value << endl;
        }
        nodePtr->next = newNode;
    }
    cout << "Input has been Appended!" << endl;
}

void Linkedlist::displayList()
{
    ListNode *nodePtr;

    if (head == nullptr)
    {
        cout << "The list is empty!" << endl;
    }
    else
    {
        
        nodePtr = head;

        while (nodePtr)
        {
            cout << nodePtr->value << endl;

            
            nodePtr = nodePtr->next;
        }
    }
}

void Linkedlist::insertNode(float num)
{
    ListNode *newNode, *nodePtr, *previousNode;

    // Allocate a new node and store num there.
    newNode = new ListNode;
    newNode->value = num;

    // If there are no nodes in the list, make newNode the first node.
    if (!head)
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else // Otherwise, insert newNode
    {
        // Initialize nodePtr to head of list and previousNode to nullptr
        nodePtr = head;
        previousNode = nullptr;

        // Skip all nodes whose value member is less than num.
        while (nodePtr != nullptr && nodePtr->value < num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If the new node is to be the first in the list, insert it before all other nodes.
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else
        {
            // Insert newNode between previousNode and nodePtr.
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }

    cout << "Input has been Inserted!" << endl;
}

void Linkedlist::deleteNode(float num)
{
    ListNode *nodePtr, *previousNode;

    int found = 0;

    // if the list is empty, do nothing
    if (!head)
    {
        cout << "The list is empty!" << endl;

        return;
    }

    if (head->value == num)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
        found = 1;
    }
    else
    {
        // initialize nodePtr to head of list and previousNode to nullptr
        nodePtr = head;
        previousNode = nullptr;

        // Skip all nodes whose value member is not equal to num.
        while (nodePtr != nullptr && nodePtr->value != num)
        {
            // Update previousNode to point to the current node before advancing nodePtr to the next node.
            previousNode = nodePtr;

            // Update nodePtr to point to the next node in the list.
            nodePtr = nodePtr->next;
        }

        // Link the previous node to the node after nodePtr, then delete nodePtr
        if (nodePtr != nullptr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
            found = 1;
        }
    }

    if (found == 0)
    {
        cout << "Value not found in the list!" << endl;
    }
}

int main()
{
    Linkedlist mylist;
    

    // Build the list
    mylist.appendNode(1);
    mylist.appendNode(2);
    mylist.appendNode(3);

    cout << "Here are the initial values in the list: " << endl;
    // Display the list
    mylist.displayList();

    // Insert a node in the middle
    mylist.insertNode(2.5);

    // Display the list
    mylist.displayList();

    cout << "Now deleting the node in the middle " << endl;
    mylist.deleteNode(9);

    // cout << "Here are the values in the list after deletion: " << endl;
    mylist.displayList();

    // -- Linked list demonstration using built-in library --

    list<int> sampleList;
    list<int>::iterator iter;

    // Add values 0 to 9 to the list
    for (int x = 0; x < 10; x++)
        // use push_back to add values to the end of the list
        sampleList.push_back(x);

    // Display the list
    // .begin() returns an iterator pointing to the first element in the list
    // .end() returns an iterator pointing to the past-the-end element in the list
    for (iter = sampleList.begin(); iter != sampleList.end(); iter++)
        // Dereference the iterator to get the value at that position in the list
        cout << *iter << endl;

    // Reverse the list
    sampleList.reverse();

    // Display the list again
    for (iter = sampleList.begin(); iter != sampleList.end(); iter++)
        cout << *iter << endl;

    return 0;
}
