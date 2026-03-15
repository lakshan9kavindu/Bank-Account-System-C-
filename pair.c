#include <stdio.h>
#include <string.h>


int main() {
    int number;

    printf("WELCOME TO YOUR PERSONAL BANK ACCOUNT SYSTEM\n");
    printf("This is the main menu and enter the number that you want to perform\n");
    printf("\n \t Add New Account Record \t\t - 01");
    printf("\n \t Display All Records \t\t\t - 02");
    printf("\n \t Search Record \t\t\t\t - 03");
    printf("\n \t Modify Record \t\t\t\t - 04");
    printf("\n \t Delete Record \t\t\t\t - 05");
    printf("\n \t Calculate Total and Average Balance \t - 06");
    printf("\n \t Find Highest and Lowest Balance \t - 07");
    printf("\n \t Count Records by Account Type \t\t - 08");
    printf("\n \t Display Concatenated Full Names \t - 09");
    printf("\n \t Check Name Substring Existence \t - 10");
    printf("\n \t Exit\t\t\t\t\t - 11");
    printf("\n \t---------------------------------------------");
    printf("\n");

    printf("Now enter the number that you want to perform: in the next line\n");
    scanf("%d", &number);
}