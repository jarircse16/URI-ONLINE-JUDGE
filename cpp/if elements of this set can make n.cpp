#include<bits/stdc++.h>
#include<vector>
using namespace std;

void print_result(int found)
{
        if(found==1)
            cout<<"Can be made";
        else
            cout<<"Can't be made";
}

int main()
{
    int array_size;
    cout<<"Enter array size:";
    cin>>array_size;
    int iteration=0,array[array_size];
    cout<<"Enter the array:";
    while(iteration<array_size)
    {
        cin>>array[iteration];
        iteration++;
    }
    sort(array,array+array_size);
    int target_number;
    cout<<"Enter the target number:";
    cin>>target_number;
    int found=0,found_index=0,temporary_variable=target_number,check_sum=0;
    int array_index=0;
    while(array_index<array_size)
    {
            if(array[array_index]==target_number)
                {
                found=1;
                print_result(found);
                return 0;
                }
            else if(array[array_index]<target_number)
                {
                    iteration++;
                }
            else
                {
                    break;
                }
    }

    while(array_index<array_size)
    {
            while(array[array_index]<temporary_variable)
            {

                if(temporary_variable==0 && check_sum==target_number)
                    {
                        found=1;
                        break;
                    }
                else if(check_sum>target_number)
                    {
                        found=0;
                        break;
                    }
                temporary_variable=temporary_variable-array[iteration];
                check_sum=check_sum+array[array_index];
                array_index++;
                }
        }

        print_result(found);
        return 0;
}
