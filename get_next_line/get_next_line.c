#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>
/*EXAMPLES
       basename /usr/bin/sort
              -> "sort"

       basename include/stdio.h .h
              -> "stdio"

       basename -s .h include/stdio.h
              -> "stdio"

       basename -a any/str1 any/str2
              -> "str1" followed by "str2"
Files to turn in : Makefile, and files needed for your program
Allowed functions : close, open, read, write, strerror, basename
Notes : n/a
• Create a program called ft_cat which does the same thing as the system’s cat
command-line.
• You don’t have to handle options.
• The submission directory should have a Makefile with the following rules : all,
clean, fclean.
• You may use the variable errno (check the man for Errno).
• You should read the man of all the authorized functions
• You can only do this exercise by declaring a fixed-sized array. This array will have
a size limited to a little less than 30 ko. In order to test that size-limit, use the
ulimit command-line in your Shell. */

int main(int ac, char **av)
{
	while (1)
	{	
    	char *c = NULL;
    	char b[256] = "ft_cat: ";
   		 strcat(b, basename(av[1]));
    	int fd;
    	if (ac < 2)
        	write(1, "file name is missing\n", 22);
    	else if (ac > 2)
        	write(1, "too many arguments\n", 20);
    	else
    	{
        	if ((fd = open(av[1], O_RDONLY)) == -1)
            	perror(b);
        	else
            	while (read(fd, &c, 1) && *c != '\n')
           	 	{
                	write(1, &c, 1);
            	}
        // c[sz] = '\0';
        //  write(2,&c,1)
    	}
		if (*c == EOF)
			break;
	}
	return (0);
}
