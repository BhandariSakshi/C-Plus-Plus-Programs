# include <iostream>
using namespace std;

class StringX
{
    public:
        void StrCatX(char *Dest, char *Src);
};

void StringX :: StrCatX(char *Dest, char *Src)
{
    while (*Dest != '\0')
    {
        Dest++;
    }

    while (*Src != '\0')
    {
        *Dest = *Src;

        Dest++;
        Src++;
    }
    *Dest = '\0';
    
}

int main()
{
    char Arr[30];
    char Brr[30] = "Sakshi";

    cout << "Enter the source string: " << endl;
    cin.getline(Arr, 30);

    StringX *obj = new StringX();

    obj->StrCatX(Arr, Brr);

    cout << "Destination string is: " << Arr << endl;

    return 0;
}