/*Name:- Swara Lokhande
  Class:- F.E(Civil Engineering
  UIN:- 251C043
  Div:- B*
  Roll no:- 30*/ 
  
  #include <stdio.h>
  #include <string.h>
  
  int main() {
      char str[100];
      int length;
      printf("Enter s string: ");
      gets(str);
      
      length = strlen(str);
      
      printf("Length of the string = %d\n", length);
      
      return 0;
  }
