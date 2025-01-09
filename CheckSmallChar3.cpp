# include <iostream>
using namespace std;

class Charecter
{
    public: 

        bool Check(char ch);
};

bool Charecter :: Check(char ch)
        {
            if (ch >= 'a' && ch <= 'z')
            {
                return true;
            }
            else
            {
                return false;
            }
        }

int main()
{
    char ch = '\0';
    bool bRet = false;

    cout << "Enter the charecter: " << endl;
    cin >> ch;

    Charecter *obj = new Charecter();

    bRet = obj->Check(ch);

    if (bRet == true)
    {
        cout << "It is small letter" << endl;
    }
    else
    {
        cout << "It is not small letter" << endl;
    }
    

    return 0;
}