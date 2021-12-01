#include <iostream>
using namespace std;
struct matrixT
{
    long long a, b, c, d;
};
void init(matrixT &m, long long a, long long b, long long c, long long d)
{
    if (a < 0)
        a += 1000000007;
    if (b < 0)
        b += 1000000007;
    if (c < 0)
        c += 1000000007;
    if (d < 0)
        d += 1000000007;
    m.a = a;
    m.b = b;
    m.c = c;
    m.d = d;
}
void output(matrixT m)
{
    cout << m.a % 1000000007 << ' ' << m.b % 1000000007 << endl;
    cout << m.c % 1000000007 << ' ' << m.d % 1000000007 << endl;
}
matrixT matrixtimes(matrixT A, matrixT B)
{
    matrixT result;
    result.a = ((A.a * B.a) % 1000000007 + (A.b * B.c)) % 1000000007;
    result.b = ((A.a * B.b) % 1000000007 + (A.b * B.d)) % 1000000007;
    result.c = ((A.c * B.a) % 1000000007 + (A.d * B.c)) % 1000000007;
    result.d = ((A.c * B.b) % 1000000007 + (A.d * B.d)) % 1000000007;
    return result;
}
matrixT fpower(matrixT x, long long n)
{
    matrixT ans;
    init(ans, 1, 0, 0, 1);
    while (n)
    {
        if (n % 2)
            ans = matrixtimes(ans, x);
        x = matrixtimes(x, x);
        n /= 2;
    }
    return ans;
}

int main()
{
    long long n, a, b, c, d;
    cin >> n;
    cin >> a >> b;
    cin >> c >> d;
    matrixT m;
    init(m, a, b, c, d);
    m = fpower(m, n);
    output(m);
    return 0;
}
