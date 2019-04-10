
import java.math.BigInteger;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner input= new Scanner(System.in);
BigInteger  n,a,c;
a=new BigInteger("0");
n=new BigInteger("0");
c=new BigInteger("2520");
n = input.nextBigInteger();
a=(n.divide(c));
        System.out.println(a);   
    }

}
