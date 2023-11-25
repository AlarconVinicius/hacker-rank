namespace Kangaroo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Kangaroo");
            Console.WriteLine(Kangaroo(0,2,5,3));
        }
        static string Kangaroo(int x1, int v1, int x2, int v2)
        {
            int kan1Start = x1;
            int kan2Start = x2;
            int vel1 = v1;
            int vel2 = v2;

            int sumKan1 = x1 + v1;
            int sumKan2 = x2 + v2;
            if ((sumKan1 % sumKan2) == 0 || (sumKan2 % sumKan1) == 0)
            {
                while(sumKan1 != sumKan2)
                {
                    kan1Start++;
                    vel1 += v1;

                    kan2Start++;
                    vel2 += v2;

                    sumKan1 = kan1Start + vel1;
                    sumKan2 = kan2Start + vel2;
                }
                return "Yes";
            }
            else
            {
                return "No";
            }
        }
    }
}