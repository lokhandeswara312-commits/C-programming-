/*Name:- Swara Lokhande
 Class:- F.E(Civil Engineering)
 UIN:- 251C043
 Div:- B
 Roll no:- 30*/ 
 
 #include <stdio.h> 
 long long factorial_iterative(int n) {
    long long fact = 1;
    for (int = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
 }
 
 long long factorial_recursive(int n) {
    if (n == 0 || n == 1 )
        return 1;
    else
        return n * factorial_recursive(n - 1);
        
 }
 
 int main() {
     int num;
     printf("Enter a number: ");
     scanf("%d", &num);
     printf("\nFactorial of %d using iterative method = %d", num, factorial_iterative(num));
     printf("\nFactorial of %d using recursive method = %d", num, factorial_recursive(num));
return 0;
 }