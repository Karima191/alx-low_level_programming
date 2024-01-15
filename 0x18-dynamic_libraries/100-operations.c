#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	return (a + b);
}
int sub(int a, int b)
{
	return (a - b);
}
int mul(int a, int b)
{
	return (a * b);
}
int my_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error : Division by zero\n");
		return(0);
	}
	return (a / b);
}
int mod(int a, int b)
{
	 if (b == 0)
        {
                printf("Error : Division by zero\n");
                return(0);
        }
	return (a % b);
}
int main()
{
	 int result_add = add(5, 3);
    printf("Addition: %d\n", result_add);

    // Test the sub function
    int result_sub = sub(8, 3);
    printf("Subtraction: %d\n", result_sub);

    // Test the mul function
    int result_mul = mul(4, 5);
    printf("Multiplication: %d\n", result_mul);

    // Test the my_div function
    int result_div = my_div(10, 2);
    printf("Division: %d\n", result_div);

    // Test the mod function
    int result_mod = mod(13, 5);
    printf("Modulus: %d\n", result_mod);

    return 0;
}
