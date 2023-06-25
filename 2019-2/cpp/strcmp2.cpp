#include<bits/stdc++.h>
using namespace std;

int main()
{
    int first_string_size,second_string_size,iteration1;
    cin>>first_string_size>>second_string_size;
    char first_string[first_string_size],second_string[second_string_size];
    for(iteration1=0;iteration1<first_string_size;iteration1++)
    {
        cin>>first_string[iteration1];
    }
    for(iteration1=0;iteration1<second_string_size;iteration1++)
    {
        cin>>second_string[iteration1];
    }
    if(first_string_size!=second_string_size)
        cout<<"No match";
    else
    {
        int Is_matched=1;
        for(iteration1=0;iteration1<first_string_size;iteration1++)
        {
            if(first_string[iteration1]!=second_string[iteration1])
            {
                Is_matched=0;
                break;
            }
            else
            {
                continue;
            }
        }
        if(Is_matched==0)
            cout<<"No match";
        else
            cout<<"Matched";
    }
    return 0;

}
//Bug fixed for eed dee
