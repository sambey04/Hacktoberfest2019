// Java program for left rotation of matrix by 180 
import java.util.*; 

class RotateMatrixBy180Degree { 
	static int R = 4, C = 4, t = 0; 

	// Function to rotate the 
	// matrix by 180 degree 
	static void reverseColumns(int arr[][]) 
	{ 
		for (int i = 0; i < C; i++) { 
			for (int j = 0, k = C - 1; j < k; j++, k--) { 
				t = arr[j][i]; 
				arr[j][i] = arr[k][i]; 
				arr[k][i] = t; 
			} 
		} 
	} 

	// Function for transpose of matrix 
	static void transpose(int arr[][]) 
	{ 
		for (int i = 0; i < R; i++) { 
			for (int j = i; j < C; j++) { 
				t = arr[i][j]; 
				arr[i][j] = arr[j][i]; 
				arr[j][i] = t; 
			} 
		} 
	} 

	// Function for display the matrix 
	static void printMatrix(int arr[][]) 
	{ 
		for (int i = 0; i < R; i++) { 
			for (int j = 0; j < C; j++) 
				System.out.print(arr[i][j] + " "); 
			System.out.println(); 
		} 
	} 

	// Function to anticlockwise 
	// rotate matrix by 180 degree 
	static void rotate180(int arr[][]) 
	{ 
		transpose(arr); 
		reverseColumns(arr); 
		transpose(arr); 
		reverseColumns(arr); 
	} 

	// Driver Code 
	public static void main(String[] args) 
	{ 
		int[][] arr = { { 1, 2, 3, 4 }, 
						{ 5, 6, 7, 8 }, 
						{ 9, 10, 11, 12 }, 
						{ 13, 14, 15, 16 } }; 

		rotate180(arr); 
		printMatrix(arr); 
	} 
} 
