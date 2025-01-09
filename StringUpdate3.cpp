# include <iostream>
using namespace std;

class Strings{

    public:
        void Update(char Str[]);
        void Display(char Str[]);
};

void Strings :: Update(char Str[])
{
    while (*Str != '\0')
    {
       cout << *Str << endl;
        Str++;
    }
    
}



int main()
{
    char Arr[50];

    cout << "Enter the string: " << endl;
    cin.getline(Arr,50);

    Strings *obj = new Strings();

    obj->Update(Arr);
    obj->Display(Arr);

    return 0;
}