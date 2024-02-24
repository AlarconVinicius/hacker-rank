int max_value(int *arr, int arr_count)
{
    int n;
    
    n = 0;
    while (--arr_count >= 0)
    {
        if (arr[arr_count] > n)
            n = arr[arr_count];
    }
    return (n);
}

int min_value(int *arr, int arr_count)
{
    int n;
    
    n = arr[0];
    while (--arr_count >= 0)
    {
        if (arr[arr_count] < n)
            n = arr[arr_count];
    }
    return (n);
}

void miniMaxSum(int arr_count, int* arr)
{
    int max;
    int min;
    long total_max;
    long total_min;
    int i;
    int count;
    
    max = max_value(arr, arr_count);
    min = min_value(arr, arr_count);
    total_max = 0;
    total_min = 0;
    i = 0;
    count = 0;
    while (i < arr_count)
    {
        if (arr[i] != min)
        {
            count++;
            total_max += arr[i];
        }
        i++;
    }
    while (count != 4)
    {
        total_max += min;
        count++;
    }
    i = 0;
    count = 0;
    while (i < arr_count)
    {
        if (arr[i] != max)
        {
            count++;
            total_min += arr[i];
        }
        i++;
    }
    while (count != 4)
    {
        total_min += max;
        count++;
    }
    printf("%ld", total_min);
    printf(" %ld", total_max);
}
