namespace Kangaroo;

internal class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Kangaroo");
        Console.WriteLine(Kangaroo(0, 2, 5, 3));
        Console.WriteLine(Kangaroo(0, 3, 4, 2));
    }
    static string Kangaroo(int x1, int v1, int x2, int v2)
    {
        int i = x2 - x1;
        while(i > 0)
        {
            x1 += v1;
            x2 += v2;
            if (x1 == x2) return "YES";

            i--;
        }
        return "NO";
    }
}