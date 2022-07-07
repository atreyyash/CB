import java.util.*;

public class input {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);     //Initializing Scanner

        int n = s.nextInt();        //Taking n as input

        System.out.println(n);      //Printing n
        
        s.close();      //closing s or Scanner
    }
}