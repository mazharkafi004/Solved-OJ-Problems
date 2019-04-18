
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
          Scanner input= new Scanner(System.in);
         int n,k,a,b,c;
         n=input.nextInt();
          k=input.nextInt();
  
    a=k-(2*n);
    if(n>=a) {
        b=a;
    }
    else {
        b=n;
    }
    c=n-b;
        System.out.println(c);
    }
}
