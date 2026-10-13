import java.io.IOException;

public class Exception_Handling {
    public static void check_age(int age) throws IOException {
        if (age < 18) {
            throw new IOException ("Access Denied you must 18 years old");
        }
        else 
        {
            System.out.println("Valid age, you are granted");
        }
    }


    public static void main(String[] args) {
        try {
            check_age(11);
        }
        catch (IOException e) 
        {
            System.out.println("Caught exception " + e.getMessage());
        }
    }
}
