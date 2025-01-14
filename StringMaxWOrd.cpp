#include <iostream>
#include <cstring> 
using namespace std;

class String {
public:
    void MaxWord(const char* Str, char* Max) {
        int currLen = 0, maxLen = 0, start = 0, maxStart = 0;

        for (int i = 0; Str[i] != '\0'; i++) {
            if (Str[i] != ' ' && Str[i] != '\n') {
                if (currLen == 0) {
                    start = i; 
                }
                currLen++;
            } else {
                if (currLen > maxLen) {
                    maxLen = currLen; 
                    maxStart = start; 
                }
                currLen = 0; 
            }
        }

        if (currLen > maxLen) {
            maxLen = currLen;
            maxStart = start;
        }

        for (int i = 0; i < maxLen; i++) {
            Max[i] = Str[maxStart + i];
        }
        Max[maxLen] = '\0'; 
    }
};

int main() {
    char Arr[100], MaxWord[100];

    cout << "Enter the string: " << endl;
    cin.getline(Arr, 100); 

    String* obj = new String();
    obj->MaxWord(Arr, MaxWord);

    cout << "The longest word is: " << MaxWord << endl;
    cout << "Its length is: " << strlen(MaxWord) << endl;

    delete obj; 

    return 0;
}
