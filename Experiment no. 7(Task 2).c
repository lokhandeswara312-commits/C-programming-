/*Name:- Swara Lokhande
 Class:- F.E(Civil Engineering)
 UIN:- 251C043
 Div:- B
 Roll no:- 30*/ 
 
 #include <stdio.h> 
 
 int main() {
     int a[10][10], b[10][10],sum[10][10];
     int r, c;
     printf("Emter number of rows: ");
     scanf("%d", &r);
     
     printf("Enter elements of columns: ");
     scanf("%d", &c);
     printf("\nEnter elements of Matrix A:\n");
     for(int i =0; i < r; i++) {
         for(int j = 0; j < c; j++) {
             printf("A[%d][%d] =", i, j);
             scanf("%d", &a[i][j]);
         }
     }
     printf("\nEnter elements of Matix B:\n");
     for (int i = 0; i < r; i++) {
         for(int j = 0; j < c; j++) {
             printf("B[%d][%d] = ", i, j);
             scanf("%d", &b[i][j]);
         }
     }
     for(int i = 0; i < r; i++) {
         for(int j = 0; j < c; j++) {
             sum[i][j] = a[i][j] + b[i][j];
         }
     }
     printf("\nSum of the two matrices:\n");
     for(int i = 0; i < r; i++) {
         for(int j = 0; j < c; j++) {
             printf("%d\t", sum[i][j]);
         }
     }
     printf("\n");
}