#include<bits/stdc++.h>
using namespace std;

int Maximum(int a, int b)
{
    return (a > b)? a : b;
}

int knapSack(int size_of_knapsack, int Weight_of_items[], int Value_of_items[], int number_of_items)
{
   int i, w;
   int K[number_of_items+1][size_of_knapsack+1];

   for (i = 0; i <= number_of_items; i++)
   {
       for (w = 0; w <= size_of_knapsack; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (Weight_of_items[i-1] <= w)
                 K[i][w] = Maximum(Value_of_items[i-1] + K[i-1][w-Weight_of_items[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   return K[number_of_items][size_of_knapsack];
}

int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int i, number_of_items, Value_of_items[20], Weight_of_items[20], size_of_knapsack;
    cout<<"Enter number of items:";
    cin>>number_of_items;
    cout<<"Enter Value_of_items and weight of items:\n";
    for(i = 0;i <number_of_items; ++i){
    	cin>>Value_of_items[i]>>Weight_of_items[i];
    }
    cout<<"Enter size of knapsack:";
    cin>>size_of_knapsack;
    cout<<knapSack(size_of_knapsack, Weight_of_items, Value_of_items, number_of_items);
    return 0;
}
