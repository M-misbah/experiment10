#include<stdio.h>
/*Name:Misbah Shaikh
roll no:51
UIN:241A060
Branch:AI&DS
*/
int main() {
int num1, num2, sum;
int *ptr1,*ptr2;
printf("\t\t***Addition using Pointers***\n\n");
// Input two numbers 
printf("Enter First Number: ");
scanf("%d", &num1);
printf("Enter Second Number: ");
scanf("%d", &num2);
// Assign the addresses of numi and num2 to the pointers
ptr1 = &num1;
ptr2 = &num2;
sum =*ptr1+*ptr2;
// Display the result
printf("Sum of %d and %d is: %d\n", num1, num2, sum);
return 0;
}
/*EXPECTED OUTPUT
***Addition using Pointers***
Enter First Number: 14
Enter Second Number: 51
Sum of 14 and 41 is: 65 */