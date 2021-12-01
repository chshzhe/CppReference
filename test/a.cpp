#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int *p;
	char *q;
	p = new int(5);
	q = new char[5];
	strcpy(q, "abcde");
	cout << *p << endl
		 << q << endl;
}