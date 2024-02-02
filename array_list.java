import java.util.ArrayList;

public class array_list {
    public static void main(String[] args) {
        ArrayList<String> food = new ArrayList<String>();

        food.add("Egg");
        food.add("rice");
        food.add("First Food");
        food.add("Pizza");
        food.set(0, "Birany");
        // food.remove(1);
        // food.clear();
        for(int i=0;i<food.size();i++)
            System.out.println(food.get(i));
    }
}
