
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner in =new Scanner(System.in);
        long a,n;
        n=in.nextLong();
        a=((6*n*(n+1))/2)+1;
        System.out.println(a);
    }
}
