#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define SIZE	25

int	main(int ac, char **av)
{
	int		fd;
	int		i;
	char	buffer[SIZE + 1];

	if (ac != 2)
		return 1;
	if ((fd = open(av[1], O_RDONLY)) == -1)
		return 1;
	if (read(fd, &buffer, SIZE) == -1)
		return 1;
	buffer[SIZE] = 0;
	i = 0;
	while (buffer[i])
	{
		buffer[i] -= i;
		++i;
	}
	printf("%s\n", buffer);
	return 0;
}
