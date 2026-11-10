#include <unistd.h>

void ft_print_alphabet(void)
{
  char character = 'a';
  while (character <= 'z')
  {
    write(1, &character, 1);
    character += 1;
  }
}
