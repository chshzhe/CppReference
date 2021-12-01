#include <iostream>
using namespace std;

struct Node
{
  int order, coeff;
  Node *nxt;
};

Node *add_poly(Node *a, Node *b)
{
  Node *c = nullptr, *pc = nullptr, *pa = a, *pb = b;
  while (pa != nullptr || pb != nullptr)
  {
    Node *nc = new Node;
    if (pb == nullptr || pa->order > pb->order)
    {
      nc->order = pa->order;
      nc->coeff = pa->coeff;
      pa = pa->nxt;
    }
    else if (pa == nullptr || pa->order < pb->order)
    {
      nc->order = pb->order;
      nc->coeff = pb->coeff;
      pb = pb->nxt;
    }
    else if (pa->order == pb->order)
    {
      nc->order = pa->order;
      nc->coeff = pa->coeff + pb->coeff;
      pa = pa->nxt;
      pb = pb->nxt;
    }
    nc->nxt = nullptr;
    if (pc)
      pc->nxt = nc;
    pc = nc;
    if (c == nullptr)
      c = pc;
  }
  return c;
}

int main()
{
  Node *a = nullptr, *pa = nullptr, *b = nullptr, *pb = nullptr;
  int coef, orde;
  cin >> coef >> orde;
  while (orde >= 0)
  {
    Node *na = new Node;
    na->order = orde;
    na->coeff = coef;
    na->nxt = nullptr;
    if (pa)
      pa->nxt = na;
    pa = na;
    if (a == nullptr)
      a = pa;
    cin >> coef >> orde;
  }
  cin >> coef >> orde;
  while (orde >= 0)
  {
    Node *nb = new Node;
    nb->order = orde;
    nb->coeff = coef;
    nb->nxt = nullptr;
    if (pb)
      pb->nxt = nb;
    pb = nb;
    if (b == nullptr)
      b = pb;
    cin >> coef >> orde;
  }

  Node *c = add_poly(a, b);
  bool isPrint = false;
  while (c)
  {
    if (c->coeff != 0)
    {
      isPrint = true;
      cout << c->coeff << ' ' << c->order << endl;
    }
    c = c->nxt;
  }
  if (!isPrint)
    cout << "0 0" << endl;
  Node *p, *q;
  //要不要补上a,b,c三个链表的删除？
  for (p = a; p != NULL; p = q)
  {
    q = p->nxt;
    delete p;
  }
  for (p = b; p != NULL; p = q)
  {
    q = p->nxt;
    delete p;
  }
  for (p = c; p != NULL; p = q)
  {
    q = p->nxt;
    delete p;
  }
  return 0;
}