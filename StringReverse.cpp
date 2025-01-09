# include <iostream>
using namespace std;

class Strings
{
    public:
        void Reverse(char *Str);
};

void Strings :: Reverse(char *Str)
{
    char *Start = Str;
    char *End = Str;
    char temp;

    while (*End != '\0')
    {
        End++;
    }
    End--;

    while (Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }
}

int main()
{
    char Arr[50];

    cout << "Enter the string: " << endl;
    cin.getline(Arr, 30);

    Strings *obj = new Strings();

    obj->Reverse(Arr);

    cout << Arr;

    return 0;
}