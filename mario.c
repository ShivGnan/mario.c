#include <stdio.h>
#include <cs50.h>
 
int main(void)
{
    int height;
    int all_rows;
    int space;
    int hash;
    
    do
    {
        height = get_int("Height: ");
    }
    while ((height < 1) || (height > 8));
    for (all_rows = 1; all_rows <= height; all_rows++) 
    {
        for (space = (height - all_rows); space > 0; space--)
        {
            printf(" "); 
        }
        for (hash = 1; hash <= all_rows; hash++)
        {   
            printf("#"); 
        }
        printf("\n");
    }
    return 0;
}
