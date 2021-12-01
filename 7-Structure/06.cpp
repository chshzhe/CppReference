#include <iostream>
#include <cstring>
using namespace std;
int top = 0;
struct studentT
{
    string id;
    int score1, score2, score3;
    char name[52];
    int sum;
};
studentT arr[1000];

void init(int pos, string id, int score1, int score2, int score3, char name[52])
{

    arr[pos].id = id;
    arr[pos].score1 = score1;
    arr[pos].score2 = score2;
    arr[pos].score3 = score3;
    arr[pos].sum = score1 + score2 + score3;
    for (int i = 1; i < strlen(name); i++)
        arr[pos].name[i - 1] = name[i];
    arr[pos].name[strlen(name) - 1] = '\0';
}
void output(studentT student)
{
    cout << student.id << ' ' << student.name << ' ' << student.score1 << ' ' << student.score2 << ' ' << student.score3 << ' ' << endl;
}
int findByID(string id)
{
    for (int i = 0; i < top; i++)
        if (arr[i].id.compare(id) == 0)
            return i;
    return -1;
}
void deleteStudent(int pos)
{
    if (pos != -1)
    {
        for (int i = pos; i < top; i++)
            arr[i] = arr[i + 1];
        top--;
    }
}
void sortByID()
{
    for (int i = 0; i < top - 1; i++)
        for (int j = i + 1; j < top; j++)
            if (arr[i].id > arr[j].id)
            {
                studentT temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}
void sortBySum()
{
    for (int i = 0; i < top - 1; i++)
        for (int j = i + 1; j < top; j++)
            if ((arr[i].sum < arr[j].sum) || ((arr[i].sum == arr[j].sum) && (arr[i].id > arr[j].id)))
            {
                studentT temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
}
int main()
{

    int op;
    cin >> op;
    while (op != 0)
    {
        string id;
        int score1, score2, score3;
        char name[52];
        int pos;
        switch (op)
        {
        case 1:
            cin >> id >> score1 >> score2 >> score3;
            cin.getline(name, 51);
            pos = findByID(id);
            if (pos == -1)
            {
                init(top, id, score1, score2, score3, name);
                top++;
            }
            else
                init(pos, id, score1, score2, score3, name);
            break;
        case 2:
            cin >> id >> score1 >> score2 >> score3;
            cin.getline(name, 51);
            pos = findByID(id);
            if (pos != -1)
                init(pos, id, score1, score2, score3, name);
            break;
        case 3:
            cin >> id;
            pos = findByID(id);
            deleteStudent(pos);
            break;
        case 4:
            cin >> id;
            pos = findByID(id);
            if (pos != -1)
                output(arr[pos]);
            break;
        case 5:
            getchar();
            cin.getline(name, 51);
            for (int i = 0; i < top; i++)
                if (strcmp(arr[i].name, name) == 0)
                    output(arr[i]);
            break;
        case 6:
            for (int i = 0; i < top; i++)
                output(arr[i]);
            break;
        case 7:
            sortBySum();
            for (int i = 0; i < top; i++)
                output(arr[i]);
            break;
        default:
            break;
        }
        sortByID();
        cin >> op;
    }

    return 0;
}
