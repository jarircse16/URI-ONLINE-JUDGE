#include<stdio.h>
#include<string.h>

int main()
{
    int string_size;
    printf("Enter the size of string:");
    scanf("%d",&string_size);
    char input_string[string_size];
    int iterator;
    for(iterator=0;iterator<string_size;iterator++)
    {
        scanf(" %c",&input_string[iterator]);
    }
    int capital_letter_counter=0,small_letter_counter=0,special_character_counter=0;
    for(iterator=0;iterator<string_size;iterator++)
    {
         if(input_string[iterator]>=65 && input_string[iterator]<=90)
            capital_letter_counter++;
         if(input_string[iterator]>=91 && input_string[iterator]<=96)
            special_character_counter++;
        if(input_string[iterator]>=97 && input_string[iterator]<=122)
            small_letter_counter++;
    }
    printf("Results:\n");
    printf("Total characters: %d\n",string_size);
    printf("Capital letters: %d\n",capital_letter_counter);
    printf("Small letters: %d\n",small_letter_counter);
    printf("Special characters: %d\n",special_character_counter);
    return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
    int string_size;
    printf("Enter the size of string:");
    scanf("%d",&string_size);
    char input_string[string_size];
    int iterator;
    for(iterator=0;iterator<string_size;iterator++)
    {
        scanf(" %c",&input_string[iterator]);
    }
    int capital_letter_counter=0,small_letter_counter=0,special_character_counter=0;
    for(iterator=0;iterator<string_size;iterator++)
    {
         if(input_string[iterator]>=65 && input_string[iterator]<=90)
            capital_letter_counter++;
         if(input_string[iterator]>=91 && input_string[iterator]<=96)
            special_character_counter++;
        if(input_string[iterator]>=97 && input_string[iterator]<=122)
            small_letter_counter++;
    }
    printf("Results:\n");
    printf("Total characters: %d\n",string_size);
    printf("Capital letters: %d\n",capital_letter_counter);
    printf("Small letters: %d\n",small_letter_counter);
    printf("Special characters: %d\n",special_character_counter);
    return 0;
}
