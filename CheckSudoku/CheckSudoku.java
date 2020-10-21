import java.util.*;
/**
 * An N-sized Sudoku is a game where a square grid of size N^2 by N^2 is divided into N^2 smaller
 * square grids of size N by N. In order to win the game, each of the small grids as well as each
 * row and column of the bigger grid must contain all integers from 1 to N^2 without repetition.
 *
 * This programs takes as input the dimension N of a Sudoku game as well as an N^2 by N^2 array of ints
 * and tells whether the array is a valid Sudoku solution or not. The program prints "YES" if the entered
 * array solves the Sudoku problem and "NO" otherwise. A couple of sample inputs and outputs are shown below
 * in the code.
 */
public class CheckSudoku {
    public static boolean checkRowsAndColumns(int[][] matrix) {
        /* Check that each row and column of a square matrix of length
        n contains all numbers from 1 to n. */
        int n = matrix.length;
        int[] targetArray = new int[n];
        for (int i = 0; i < n; i++) {
            targetArray[i] = i + 1;
        }

        int[][] transposedMatrix = new int[n][n]; // transpose matrix to compare columns
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                transposedMatrix[i][j] = matrix[j][i];
            }
        }

        for (int i = 0; i < n; i++) {
            Arrays.sort(matrix[i]);
            Arrays.sort(transposedMatrix[i]);
            if (!Arrays.equals(targetArray, matrix[i]) || !Arrays.equals(targetArray, transposedMatrix[i])) {
                return false;
            }
        }
        return true;
    }

    public static boolean checkSquare(int[][] square) {
        /* Check that a square matrix of length n contains all numbers
        from 1 to n^2 */
        int n2 = square.length * square.length;
        int[] targetArray = new int[n2];
        for (int i = 0; i < n2; i++) {
            targetArray[i] = i + 1;
        }

        int[] squareArray = new int[n2];
        for (int i = 0; i < square.length; i++) {
            for (int j = 0; j < square.length; j++) {
                squareArray[square.length * i + j] = square[i][j];
            }
        }
        Arrays.sort(squareArray);
        return Arrays.equals(squareArray, targetArray);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[][] array = new int[n * n][n * n];
        boolean solvedSquares = true;

        for (int i = 0; i < n * n; i++) {
            for (int j = 0; j < n * n; j++) {
                array[i][j] = scanner.nextInt();
            }
        }

        int[][] square = new int[n][n];
        for (int ii = n; ii > 0; ii--) {
            for (int jj = n; jj > 0; jj--) {
                for (int i = (n - ii) * n; i < (n - ii + 1) * n; i++) {
                    for (int j = (n - jj) * n; j < (n - jj + 1) * n; j++) {
                        square[i - (n - ii) * n][j - (n - jj) * n] = array[i][j];
                    }
                }
                if (!checkSquare(square)) {
                    solvedSquares = false;
                    break;
                }
            }
        }

        if (solvedSquares && checkRowsAndColumns(array)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        /*
        Sample input 1:
        3
        5 8 9 6 7 4 2 1 3
        7 4 3 1 8 2 9 5 6
        1 2 6 9 5 3 8 7 4
        9 3 5 4 2 1 7 6 8
        4 1 2 8 6 7 3 9 5
        6 7 8 3 9 5 1 4 2
        8 6 4 2 1 9 5 3 7
        3 9 7 5 4 8 6 2 1
        2 5 1 7 3 6 4 8 9

        Output:
        YES

        Sample input 2:
        2
        1 1 2 2
        1 1 2 2
        3 3 4 4
        3 3 4 4

        Output:
        NO
         */
    }
}
