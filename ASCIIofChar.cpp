# include <iostream>
using namespace std;

class Charecter
{
    public:
        void Display(char ch)
        {
            cout << "Entered character is: " << ch << endl;
            cout << "ASCII value of " << ch << " is " << int(ch) << endl;
        }
};

int main()
{
    char ch = '\0';

    cout << "Enter the charecter: " << endl;
    cin >> ch;

    Charecter *obj = new Charecter();

    obj->Display(ch);

    return 0;
}