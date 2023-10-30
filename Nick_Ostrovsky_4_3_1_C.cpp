// Nick_Ostrovsky_4_3_1_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void merge(int* array, int size)
{
    if (size == 1) { return; }
    int left_size = size / 2;
    int right_size = size - left_size;
    int* left_array  = new int [left_size];
    int* right_array = new int [right_size];
    for (int i = 0; i < left_size; i++)
    {
        left_array[i] = array[i];

    }
    for (int j = 0; j < right_size; j++)
    {
        right_array[j] = array[left_size + j];

    }
    int l_index = 0;
    int r_index = 0;
    for (int main_index = 0; main_index < size; main_index++)
    {
        if (left_array[l_index] < right_array[r_index])
        {
            array[main_index] = left_array[l_index];
            ++l_index;
        }
        else if (left_array[l_index] > right_array[r_index])
        {
            array[main_index] = right_array[r_index];
            ++r_index;
        }

        else if (left_array[l_index] == right_array[r_index])
        {
            array[main_index] = left_array[l_index];
            ++main_index;
            array[main_index] = right_array[r_index];
            ++l_index;
            ++r_index;
        }
        else if (l_index >= left_size)
        {
            while (r_index < right_size) {
                array[main_index] = right_array[r_index];
                ++r_index;
            }
        }
        else if (r_index >= right_size)
        {
            while (l_index < left_size) {
                array[main_index] = left_array[l_index];
                ++l_index;
            }
        }
        
    }

return ;
}

void merge_sort(int* array, int size)
{
    if (size == 1) { return ; }
    int m_point = size / 2;
    int left_size = size / 2;
    int right_size = size - left_size;
    int* left_array = new int[left_size];
    int* right_array = new int[right_size];
    for (int i = 0; i < left_size; i++)
    {
        left_array[i] = array[i];

    }
    for (int j = 0; j < right_size; j++)
    {
        right_array[j] = array[left_size + j];

    }
    merge_sort(left_array, left_size);
    merge_sort(right_array, right_size);
    merge()
}

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
