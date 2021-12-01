#include <iostream>
#include <cstring>
using namespace std;
int LENGTH = 1000;
int top = 0;
struct studentT
{
    string id;
    int score1, score2, score3;
    char name[52];
};
struct studentNode
{
    studentT data;
    studentNode *next;
};

void init(studentT &student, string id, int score1, int score2, int score3, char name[52])
{

    student.id = id;
    student.score1 = score1;
    student.score2 = score2;
    student.score3 = score3;
    for (int i = 1; i < strlen(name); i++)
        student.name[i - 1] = name[i];
    student.name[strlen(name) - 1] = '\0';
}
void output(studentT student)
{
    cout << student.id << ' ' << student.name << ' ' << student.score1 << ' ' << student.score2 << ' ' << student.score3 << endl;
}
int findByID(studentT arr[], string id)
{
    for (int i = 0; i < top; i++)
        if (arr[i].id.compare(id) == 0)
            return i;
    return -1;
}
void deleteStudent(studentT arr[], int pos)
{
    for (int i = pos; i < top; i++)
        arr[i] = arr[i + 1];
    top--;
}
int main()
{
    studentT arr[LENGTH];
    int op;
    cin >> op;
    while (op != 0)
    {
        string id;
        int score1, score2, score3;
        char name[52];
        switch (op)
        {
        case 1:
            cin >> id >> score1 >> score2 >> score3;
            cin.getline(name, 51);
            init(arr[top++], id, score1, score2, score3, name);
            break;
        case 2:
            cin >> id >> score1 >> score2 >> score3;
            cin.getline(name, 51);
            init(arr[findByID(arr, id)], id, score1, score2, score3, name);
            break;
        case 3:

            break;
        default:
            break;
        }
        cin >> op;
    }
    for (int i = 0; i < top; i++)
        output(arr[i]);
    cout << endl;
    return 0;
}
