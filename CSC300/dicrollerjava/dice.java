import java.util.Random;
public class dice 
{
    private int sides;

    public dice(int sides)
    {
        this.sides = sides;

    }

    public int roll()
    {
        Random r = new Random();
        return r.nextInt(this.sides)+1;
    }
}