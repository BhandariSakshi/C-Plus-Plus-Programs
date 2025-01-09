# include <iostream>
using namespace std;

class Strings{

    public:
        int CountCapital(char *Str);
};

int Strings :: CountCapital(char *Str)
{
    int iCount = 0;

    while (*Str != '\0')
    {
        if (*Str >= 'A' && *Str <= 'Z')
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

    cout << "Enter the String: " << endl;
    cin.getline(Arr,50);

    Strings *obj = new Strings();

    iRet = obj->CountCapital(Arr);
    cout << "Number of capital letters are: " << iRet << endl;

    return 0;
}
