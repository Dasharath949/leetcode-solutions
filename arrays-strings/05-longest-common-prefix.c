#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != current || strs[j][i] == '\0') {
                char* result = malloc((i + 1) * sizeof(char));

                strncpy(result, strs[0], i);
                result[i] = '\0';

                return result;
            }
        }
    }

    char* result = malloc((strlen(strs[0]) + 1) * sizeof(char));
    strcpy(result, strs[0]);

    return result;
}

int main() {

    // Test Case 1
    char* strs1[] = {"flower", "flow", "flight"};

    char* result1 = longestCommonPrefix(strs1, 3);

    printf("Test Case 1: %s\n", result1);

    free(result1);

    // Test Case 2
    char* strs2[] = {"dog", "racecar", "car"};

    char* result2 = longestCommonPrefix(strs2, 3);

    printf("Test Case 2: %s\n", result2);

    free(result2);

    return 0;
}