#include <iostream>
using namespace std;

int main()
{
    string *arr, str, posString;
    arr = new string[11];
    int n = 0, *pos;
    getline(cin, str);
    int word_pos = 0, str_pos = 0, word = 0;
    bool isWord = false;
    while (str_pos < str.length())
    {
        if (str[str_pos] != ' ')
        {
            if (!isWord)
            {
                word_pos = str_pos;
                isWord = true;
            }
        }
        else
        {
            if (isWord)
            {
                isWord = false;
                arr[word] = string(&str[word_pos], &str[str_pos]);
                word++;
            }
        }
        str_pos++;
    }
    if (isWord)
    {
        isWord = false;
        arr[word] = string(&str[word_pos], &str[str_pos]);
        word++;
    }
    pos = new int[word];
    cin >> posString;
    cout << word << endl;
    for (int i = 0; i < word; i++)
        cout << arr[posString[i] - '0'] << ' ';
    delete[] arr;
    delete[] pos;
    return 0;
}