   // program: add two matrices and store the result in a third matrix
   #include <stdio.h>

   // Function to add two matrices and store the result in a third matrix
   void addMatrices(int first[10][10], int second[10][10], int result[10][10], int rows, int cols) {
      for (int i = 0; i < rows; i++) {
         for (int j = 0; j < cols; j++) {
               result[i][j] = first[i][j] + second[i][j];
         }
      }
   }

   // Function to display a matrix
   void displayMatrix(int matrix[10][10], int rows, int cols) {
      for (int i = 0; i < rows; i++) {
         for (int j = 0; j < cols; j++) {
               printf("%d ", matrix[i][j]);
         }
         printf("\n");
      }
   }

   int main() {
      int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];
      int rows, cols;

      printf("Enter the number of rows: ");
      scanf("%d", &rows);

      printf("Enter the number of columns: ");
      scanf("%d", &cols);

      // Input for the first matrix
      printf("Enter elements of the first matrix:\n");
      for (int i = 0; i < rows; i++) {
         for (int j = 0; j < cols; j++) {
               scanf("%d", &firstMatrix[i][j]);
         }
      }

      // Input for the second matrix
      printf("Enter elements of the second matrix:\n");
      for (int i = 0; i < rows; i++) {
         for (int j = 0; j < cols; j++) {
               scanf("%d", &secondMatrix[i][j]);
         }
      }

      // Call the function to add matrices
      addMatrices(firstMatrix, secondMatrix, resultMatrix, rows, cols);

      // Display the matrices and their sum
      printf("\nFirst Matrix:\n");
      displayMatrix(firstMatrix, rows, cols);

      printf("\nSecond Matrix:\n");
      displayMatrix(secondMatrix, rows, cols);

      printf("\nSum of Matrices:\n");
      displayMatrix(resultMatrix, rows, cols);

      return 0;
   }
