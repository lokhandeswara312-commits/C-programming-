/*Name: Swara Lokhande 
  Class: F.E(Civil Engineering)
  UIN:- 251C043
  Div:- B
  Roll no:- 30*/ 
  
  #include <stdio.h>

int main() {
    int arr[50], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = &arr[n - 1];  // pointer set to last element

    printf("Array elements in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", *ptr);
        ptr--;  
    }

    return 0;
}