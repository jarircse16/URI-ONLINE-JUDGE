#include <bits/stdc++.h>
using namespace std;
void ispossible(int given_array[], int given_array_size, int target_number)
{
    unordered_set<int>sets;
    for (int array_index = 0; array_index < given_array_size; array_index++)
    {
        int temporary_variable = target_number - given_array[array_index];

        if (temporary_variable >= 0 && sets.find(temporary_variable) != sets.end())
            {
                cout<<"Possible"<<endl;
                return;
            }
        sets.insert(given_array[array_index]);
     }
}
int main()
{

    int target_number,given_array_size;
    cout<<"Enter target number:";
    cin>>target_number;
    cout<<"Enter array size:";
    cin>>given_array_size;
    int array_index,given_array[given_array_size];
    for(array_index=0;array_index<given_array_size;array_index++)
    {
        cin>>given_array[array_index];
    }
    ispossible(given_array, given_array_size, target_number);
    return 0;
}
