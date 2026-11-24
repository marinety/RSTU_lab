#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int main() {
    char s[256];
    cout << "Введите строку (в конце текста точку):\n";
    gets(s);

    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    bool hasDot = false;
    if (len > 0 && s[len - 1] == '.') {
        hasDot = true;
        s[len - 1] = '\0';
    }

    char words[128][256];
    int wordCount = 0;
    char* token = strtok(s, " ");
    while (token != NULL) {
        strcpy(words[wordCount], token);
        wordCount++;
        token = strtok(NULL, " ");
    }

    int letterIndices[128];
    int letterCount = 0;
    for (int i = 0; i < wordCount; i++) {
        if (isalpha((unsigned char)words[i][0])) {
            letterIndices[letterCount] = i;
            letterCount++;
        }
    }

    for (int i = 0; i < letterCount - 1; i++) {
        for (int j = 0; j < letterCount - i - 1; j++) {
            int idx1 = letterIndices[j];
            int idx2 = letterIndices[j + 1];

            if (strcmp(words[idx1], words[idx2]) > 0) {
                char temp[256];
                strcpy(temp, words[idx1]);
                strcpy(words[idx1], words[idx2]);
                strcpy(words[idx2], temp);
            }
        }
    }

    cout << "\nРезультат обработки:\n";
    for (int i = 0; i < wordCount; i++) {
        cout << words[i];
        if (i < wordCount - 1) {
            cout << " ";
        }
    }
    if (hasDot) {
        cout << ".";
    }
    cout << endl;

    return 0;
}