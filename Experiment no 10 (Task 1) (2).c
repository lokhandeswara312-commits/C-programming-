/*Name:- Swara Lokhande
  Class:- F.E(Civil Engineering
  UIN:- 251C043
  Div:- B*
  Roll no:- 30*/ 
  
 #include <stdio.h>

int main() {
    int a, b, sum;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    sum = *p1 + *p2;

    printf("Sum = %d", sum);

    return 0;
}