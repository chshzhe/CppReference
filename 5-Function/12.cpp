int CountDigit(int number, int digit)
{
    if (number == 0 && digit == 0)
        return 1; //最后一个数据点
    int cnt = 0;
    while (number)
    {
        if (number % 10 == digit)
            cnt++;
        number /= 10;
    }
    return cnt;
}
