# include <iostream>
using namespace std;

class Charecter
{
    public: 

        void Check(char ch)
        {
            if (ch >= 65 && ch <= 90)
            {
                cout << "It is capital letter" << endl;
            }
            else
            {
                cout << "It is not capital letter" << endl;
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