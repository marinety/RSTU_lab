#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

bool isLetter(char c) {
    unsigned char uc = c;
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (uc >= 128);
}

void processString(char s[]) {
    char words[100][256]; 
    int count = 0;        
    int len = strlen(s);  

    int i = 0;
    while (i < len && s[i] != '.') {
        while (i < len && s[i] == ' ') {
            i++;
        }
    
        if (i < len && s[i] != '.') {
            int j = 0;
            while (i < len && s[i] != ' ' && s[i] != '.') {
                words[count][j] = s[i];
                i++;
                j++;
            }
            words[count][j] = '\0'; 
            count++;
        }
    }

    for (int a = 0; a < count - 1; a++) {
        for (int b = a + 1; b < count; b++) {
            if (isLetter(words[a][0]) && isLetter(words[b][0])) {
                if (strcmp(words[a], words[b]) > 0) {
                    char temp[256];
                    strcpy(temp, words[a]);
                    strcpy(words[a], words[b]);
                    strcpy(words[b], temp);
                }
            }
        }
    }

    int pos = 0;
    for (int k = 0; k < count; k++) {
        for (int j = 0; words[k][j] != '\0'; j++) {
            s[pos] = words[k][j];
            pos++;
        }
        if (k < count - 1) {
            s[pos] = ' ';
            pos++;
        }
    }
    s[pos] = '.';      
    s[pos + 1] = '\0'; 
}

int main() {
    char s[256]; 

    cout << "Введите строку (в конце точка):\n";
    fgets(s, 256, stdin);
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    processString(s);
    cout << "Результат:" << s << endl;
    return 0;
}
