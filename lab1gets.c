#include <stdio.h>
#include <string.h>

int main() {
    void vulnerable();
    vulnerable();
    return 0;
}
void vulnerable() {
    char buffer[20];
    int passcheck = 0;

    printf("Enter the password: ");
    gets(buffer);  

    if (strcmp(buffer, "nikhil123") == 0) {
        printf("Access Granted\n");
        passcheck = 1;
    } else {
        printf("Wrong password\n");
    }

    if (passcheck) {
        printf("You are allowed to work\n");
    }
}
