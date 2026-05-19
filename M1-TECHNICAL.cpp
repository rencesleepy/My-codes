#include <iostream>
using namespace std;

class ArrayID
{
    private:
        int size;
        int *array;
        int capacity;

    public:
        ArrayID (int Arraycap=10)
        {
            capacity = Arraycap;
            size = 0;
            array = new int [capacity];
        }

        ~ArrayID ()
        {
            delete [] array;
        }

        int getSize()
        {
            return size;
        }

        bool isEmpty ()
        {
            return size == 0;
        }

        bool isFull ()
        {
            return size == capacity;
        }

        void addItem(int value)
        {
            if (isFull())
            {
                cout << "\033[1;31mArray is full. No more items can be inserted\33[0m" << endl;
                return;
            }

            array[size] = value;
            size++;
        }

        void insertItem (int pos, int value)
        {
            if (isFull())
            {
                cout << "Array is full. No more items can be inserted" << endl;
                return;
            }

            if (pos < 0 || pos > size)
            {
                cout << "Invalid!" << endl;
                return;
            }

            for (int i = size - 1; i >= pos; i--)
            {
                array[i + 1] = array[i];
            }

            array[pos] = value;
            size++;
        }

        void deleteItem (int pos)
        {
            if (isEmpty())
            {
                cout << "Array is empty" << endl;
                return;
            }

            if (pos < 0 || pos >= size)
            {
                cout << "Invalid!" << endl;
                return;
            }

            for (int i = pos; i < size - 1; i++)
            {
                array[i] = array[i + 1];
            }

            size--;
        }

        void displayItems()
        {
            cout << "------------------" << endl;
            cout << "\033[1;33mArray items: \33[0m" << endl;


            for (int i = 0; i < size; i++)
            {
                cout << "\033[1;36m" << array[i] << "\33[0m ";
            }

            cout << endl;
        }
};

int main ()
{
    ArrayID arr(5);

    arr.addItem(10);
    arr.addItem(20);
    arr.addItem(30);

    arr.displayItems();

    arr.insertItem(1, 15);

    arr.displayItems();

    arr.addItem(40);

    arr.displayItems();

    arr.addItem(50);

    arr.deleteItem(0);

    arr.displayItems();

    cout << "Size of array: " << "\033[1;35m" << arr.getSize() << "\33[0m" << endl;

    if (arr.isEmpty())
    {
        cout << "0\033[1;31mArray is empty\33[0m" << endl;
    }
    else
    {
        cout << "\033[1;32mArray is not empty\33[0m" << endl;
    }

    return 0;
}