//reverse array using pointer
#include <iostream>
using namespace std;
void Reverse_array(int *array, int size)
{

    int *start, *end, temp;
    for (int i = 0; i < size / 2; i++)
    {
        start = &array[i];
        end = &array[size - 1 - i];
        // swaping value using pointer
        temp = *start;
        *start = *end;
        *end = temp;
    }
}
    int main()
    {
        int n;
        cout << "Enter array size\n";
        cin >> n;
        int array[n];
        int size = sizeof(array) / sizeof(int);
        cout << "Enter array element : \n";
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        Reverse_array(array,size);//calling function
        //print array after reverse
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        return 0;
    }
