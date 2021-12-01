int Func(int n)
{
    for (int i = 999; i >= 100; i--)
        if (n % i == 0)
            return i;
    return -1;
}
