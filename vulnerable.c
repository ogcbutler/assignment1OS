#include <stdio.h>


void targetFunction()
{

printf("\n Target function found!");
printf("\n Hi there!");

}

void echo()
{

  char buffer[20];

  printf("Enter some text:\n");

  scanf("%s", buffer);

  printf("You have entered: %s\n", buffer);

}

int main()
{

echo();

return 0;

}
