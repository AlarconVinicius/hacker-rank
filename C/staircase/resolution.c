void staircase(int n) 
{
    int i;
    int space;
    int hash;
    int x;
    
    i = 0;
    space = n;
    hash = 1;
    while (i < n)
    {
        space = n - hash;
        while (space)
        {
            printf(" ");
            space--;
        }
        x = 1;
        while (x <= hash)
        {
            printf("#");
            x++;
        }
        printf("\n");
        hash++;
        i++;
    }
}
