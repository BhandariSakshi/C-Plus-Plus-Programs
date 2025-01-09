#include <iostream>
using namespace std;

class StringX
{
public:
    void StrCpySmallX(char *Src, char *Dest);
};

void StringX ::StrCpySmallX(char *Src, char *Dest)
{
    while (*Src != '\0')
    {
        if (*Src >= 'a' && *Src <= 'z')
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

    obj->StrCpySmallX(Arr, Brr);

    cout << "Destination string is: " << Brr << endl;

    return 0;
}
