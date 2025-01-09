# include <iostream>
using namespace std;

class Strings{

    public:
        int CountSmall(char *Str);
};

int Strings :: CountSmall(char *Str)
{
    int iCount = 0;

    while (*Str != '\0')
    {
        if (*Str >= 'a' && *Str <= 'z')
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

    iRet = obj->CountSmall(Arr);
    cout << "Number of small letters are: " << iRet << endl;

    return 0;
}
