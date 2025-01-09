# include <iostream>
using namespace std;

class StringX
{
    public:
        void StringToggleX(char *Str)
        {
            while (*Str != '\0')
            {
                if (*Str >= 'a' && *Str <= 'z')
                {
                    *Str = *Str - 32;
                }
                else if (*Str >= 'A' && *Str <= 'Z')
                {
                    *Str = *Str + 32;
                }
                
                Str++;
            }
            
        }

};

int main()
{
    char Arr[50];

    cout << "Enter the string: " << endl;
    cin.getline(Arr,30);

    StringX *obj = new StringX();

    obj->StringToggleX(Arr);
    cout << "Updated string is: " << Arr << endl;

    return 0;
}