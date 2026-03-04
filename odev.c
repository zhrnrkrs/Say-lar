// c program to take an integer
// as inpu and print it 
#include <stdio.h>

// Driver code 
int main()
{
    //Declare the varlables
    int num;
    
    // Input the integer
    printf("Enter the integer: ");
    scanf("%d", &num);
    
    //Display the integer
    printf("Entered integer is: %d" , num);
    
    return 0;
}
 
#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter first integer\n");
    scanf("%d", &num1);
    printf("Enter second integer\n");
    scanf("%d", &num2);

    int sum = num1 + num2;

    printf("Sum is %d\n",sum);

    return 0;
}

#include <stdio.h>

int main() {    
    int a = 5, b = 10, temp;

    // Swapping values of a and b
    temp = a;
    a = b;
    b = temp;   
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
