#include <stdio.h>
#include <string.h>

int main() {
    char password[16];
    int passcheck = 0;

    printf("Enter the password: ");
    fgets(password, sizeof(password), stdin);           
    password[strcspn(password, "\n")] = '\0';            

    if (strcmp(password, "nikhil123") == 0) {
        printf("Access Granted\n");
        passcheck = 1;
    } else {
        printf("Wrong password\n");
    }

    if (passcheck) {
        printf("You are allowed\n");
    }

    return 0;
}
