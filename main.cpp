#include <iostream>
#include <cstring>

using namespace std;
int check_vowel(char c){
        switch(c) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                return 1;
            default:
                return 0;
        }

}
int main() {
    char name[100], tName[100];
    cin.getline(name, 100);
    int j = 1, k = 0;
    for (int i = 0; name[i] != '\0'; ++i) {
            if(check_vowel(name[i]) == 0){
                tName[k] = '.';
                tName[j] = toupper(name[i]);
//                if(tName[j] >97){
//
//                    tName[j] -= 32;
//                }


                j+=2;
                k+=2;
            }
    }
    strcpy(name, tName);
    cout << name ;
    return 0;
}