#include <stdio.h>
#include <string.h>

//functions declaration
void NewAccount();
void AllRecords();

//global variables
int index;

//structs
struct BankAddress{
    char Line1[30];
    char City[30];
};

struct Bank {
    char BankName[50];
    char Branch[50];
    struct BankAddress BAddress;
};

struct Manager {
    char ManagerName[50];
    int ManagerID;
};

struct Address {
    char No[80];
    char City[40];
};

struct AccountHolder {
    char FirstName[30];
    char LastName[30];
    char Nic[13];      // fixed NIC as string
    char Phone[10];
    struct Address Address;
};

// global array of account holders
struct AccountHolder AccountHolder[30] = {
    {"Samantha","Senevirathna","2000123852","0710000000",{"23","Moratuwa"}},
    {"Kasun","Perera","1998456721","0711111111",{"15","Colombo"}},
    {"Nimal","Fernando","1987654321","0712222222",{"45","Galle"}},
    {"Kamal","Silva","1999345678","0713333333",{"12","Kandy"}},
    {"Supun","Jayasinghe","2001456789","0714444444",{"78","Negombo"}},
    {"Ruwan","Gunawardena","1995678123","0715555555",{"34","Kurunegala"}},
    {"Dinesh","Wijesinghe","2000345678","0716666666",{"90","Matara"}},
    {"Chathura","Bandara","1999123456","0717777777",{"56","Anuradhapura"}},
    {"Saman","Karunaratne","1989345612","0718888888",{"21","Ratnapura"}},
    {"Thilina","Peris","1997564321","0719999999",{"67","Kalutara"}},
    {"Sanduni","Perera","2002234567","0721111111",{"11","Moratuwa"}},
    {"Nadeesha","Fernando","1998234567","0722222222",{"44","Colombo"}},
    {"Ishara","Silva","2001345678","0723333333",{"39","Gampaha"}},
    {"Dilshan","Jayawardena","1996456789","0724444444",{"52","Kandy"}},
    {"Rashmi","Senanayake","2003456789","0725555555",{"18","Galle"}},
    {"Tharindu","Ekanayake","1997234567","0726666666",{"73","Kurunegala"}},
    {"Pavithra","Bandara","2000567891","0727777777",{"29","Matara"}},
    {"Gayan","Rajapaksha","1998567890","0728888888",{"61","Hambantota"}},
    {"Nisala","Wijeratne","2001678901","0729999999",{"7","Badulla"}},
    {"Amaya","Karunasinghe","1999345670","0701234567",{"88","NuwaraEliya"}}
};

int main() {
    int number;

    struct Bank bank = {"Sampath Bank", "Colombo", {"No 123, Main Street", "Colombo"}};
    struct Manager manager = {"Kasun kumara", 12345};

    printf("\t This is your Bank: %s\n", bank.BankName);
    printf("Branch: %s\n", bank.Branch);
    printf("Bank Address: %s, %s\n", bank.BAddress.Line1, bank.BAddress.City);
    printf("Manager Name: %s\n", manager.ManagerName);
    printf("Manager ID: %d\n", manager.ManagerID);

    printf("WELCOME TO YOUR PERSONAL BANK ACCOUNT SYSTEM\n");
    printf("This is the main menu. Enter the number of the action you want to perform:\n");
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
    printf("\n \t---------------------------------------------\n");

    printf("Now enter the number you want to perform:\n");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("You have selected: Add New Account Record\n");
            NewAccount();
            break;
        case 2:
            printf("You have selected: Display All Records\n");
            AllRecords();
            break;
        case 3:
            printf("You have selected: Search Record\n");
            break;
        case 4:
            printf("You have selected: Modify Record\n");
            break;
        case 5:
            printf("You have selected: Delete Record\n");
            break;
        case 6:
            printf("You have selected: Calculate Total and Average Balance\n");
            break;
        case 7:
            printf("You have selected: Find Highest and Lowest Balance\n");
            break;
        case 8:
            printf("You have selected: Count Records by Account Type\n");
            break;
        case 9:
            printf("You have selected: Display Concatenated Full Names\n");
            break;
        case 10:
            printf("You have selected: Check Name Substring Existence\n");
            break;
        case 11:
            printf("Exiting the program. Goodbye!\n");
            return 0;
        default:
            printf("Invalid selection. Please enter a number between 1 and 11.\n");
    }

    return 0;
}

//functions

void NewAccount() {
    int press;

    for (index=20; index <=30; index++) {
        printf("This is the function to add a new account record.\n");
        printf("Please enter the details of the new account.\n");

        printf("First Name: ");
        scanf("%s", AccountHolder[index].FirstName);

        printf("Last Name: ");
        scanf("%s", AccountHolder[index].LastName);

        printf("NIC: ");
        scanf("%s", AccountHolder[index].Nic);

        printf("Phone: ");
        scanf("%s", AccountHolder[index].Phone);

        printf("Address No: ");
        scanf("%s", AccountHolder[index].Address.No);

        printf("City: ");
        scanf("%s", AccountHolder[index].Address.City);

        printf("Your new account has been successfully added.\n");

        printf("If you want to add another new account press 1 or go to all see all records enter 2 or go to main menu press 2 : ");
        scanf("%d", &press);

        if (press == 1) {
            continue;
        } else if (press == 2) {
            AllRecords();
            break; // exit from this function
        } else {
            printf("Invalid input. Returning to main menu.\n");
            break;
        }
    }

}


void AllRecords() {
    printf("This is the function to display all account records.\n");
    printf("Here are all the account records:\n");

    for (int j = 0; j < 30; j++) {
        printf("\nRecord %d\n", j + 1);
        printf("First Name: %s\n", AccountHolder[j].FirstName);
        printf("Last Name: %s\n", AccountHolder[j].LastName);
        printf("NIC: %s\n", AccountHolder[j].Nic);
        printf("Phone: %s\n", AccountHolder[j].Phone);
        printf("Address No: %s\n", AccountHolder[j].Address.No);
        printf("City: %s\n", AccountHolder[j].Address.City);
    }

    main(); // back to main menu
}
