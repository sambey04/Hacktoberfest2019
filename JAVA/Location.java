import java.util.Scanner;

public class Location {
    private int row, col;
    private double maxVal;
    //main method for class
    public static void main(String[] args) {
        boolean validation = true;
        Scanner input = new Scanner(System.in);
        int row = 0;
        int col = 0;

        while (validation) {
            System.out.print("Enter the number of rows and columns in the array: ");
            row = input.nextInt();
            col = input.nextInt();

            if (row < 1 || col < 1) {
                System.out.println("Invalid input, try again.");
            }
            else {
                validation = false;
            }
        }

        double[][] array = new double[row][col];

        System.out.println("Enter the array:");
        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                array[i][j] = input.nextDouble();
            }
        }

        Location location = Location.locateLargest(array);
        System.out.println("The location of the largest element is "
                + location.getMaxVal() + " at (" + location.getRow() + "," + location.getCol() + ")");
    }
    //constructor for the location object
    public Location (int row, int col, double maxVal) {
        this.row = row;
        this.col = col;
        this.maxVal = maxVal;
    }

    //method to locate largest element and return Location object
    public static Location locateLargest(double[][] a) {
        int row = 0;
        int col = 0;
        double maxVal = a[row][col];

        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++ ) {
                if (maxVal < a[i][j]) {
                    maxVal = a[i][j];
                    row = i;
                    col = j;
                }
            }
        }
        return new Location(row, col, maxVal);
    }

    //getters for private variables
    public double getMaxVal() {
        return maxVal;
    }
    public int getRow() {
        return row;
    }

    public int getCol() {
        return col;
    }
}