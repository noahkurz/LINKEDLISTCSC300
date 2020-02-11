public class Driver
{
    public static void main(String[] diceroll)
    {
        dice d = new dice(6);

        for(int i = 0; i<10; i++)
        {
        System.out.println(d.roll());
        }
    }
}