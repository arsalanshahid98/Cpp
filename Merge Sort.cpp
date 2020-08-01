#include <iostream>
using namespace std;

#define N 100

int g_array[N];     //???????
static int count;   //???????

// ?????
void Initial()
{
    cout << "????????:";
    cin >> count;
    cout << "???" << count << "???:";
    for(int i = 0; i < count; i ++)
    {
        cin >> g_array[i];
    }
}

//????
void Merge(int a[], int l, int m, int r)
{
    int i = l, j = m+1, k = l;
    int b[N];
    while(i <= m && j <= r)
    {
        if(a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            b[k++] = a[j++];
        }
    }

    if(i > m)
    {
        for(int p = j; p <= r; p ++)
        {
            b[k++] = a[p];
        }
    }
    else
    {
        for(int p = i; p <= m; p ++)
        {
            b[k++] = a[p];
        }
    }

    //?b[]??????copy?a[]?
    for(int q = l; q <= r; q ++)
    {
        a[q] = b[q];
    }
}

//  ???? ??????
void MergeSort(int a[], int left, int right)
{
    if(left < right)    //??????????
    {
        int i = (right + left)/2;
        MergeSort(a, left, i);
        MergeSort(a, i+1, right);
        Merge(a, left, i, right); //?left?right??????
    }
}

//????????
void Print()
{
    cout << "??MergeSort?:";
    for(int i = 0; i < count; i ++)
    {
        cout << g_array[i] << " ";
    }
    cout << endl;
}

int main()
{
    Initial();
    if(count > 1)
    {
        MergeSort(g_array, 0, count-1);
        Print();
    }
    else if(count == 1)
    {
        Print();
    }
    system("pause");
    return 0;
}
