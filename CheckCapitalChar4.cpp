# include <iostream>
using namespace std;

class Charecter
{
    public: 

        bool Check(char ch);
};

bool Charecter :: Check(char ch)
        {
            bool bFlag = false;

            if (ch >= 'A' && ch <= 'Z')
            {
                bFlag = true;
            }
          return bFlag;
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
        cout << "It is capital letter" << endl;
    }
    else
    {
        cout << "It is not capital letter" << endl;
    }
    

    return 0;
}