#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

void isAnagram(const string& str1, const string& str2)
{
    if(str1.length() != str2.length())
    {
        cout << "The string are not anagrams" << endl;
    }
    else
    {
        string sortedStr1 = str1;
        string sortedStr2 = str2;

        sort(sortedStr1.begin(), sortedStr1.end());
        sort(sortedStr2.begin(), sortedStr2.end());

        if (sortedStr1 == sortedStr2)
        {
            cout << "The strings are anagrams" << endl;
        }
        else
        {
            cout << "\033[1;37mThe strings are not anagrams\033[0m" << endl;
        }
    }
    
};               

int main ()
{
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    isAnagram(str1, str2);

    return 0;
}
