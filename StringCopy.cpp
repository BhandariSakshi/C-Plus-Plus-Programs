# include <iostream>
using namespace std;

class StringX
{
    public:
        void StrCpyX(char *Src, char *Dest);
};

void StringX :: StrCpyX(char *Src, char *Dest)
{
    while (*Src != '\0')
    {
        *Dest = *Src;

        Src++;
        Dest++;
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

    obj->StrCpyX(Arr, Brr);

    cout << "Destination string is: " << Brr << endl;

    return 0;
}
