#include <iostream>
using namespace std;

int main ()
{
    int arr[3] = {10, 20, 30};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j] << " ";
        }
    }
    cout << endl;

    return 0;
}
