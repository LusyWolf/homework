#include <iostream>

using namespace std;

int delete_duplicates(int n, int* a)
{
    for (int i = 0; i < n; )
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                for (int k = i+1; k < n; k++)
                {
                    a[k - 1] = a[k];
                }
                n--;
                break;
            }
        }
        if (j == i)
        {
            i++;
        }
    }
    return n;
}

int main()
{
    int size;
    int* A;
    cin >> size;
    A = new int [size];
    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }

    size = delete_duplicates(size, A);

    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    return 0;
}


