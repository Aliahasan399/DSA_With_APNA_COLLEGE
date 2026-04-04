// sub array print
#include <iostream>
using namespace std;
int main()
{
    int array[] = {-2, 0, -1};
    int size = sizeof(array) / sizeof(int);
    int lar_subA_prduct = array[0];
    for (int i = 0; i < size; i++)
    {
        int sum = 1;

        for (int j = i; j < size; j++)
        {
            sum = sum * array[j];
            if (sum > lar_subA_prduct)
            {
                lar_subA_prduct = sum;
            }
        }
    }
    cout << lar_subA_prduct;
}