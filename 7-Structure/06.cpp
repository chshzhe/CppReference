#include <iostream>
#include <cstring>
using namespace std;

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
studentNode *head, *p, *q;

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
studentNode &findByID(string id, bool isNext = false)
{
    if (isNext)
    {
        for (p = q; p != NULL; p = p->next)
            if ((p->next != NULL) && !(p->next->data).id.compare(id))
                return *p;
    }
    else
    {
        for (p = q; p != NULL; p = p->next)
            if (!(p->data).id.compare(id))
                return *p;
    }
    return *head;
}
void deleteStudent(studentNode &student)
{
    studentNode *temp = &student;
    studentNode *pos = &findByID(temp->data.id,true);
    pos->next = temp->next;
    delete temp;
    delete &student;
}
int main()
{

    head = NULL;
    q = head;
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
            p = new studentNode;
            p->next = q;
            cin >> id >> score1 >> score2 >> score3;
            cin.getline(name, 51);
            init(p->data, id, score1, score2, score3, name);
            q = p;
            break;

        case 2:
            cin >> id >> score1 >> score2 >> score3;
            cin.getline(name, 51);
            init(findByID(id).data, id, score1, score2, score3, name);
            break;
        case 3:

            break;
        default:
            break;
        }
        cin >> op;
    }
    for (p = q; p != NULL; p = p->next)
    {
        output(p->data);
    };
    cout << endl;
    return 0;
}
