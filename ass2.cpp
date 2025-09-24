// C program to input and display all units this semester
#include <stdio.h>

int main() {
char units[8][50];  // 8 units, each up to 50 characters

printf("Enter the 8 units for this semester:\n");  

for (int i = 0; i < 8; i++) {  
    printf("Unit %d: ", i + 1);  
    scanf(" %[^\n]", units[i]);  // reads string with spaces  
}  

printf("\nThis Semester's Units:\n");  
printf("----------------------\n");  

for (int i = 0; i < 8; i++) {  
    printf("%d. %s\n", i + 1, units[i]);  
}  

return 0;

}