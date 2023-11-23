#ifndef MAIN_H
#define MAIN_H
unsigned long int _power(unsigned int base, unsigned int pow);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);

int _strlen(const char *string)
{
	int i = 0;

	while (string[i])
		i++;
	return (i);
}


int power_of(int num, int exponent)
{
	int res = 1, i = 0;

	while (i <= exponent)
	{
		if (i == 0)
			res = 1;
		else
			res *= num;
	}
	return (res);
}

#endif /*MAIN_H*/
