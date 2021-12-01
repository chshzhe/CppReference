#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *reverseList(ListNode *head)
{
    ListNode *pNode = head;
    ListNode *pPrev = NULL;
    ListNode *pNext = NULL;
    ListNode *reverseHead = NULL;
    while (pNode != NULL)
    {
        pNext = pNode->next;
        reverseHead = pNode;
        reverseHead->next = pPrev;
        pPrev = pNode;
        pNode = pNext;
    }
    return reverseHead;
}

ListNode *createList()
{
    int x;
    ListNode head;
    ListNode *p = &head;
    head.next = NULL;
    while (cin >> x)
    {
        p->next = new ListNode;
        p->next->val = x;
        p->next->next = NULL;
        p = p->next;
    }
    return head.next;
}

void disp(ListNode *p)
{
    while (p)
    {
        cout << p->val << " -> ";
        p = p->next;
    }
    cout << "nullptr\n";
}

int main()
{
    ListNode *L1 = createList();
    disp(L1);
    ListNode *L2 = reverseList(L1);
    disp(L2);

    return 0;
}
