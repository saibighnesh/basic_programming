import java.util.Scanner;
public class AddDigitsOfNumbers {
    public static void main(String args[]){

        Scanner s = new Scanner(System.in);
        System.out.print("input a integer Number : ");
        int num = s.nextInt();
        int ans=0 ,n=num;
        for (int i=0; num>0; i++){

              ans += num%10;
              num /= 10;

        }
           System.out.println("Sum of Digits of "+n+" = "+ans);

           s.close();
    }
    
}
