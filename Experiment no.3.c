/*Name:-Swara Lokhande
  Class:- F.E(Civil Engineering)
  UIN:-251CO43
  Div:- B
  Roll no:- 30*/
  
  #include <stdio.h> 
  
  int main() {
      int choice;
      float num1, num2, result;
      
      start:
        
        printf("------MENU DRIVEN CALCULATOR------");
        
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", choice);
        
        if (choice == 5) {
            printf("Exiting the Program...\n");
            return 0;
        }
        
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result = %2f\n", result);
                break;
                
            case 2: 
                result = num1 - num2;
                printf("Result = %2f\n", result);
                break;
                
            case 3: 
                result = num1 * num2;
                printf("Result = %2f\n", result);
                break;
                
            case 4: 
                if (num2 == 0) {
                    printf("Error! Division by zero not allowed.\n");
                } else { 
                    result = num1 / num2;
                    printf("Result = %2f\n", result);
                }
                break;
                
            default:
                printf("Invaild choice! Please try again.\n");
        } 
        goto start;
        
        return 0;
  }
  