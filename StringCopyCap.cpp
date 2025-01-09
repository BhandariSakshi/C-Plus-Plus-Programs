#include <iostream>
using namespace std;

class StringX
{
public:
    void StrCpyCapX(char *Src, char *Dest);
};

void StringX ::StrCpyCapX(char *Src, char *Dest)
{
    while (*Src != '\0')
    {
        if (*Src >= 'A' && *Src <= 'Z')
        {
            *Dest = *Src;

            Dest++;
        }

        Src++;
    }
    *Dest = '\0';
}

int main()
{
    char Arr[50];
    char Brr[50];

    cout << "Enter the source string: " << endl;
    cin.getline(Arr, 50);

    StringX *obj = new StringX();

    obj->StrCpyCapX(Arr, Brr);

    cout << "Destination string is: " << Brr << endl;

    return 0;
}
