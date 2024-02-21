/**
 * dumy
 */
interface car {

    public void carengine();
}

class totyta implements car{
    public void carengine(){
        System.out.println("Car Engine Started");
    }
}


public class dumy{
    public static void main(String[] args) {
        totyta t_c   = new totyta();
        t_c.carengine();
    }
}
