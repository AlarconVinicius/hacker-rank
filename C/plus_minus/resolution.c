void plusMinus(int arr_count, int* arr) 
{
    int p;
    int n;
    int z;
    int i;
    float positive;
    float negative;
    float zero;
    
    p = 0;
    n = 0;
    z = 0;
    i = 0;
    while (i < arr_count)
    {
        if (arr[i] < 0)
            n++;
        else if (arr[i] > 0)
            p++;
        else
            z++;
        i++;
    }
    positive = (float)p/arr_count;
    negative = (float)n/arr_count;
    zero = (float)z/arr_count;
    printf("%0.6f \n%0.6f \n%0.6f", positive, negative, zero);
}
