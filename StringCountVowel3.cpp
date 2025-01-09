# include <iostream>
using namespace std;

class Strings
{
    public:
        int CountVowel(char *Str);
};

int Strings :: CountVowel(char *Str)
{
    int iCount = 0;

    while (*Str != '\0')
    {
        if (*Str == 'a' || *Str == 'e' || *Str == 'i' || *Str == 'o' || *Str == 'u' || *Str == 'A' || *Str == 'E' || *Str == 'I' || *Str == 'O' || *Str == 'U')
        {
            iCount++;
        }
        Str++;
    }
    return iCount;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    cout << "Enter the string: " << endl;
    cin.getline(Arr,50);

    Strings *obj = new Strings();

    iRet = obj->CountVowel(Arr);
    cout << "Number of vowels are: " << iRet << endl;

    return 0;
}