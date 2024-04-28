#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main() {
    int val = 0; // Initialize val
    char s[6]; // Increased size to accommodate null terminator
    
    printf("Enter a four-character string: ");
    scanf("%s", s); // Use %s directly for reading string
    
    for (int i = 0; i < strlen(s) - 1; i++) {
        val += abs(s[i + 1] - s[i]);
    }

    printf("Absolute difference sum: %d\n", val);
    
    return 0;
}

