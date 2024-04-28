#include<stdio.h>
#include<string.h>

int maximumLengthSubstring(char* s) {
    int count = 0;
    int ans = 0;
    for (int i = 0; i < strlen(s); i++) {
        for (int j = i + 1; j <= strlen(s); j++) {
            int distinct[256] = {0}; // Assuming ASCII characters
            int unique = 0;
            for (int k = i; k < j; k++) {
                if (!distinct[s[k]]) {
                    distinct[s[k]] = 1;
                    unique++;
                }
            }
            if (unique == j - i) {
                count = j - i;
                if (count > ans)
                    ans = count;
            }
        }
    }
    return ans;
}

int main() {
    char s[100];
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin); // Use fgets to read a line
    printf("The answer is %d\n", maximumLengthSubstring(s));
    return 0;
}
//bcbbbcba