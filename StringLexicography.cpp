# include <iostream>
using namespace std;

class String{

    public:
    void Lexicography(char *Arr,int k)
    {
        int i = 0;
        while(*Arr != '\0' && i < k)
        {
            Arr++;
            i++;
        }

        cout << Arr << endl;
    }

};

int main(){

    char Str[100];
    int k = 0;

    cout << "Enter the string: " << endl;
    cin.getline(Str, 100);

    cout << "Enter the value of k: " << endl;
    cin >> k; 

    String *obj = new String();
    obj->Lexicography(Str, k);

    return 0;
}