#include <stdio.h>
#include "main.h"
void print_to_98(int n)

{

		while(n<=98)

				{

							printf("%d, ", n);



									        n++;

											}

			while(n>=98)

					{

								printf("%d, ", n);



										        n--;

												}

				printf("\n");

}
int main(void)

{

		print_to_98(98);

			return (0);

}
