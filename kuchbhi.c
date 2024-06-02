#include <stdio.h>
#include <string.h>

void compress(char* word, char* comp) {
    int i = 0, j = 0, len = strlen(word);
    
    while (i < len) {
        char ch = word[i];
        int count = 1;
        while (i + count < len && count < 9 && word[i + count] == ch) {
            count++;
        }
       
        comp[j++] = '0' + count; 
        comp[j++] = ch;
        i += count;
    }

    comp[j] = '\0';
}

int main() {
    char word1[] = "abcde";
    char comp1[100];
    compress(word1, comp1);
    printf("%s\n", comp1);  // Output: "1a1b1c1d1e"
    
    char word2[] = "aaaaaaaaaaaaaabb";
    char comp2[100];
    compress(word2, comp2);
    printf("%s\n", comp2);  // Output: "9a5a2b"
    
    return 0;
}
