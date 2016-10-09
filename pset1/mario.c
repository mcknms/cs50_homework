#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int p_height = 0;

	do {
		printf("Height:");
		p_height = GetInt();
        if (p_height == 0)
        {
            return 0;
        }
	} while (p_height < 1 || p_height > 23);

	for(int i = 0; i < p_height; i++)
	{
        for(int j = 0; j < p_height-i-1; j++)
        {
            printf("%s", " ");
        }
		for(int k = 0; k < i+2; k++)
		{
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
