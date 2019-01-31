/*Стандартные для массива (array) поля и методы. */
#include <iostream>
#include <utility>

using namespace std;

class CycleArray
{
    public:
        arraySize = N;
        data = new pair <int, int> [N];
    };
    CycleArray (CycleArray& A)
    {
        arraySize = A.arraySize;
        data = A.data;
    };
    ~CycleArray ()
    {
        delete[] data;
    };
    pair <int, int> &operator[](int i)
    {
        while (i >= arraySize)
        {
            i -= arraySize;
        }
        return data[i];
    };
    void input ()
    {
        int j, a, b;
        for (int i = I; i < arraySize + I; i++)
        {
            j  = i;
            while (j >= arraySize)
                j -= arraySize;
            cin >> a >> b;
            data[j] = make_pair(a, b);
        }
    };
    void output()
    {
        int j;
        for (int i = I; i < arraySize + I; i++)
        {
            j = i;
            while (j >= arraySize)
                j -= arraySize;
            cout << data[j].first << " " << data[j].second << "\n";
        }
    };
    Move (int k)
    {
        I += k;
    }
};

int main()
{
    int N, K;
    cin >> N;
    CycleArray A (N);
    A.input();
    A.output();
    cin >> K;
    A.Move (K);
    A.output();
}
    pair <int, int>* data;
    int I = 0;
    int arraySize;
    CycleArray (int N)
    {
