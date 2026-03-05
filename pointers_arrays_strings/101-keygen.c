#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * generate_password - Generates a random password that would be valid
 * 
 * Return: pointer to generated password string
 */
char *generate_password(void)
{
    static char password[12];
    int i;
    int sum = 0;
    char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    
    /* Initialize random seed */
    srand(time(NULL));
    
    /* Generate 8 character password */
    for (i = 0; i < 8; i++)
    {
        password[i] = charset[rand() % 62];
        sum += password[i];
    }
    
    /* Add a checksum character to make it valid */
    password[8] = charset[sum % 62];
    password[9] = '\0';
    
    return password;
}

/**
 * main - Entry point for keygen
 * 
 * Return: Always 0
 */
int main(void)
{
    char *password;
    
    password = generate_password();
    printf("%s", password);
    
    return (0);
}
