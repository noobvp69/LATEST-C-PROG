#include <stdio.h>
#include <string.h>

int main() {
    char password[11];  // 10 characters + null terminator
   
    char ch;
    int i;

   
    printf("Enter your password (10 characters): ");
    
    for(i = 0; i < 10; i++) {
        ch = getchar();  // Read a character from the input
        if (ch == '\n') break;  // Stop if Enter is pressed before 10 characters
        password[i] = ch;
        printf("*");  // Print asterisk to hide the input
    }
    
    password[i] = '\0';  // Null-terminate the password string


  
    
    return 0;
}

