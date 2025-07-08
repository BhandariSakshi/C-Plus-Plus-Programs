//You're given an array A of integers. You need to compute the following XOR:

//(A[0] + f(1)) ^ (A[1] + f(2)) ^ (A[2] + f(3)) ^ ... ^ (A[N-1] + f(N))
//Where f(x) is the number of set bits (1s) in the binary representation of x.

//Input Example:
//A = [1, 2, 3]
//Output:
//4

# include <iostream>
using namespace std;

class Array{

    private:
    int iSize = 0;
    int *Arr = NULL;

    public:
    Array(int iNo);
    ~Array();
    void Accept();
    int Xor();
    int countBits(int x);
};

Array :: Array(int iNo)
{
    cout << "Inside Constructor" << endl;
    iSize = iNo;
    Arr = new int[iNo];
}

Array :: ~Array()
{
    cout << "Inside Destructor" << endl;
    delete [] Arr;
}

void Array :: Accept()
{
    for (int i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
    
}

int Array :: Xor()
{
    int result = 0;

    for(int i = 0; i < iSize; i++)
    {
        int ans = countBits(i+1);
        result ^= (ans+Arr[i]);
    }
    return result;

}

int Array :: countBits(int x)
{
    int cnt = 0;
    while (x) {
        cnt += (x & 1);
        x >>= 1;
    }
    return cnt;    
}

int main()
{
    int iCount = 0, iRet = 0;

    cout << "Enter the number of elements that you want to store in the array: " << endl;
    cin >> iCount;

    Array *obj = new Array(iCount);
    obj->Accept();
    
    iRet = obj->Xor();
    cout << "Ans is: " << iRet;
    
    return 0;
}