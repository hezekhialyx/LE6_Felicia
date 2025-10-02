#include <stdio.h>

int main(){
int num1,num2;
int chossy;

while(1){
printf("\n--Multiple Functions To Perform Arithmetic Operations--\n");
printf("  Enter your first number: ");
scanf("%d", &num1);

printf("  Enter your second number: ");
scanf("%d", &num2);

printf("\nChoose an Operation\n");
printf("(1) Addition\n");
printf("(2) Subtraction\n");
printf("(3) Multiplication\n");
printf("(4) Division\n");
printf("(5) Exit Program\n");

printf("\nChoose your operations(1-5): ");
scanf("%d", &chossy);


    if(chossy == 5){
            printf("Existing Program!....");
            break;
    }

    else if(chossy == 1){
        printf("\n%d + %d = %d\n", num1,num2,num1 + num2);
        }
    else if(chossy == 2){
        printf("\n%d - %d = %d\n", num1,num2,num1 - num2);
    }else if(chossy == 3){
        printf("\n%d * %d = %d\n", num1,num2,num1 * num2);
         }
         else if(chossy == 4){
         if(num2 == 0){
             printf("Invalid\n");
         }else{
             printf("\n%d / %d = %d\n", num1,num2,num1 / num2);
         }
        
    }
    else{
        printf("Invalid choice, pick between 1 - 5");
    }
}
    return 0;
}