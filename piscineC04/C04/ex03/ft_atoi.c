int ft_change_to_int(char *num, int neg)
{
	int number;
	int i;

	number = 0;
	i = 0;
	while(num)
	{
		number = num[i] * 10;
		i++;
		if(num[i] != '\0')
			number = number + num[i];
	}
	if((neg%2) == 1)
		number = number * -1;
	return (number);


}


int ft_atoi(char *str)
{
	char num [10];
	int i;
	int j;
	int neg;
	int flag;

	i = 0;
	j = 0;
	flag = 1;
	neg = 0;
	while(str[j] && flag == 1)
	{
		if(str[j] == 45)
			neg += neg;
		if(str[j] >= 48 && str[j] <= 57) 
		{
			num[i] = str[j];
			if(!((str[j] + 1) >= 48 && (str[j] + 1) <= 57))
				flag = 0;
			i++;
		}
		j++;
	}
	return(ft_change_to_int(num, neg));
}

int main (int argc, char **argv)
{
	ft_atoi(argv[1]);
	return (0);
}