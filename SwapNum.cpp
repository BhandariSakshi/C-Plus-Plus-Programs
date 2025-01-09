# include <iostream>
using namespace std;

class Num
{
    private:
        int *P;
        int *Q;

    public:
        void Swap(int *P, int *Q);
};

void Num :: Swap(int *P, int *Q)
{
    int temp = 0;

    temp = *P;
    *P = *Q;
    *Q = temp;
}

int main()
{
    int A = 0, B = 0;

    cout << "Enter the value of A: " << endl;
    cin >> A;

    cout << "Enter the value of B: " << endl;
    cin >> B;

    Num *obj = new Num();

    obj->Swap(&A, &B);

    cout << "Value of A after Swapping: " << A << endl;
    cout << "Value of B after Swapping: " << B << endl;

    return 0;
}