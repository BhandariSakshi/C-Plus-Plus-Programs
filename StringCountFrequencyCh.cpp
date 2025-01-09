# include <iostream>
using namespace std;

class Strings
{
    public: 
        int CountFrequency(char *Str, char ch);
};

int Strings :: CountFrequency(char *Str, char ch)
{
    int iCount = 0;

    while (*Str != '\0')
    {
        if (*Str == ch)
        {
            iCount++;
        }
        
        Str++;
    }
    
    return iCount;
}


int main()
{
    char Arr[100], cValue = '\0';
    int iRet = 0;

    cout << "Enter the string: " << endl;
    cin.getline(Arr,50);

    cout << "Enter the charecter: " << endl;
    cin >> cValue;

    Strings obj = Strings();

    iRet = obj.CountFrequency(Arr, cValue);

    cout << "Number of times chareceter occurs: " << iRet << endl;
    
    
    return 0;
}