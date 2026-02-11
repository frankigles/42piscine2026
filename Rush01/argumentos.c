#include <unistd.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}


int    main(int argc, char *argv[]) //**argv == *argv[1] */
{
  if (argc != 2)
  {
    write(1, "debe introducir solo un parametro", 33);
    return (0);
  }
  else
  {
    int i;
    int x;
    char *str;
    char imprimir;
    

    str = argv[1];
    x = 0;
    i = 0;
    while (str[i] != '\0')
    {
      if(x == 4)
      {
        x = 0;
        write(1, "\n", 1);
        
      }
      x++;
      imprimir = str[i];
      write(1, &imprimir, 1);
      i++;
    }
  }
  return (0);
}


