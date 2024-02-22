int diagonalDifference(int arr_rows, int arr_columns, int** arr) 
{
    int result1;
    int result2;
    int x;
    int y;
    
    x = 0;
    y = 0;
    result1 = 0;
    result2 = 0;
    while (x < arr_rows && y < arr_columns)
    {
        result1 += arr[x][y];
        x++;
        y++;
    }
    x = arr_rows - 1;
    y = 0;
    while (x >= 0 && y < arr_columns)
    {
        result2 += arr[x][y];
        x--;
        y++;
    } 
    if ((result1 - result2) < 0)
       return ((result1 - result2) * -1);
    return (result1 - result2);
}
