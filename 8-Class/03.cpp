#include <iostream>
#include <cstring>
using namespace std;

struct studentT
{
    string name;
    int year, month, day;
    string phone;
    char address[52];
};
void init(studentT &student, string name, int year, int month, int day, string phone, char address[52])
{
    student.name = name;
    student.year = year;
    student.month = month;
    student.day = day;
    student.phone = phone;
    for (int i = 1; i < strlen(address); i++)
        student.address[i - 1] = address[i];
    student.address[strlen(address) - 1] = '\0';
}
void output(studentT student)
{
    cout << student.name << ' ' << student.year << ' ' << student.month << ' ' << student.day << ' ' << student.phone << ' ' << student.address << endl;
}
bool old(studentT a, studentT b)
{
    if (a.year < b.year)
        return true;
    if (a.year > b.year)
        return false;
    if (a.month < b.month)
        return true;
    if (a.month > b.month)
        return false;
    if (a.day < b.day)
        return true;
    if (a.day > b.day)
        return false;
    return false;
}
int main()
{
    int n;
    cin >> n;
    studentT arr[11];
    for (int i = 0; i < n; i++)
    {
        int year, month, day;
        string name, phone;
        char address[52];
        cin >> name >> year >> month >> day >> phone;
        cin.getline(address, 51);
        init(arr[i], name, year, month, day, phone, address);
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (old(arr[i], arr[j]))
            {
                studentT temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    for (int i = 0; i < n; i++)
        output(arr[i]);
    return 0;
}
