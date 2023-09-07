// 2023-09-06 22:37:35

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str_1[]  = "Knowledge nay estimable questions repulsive daughters";
    int vowel_count = 0;
    cout << "Vowels : ";
    for (int i=0; i<strlen(str_1); i++){
        if (str_1[i] == 'a' || str_1[i] == 'e' || str_1[i] == 'i' || str_1[i] == 'o' || str_1[i] == 'u'||
            str_1[i] == 'A' || str_1[i] == 'E' || str_1[i] == 'I' || str_1[i] == 'O' || str_1[i] == 'U') {
                
            cout <<str_1[i]<<"  ";
            vowel_count += 1;
        }
    }
    cout <<endl<<"Vowel Count : "<<vowel_count;
}