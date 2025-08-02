#include<stdio.h>
int main()
{
    int num1,num2;
    float result;
    int operators;
    //ENTERING TWO INPUTS

    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    //CHOOSING DESIRED OPERATOR (ADDITION,SUBTRACTION,MULTIPLICAITON & DIVISION)

    printf("\n======Calculator Menu======");
    printf("\n1.Addition (+) : ");
    printf("\n2.Subtraction (-) : ");
    printf("\n3.Multiplication (*) : ");
    printf("\n4.Division (/) : \n");
    printf("\nSelect an operator :");
    scanf("%d",&operators);
    //COMPUTING THE RESULTS THROUGH SWITCH CASE
    
    switch(operators){
        case 1:
        result = num1 + num2;
        printf("Result = %.2f",result);
        break;

        case 2:
        result = num1 - num2;
        printf("Result = %.2f",result);
        break;

        case 3:
        result = num1 * num2;
        printf("Result = %.2f",result);
        break;

        case 4:
        result = num1 / num2;
        printf("Result = %.2f",result);
        break;

        default:
        printf("Invalid operator chosen");
    }
    return 0;
}