import java.util.Arrays;
import java.util.Scanner;

public class MaxPerimeterTriangle {
  private static final Scanner scanner = new Scanner(System.in);

  public static void main(String[] args) {
    System.out.print("Enter the number of sticks: ");
    int n = scanner.nextInt();
    scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
    System.out.print("Enter the lengths of " + n + " sticks: ");
    int[] sticks = new int[n];

    String[] sticksItems = scanner.nextLine().split(" ");
    scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

    for (int i = 0; i < n; i++) {
      int sticksItem = Integer.parseInt(sticksItems[i]);
      sticks[i] = sticksItem;
    }
    //sort the array in acending order
    Arrays.sort(sticks);
    boolean flag = false;
    //set the i value
    for (int i = n - 3; i >= 0; i--) {
      if (sticks[i] + sticks[i + 1] > sticks[i + 2]) {
        System.out.println(
          sticks[i] +
          " " +
          sticks[i + 1] +
          " " +
          sticks[i + 2] +
          " stick lengths create the maximum perimeter triangle"
        );
        flag = true;
        break;
      }
    }
    if (flag == false) {
      System.out.println("-1");
    }
  }
}
