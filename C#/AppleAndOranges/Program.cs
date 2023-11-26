namespace AppleAndOranges;

internal class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Apple and Oranges");
        List<int> apples = new List<int>();
        apples.Add(2);
        apples.Add(3);
        apples.Add(-4);
        List<int> oranges = new List<int>();
        oranges.Add(3);
        oranges.Add(-2);
        oranges.Add(-4);
        countApplesAndOranges(7, 10, 4, 12, apples, oranges);
    }

    static void countApplesAndOranges(int s, int t, int a, int b, List<int> apples, List<int> oranges)
    {
        List<int> appleMap = new List<int>();
        List<int> orangeMap = new List<int>();

        int appleCount = 0;
        int orangeCount = 0;

        for(int i = 0; i < apples.Count; i++)
        {
            apples[i] += a;
            if (apples[i] >= s && apples[i] <= t)
            {
                appleCount++;
            }
        }
        for (int i = 0; i < oranges.Count; i++)
        {
            oranges[i] += b;
            if (oranges[i] >= s && oranges[i] <= t)
            {
                orangeCount++;
            }

        }
        Console.WriteLine(appleCount);
        Console.WriteLine(orangeCount);
    }

}