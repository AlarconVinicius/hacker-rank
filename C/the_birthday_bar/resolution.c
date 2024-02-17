int birthday(int s_count, int* s, int d, int m) {
    int j = 0;
    int k = 1;
    int t = m;
    int i = 0;
    int sum = 0;
    int count = 0;
    
    while (i < s_count)
    {
        sum = s[i];
        j = k;
        while (j < t)
        {
            sum += s[j];
            j++;
        }
        if (sum == d)
            count++;
        k++;
        t++;
        i++;
    }
    return count;
}
