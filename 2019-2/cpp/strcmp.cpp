#include<bits/stdc++.h>
using namespace std;

int main()
{
    int first_string_size,second_string_size;
    cout<<"Enter 1st string size and 2nd string size:";
    cin>>first_string_size>>second_string_size;
    char first_string[first_string_size],second_string[second_string_size];
    int iteration,string_sum_1=0,string_sum_2=0,string_multiplication_1=1,string_multiplication_2=1;
    cout<<"Enter 1st string";
    for(iteration=0;iteration<first_string_size;iteration++)
    {
        cin>>first_string[iteration];
    }
        cout<<"Enter 2nd string";
    for(iteration=0;iteration<second_string_size;iteration++)
    {
        cin>>second_string[iteration];
    }
    for(iteration=0;iteration<first_string_size;iteration++)
    {
        string_sum_1+=first_string[iteration];
        string_multiplication_1*=first_string[iteration];
    }
    for(iteration=0;iteration<second_string_size;iteration++)
    {
        string_sum_2+=second_string[iteration];
        string_multiplication_2*=second_string[iteration];
    }
    if(first_string_size!=second_string_size)
    {
        cout<<"No match";
    }
    else if(first_string_size==second_string_size && string_sum_1==string_sum_2 && string_multiplication_1==string_multiplication_2)
    {
        cout<<"Matched";
    }
    else
    {
        cout<<"No match";
    }
    return 0;

}
//Doesn't work for dde edd
