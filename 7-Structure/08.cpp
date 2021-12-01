#include<iostream>
using namespace std;

struct Node {
  int order, coeff;
  Node *nxt;
};

Node* add_poly(Node* a, Node* b) 
{

}

int main()
{
  Node *a = nullptr, *pa = nullptr, *b = nullptr, *pb = nullptr;
  int coef, orde;
  cin >> coef >> orde;
  while (orde >= 0) {
    Node* na = new Node;
    na->order = orde;
    na->coeff = coef;
    na->nxt = nullptr;
    if (pa) pa->nxt = na;
    pa = na;
    if (a == nullptr) a = pa;
    cin >> coef >> orde;
  }
  cin >> coef >> orde;
  while (orde >= 0) {
    Node* nb = new Node;
    nb->order = orde;
    nb->coeff = coef;
    nb->nxt = nullptr;
    if (pb)  pb->nxt = nb;
    pb = nb;
    if (b == nullptr) b = pb;
    cin >> coef >> orde;
  }
  
  Node* c = add_poly(a, b);
  
  while (c) {
    cout << c->coeff << ' '<< c->order << endl;
    c = c->nxt;
  }

  //要不要补上a,b,c三个链表的删除？
  return 0;
}