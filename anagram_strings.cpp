// The two strins are said to be anagram if,they are made up of same latters

#include <iostream>
using namespace std;

int main()
{
    string str1;
    string str2;
    cout << "Enter the strings to check whether they are anagram or not" << endl;
    cin >> str1;
    cin >> str2;
    int i = 0;
    int hash_table[26] = {0};
    if (str1.length() == str2.length())
    {
        for (i = 0; str1[i] != '\0'; i++)
        {
            hash_table[str1[i] - 97] += 1;
        }
        for (i = 0; str2[i] != '\0'; i++)
        {
            hash_table[str2[i] - 97] -= 1;
            if (hash_table[str2[i] - 97] < 0)
            {
                cout << "not anagram" << endl;
                break;
            }
        }
        if (str2[i] == '\0')
        {
            cout << "the strings are anagram" << endl;
        }
    }
    else{
        cout<<"The strings are not anagram"<<endl;
    }
    return 0;
}
