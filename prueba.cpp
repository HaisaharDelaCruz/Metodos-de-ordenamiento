#include <iostream>

using namespace std;

main ()
{
    //metodo radix sort
    int arr[10] = {5,2,3,4,5,6,7,8,9,10};
    int i, j, temp;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}