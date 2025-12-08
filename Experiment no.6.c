/*Name:- Swara Lokhande
 Class:- F.E(Civil Engineering)
 UIN:- 251C043
 Div:- B
 Roll no:- 30*/ 
 
 #include <stdio.h> 
 void counter();
 int main()
 {
     counter();
     counter();
     counter();
     counter();
     return 0;
 }
 void counter()
 {
     static int count = 0;
     count++;
     printf("Function is called %d time(s)\n", count);
 }