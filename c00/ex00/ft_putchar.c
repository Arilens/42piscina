#include <unistd.h>

void	ft_putchar(char c)
{
	whrite(1, &c, 1)
}

int main(void)
{
	ft_putchar('c');
	return (0);
}
