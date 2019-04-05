import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
       Scanner input= new Scanner(System.in);
       int n,a=0,b,c;
       String s;
      
         s=input.nextLine();
           n=input.nextInt();
      
            if(null!=s)
                 switch (s) {
            case "February":
                a=2;
                break;
            case "January":
                a = 1;
                break;
            case "March":
                a=3;
                break;
            case "April":
                a=4;
                break;
            case "May":
                a=5;
                break;
            case "June":
                a=6;
                break;
            case "July":
                a=7;
                break;
            case "August":
                a=8;
                break;
            case "September":
                a=9;
                break;
            case "October":
                a=10;
                break;
            case "November":
                a=11;
                break;
            case "December":
                a=12;
                break;
            default:
                break;
        }

c=(a+n)%12;
        switch (c) {
            case 1:
                System.out.println("January");
                break;
            case 2:
                System.out.println("February");
                break;
            case 3:
                System.out.println("March");
                break;
            case 4:
                System.out.println("April");
                break;
            case 5:
                System.out.println("May");
                break;
            case 6:
                System.out.println("June");
                break;
            case 7:
                System.out.println("July");
                break;
            case 8:
                System.out.println("August");
                break;
            case 9:
                System.out.println("September");
                break;
            case 10:
                System.out.println("October");
                break;
            case 11:
                System.out.println("November");
                break;
            case 0:
                System.out.println("December");
                break;
            default:
                break;
        }
}
        
}