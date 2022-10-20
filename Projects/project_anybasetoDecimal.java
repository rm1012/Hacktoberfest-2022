import java.util.Scanner;

public class project_anybasetoDecimal {
    public static void main(String args[]){
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        int base = scn.nextInt();
        int result=0;
        int basPower = 1;
        while(n>0){
            int rem = n%10;
            n=n/10;
            result += rem*basPower;
            basPower*=base;
        }
        System.out.println(result);
    }
}
