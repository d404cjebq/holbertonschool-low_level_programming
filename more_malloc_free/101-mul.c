#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void print_error_and_exit(void) {
    printf("Error\n");
    exit(98);
}

int is_valid_number(char *str) {
    if (str == NULL || *str == '\0')
        return 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i]))
            return 0;
    }
    return 1;
}

char *multiply_strings(char *num1, char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len_result = len1 + len2;
    int *result = calloc(len_result, sizeof(int));
    if (result == NULL)
        return NULL;
    
    // Multiply digit by digit
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int product = digit1 * digit2;
            int pos1 = i + j;
            int pos2 = i + j + 1;
            int sum = product + result[pos2];
            
            result[pos2] = sum % 10;
            result[pos1] += sum / 10;
        }
    }
    
    // Convert result array to string
    int start = 0;
    while (start < len_result && result[start] == 0) {
        start++;
    }
    
    if (start == len_result) {
        free(result);
        char *zero = malloc(2);
        if (zero == NULL)
            return NULL;
        zero[0] = '0';
        zero[1] = '\0';
        return zero;
    }
    
    char *result_str = malloc(len_result - start + 1);
    if (result_str == NULL) {
        free(result);
        return NULL;
    }
    
    for (int i = start; i < len_result; i++) {
        result_str[i - start] = result[i] + '0';
    }
    result_str[len_result - start] = '\0';
    
    free(result);
    return result_str;
}

int main(int argc, char *argv[]) {
    // Check number of arguments
    if (argc != 3) {
        print_error_and_exit();
    }
    
    // Check if arguments contain only digits
    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        print_error_and_exit();
    }
    
    // Multiply the numbers
    char *result = multiply_strings(argv[1], argv[2]);
    if (result == NULL) {
        print_error_and_exit();
    }
    
    // Print the result
    printf("%s\n", result);
    
    // Clean up
    free(result);
    
    return 0;
}
