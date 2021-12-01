int magic(int m)
{
    for (int i = 1; i <= 9; i++)
        for (int j = 0; j <= 9; j++)
            for (int k = 0; k <= 9; k++)
                if (122 * i + 212 * j + 221 * k == m)
                    return (100 * i + 10 * j + k);
    return -1;
}
