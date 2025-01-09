# include <iostream>
using namespace std;

class Charecter
{
    public: 

        void Check(char ch)
        {
            if (ch >= 'a' && ch <= 'z')
            {
                cout << "It is small letter" << endl;
            }
            else
            {
                cout << "It is not small letter" << endl;
            }
        }
};

int main()
{
    char ch = '\0';

    cout << "Enter the charecter: " << endl;
    cin >> ch;

    Charecter *obj = new Charecter();

    obj->Check(ch);

    return 0;
}