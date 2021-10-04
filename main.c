#include "libasm.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/uio.h>

#define BLUE "\033[34m"
#define WHITE "\033[37m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"


int 	main()
{
	char s2[] = "AVA_DAVA_KEVA_LOVA";
	char s4[] = "AVA_DAVA_KEVA_LOVA";
	char s[100000];
	char buf[500];
	char s1[] = "";
	char s3[] = "Test long to life and test long to life and test long and test long to life and test long to life and test long to life and test long to life and test long to life and test long to life";

	printf("FT_STRLEN\n");

	printf("|%s|\n\n\n", s1);
	printf("my:\n");
	printf("|%lu|\n", ft_strlen(s1));
	printf("orig:\n");
	printf("|%lu|\n", strlen(s1));


	printf("|%s|\n\n\n", s2);
	printf("my:\n");
	printf("|%lu|\n", ft_strlen(s2));
	printf("orig:\n");
	printf("|%lu|\n", 	 strlen(s2));



	printf("|%s|\n\n\n", s3);
	printf("my:\n");
	printf("|%lu|\n", ft_strlen(s3));
	printf("orig:\n");
	printf("|%lu|\n",    strlen(s3));



	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");



	printf("FT_STRCPY\n");

	printf("my:\n");
	printf("|%s|\n\n\n", ft_strcpy(s, ""));
	printf("orig:\n");
	printf("|%s|\n\n\n", strcpy(s, ""));

	printf("my:\n");
	printf("|%s|\n\n\n", ft_strcpy(s, s2));
	printf("orig:\n");
	printf("|%s|\n\n\n", strcpy(s, s2));


	printf("my:\n");
	printf("|%s|\n\n\n", ft_strcpy(s, "Ваши функции не должны неожиданно прекратиться (сегментация фальшивая, и вы получите 0 во время оценки"));
	printf("orig:\n");
	printf("|%s|\n\n\n", 	strcpy(s, "Ваши функции не должны неожиданно прекратиться (сегментация фальшивая, и вы получите 0 во время оценки"));


printf("my:\n");
	printf("|%s|\n\n\n", ft_strcpy(s, s3));
	printf("orig:\n");
	printf("|%s|\n\n\n", strcpy(s, s3));



	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");



	printf("FT_STRCMP\n");

printf("my:\n");
	printf("|%d|\n", ft_strcmp("", s2));
	printf("orig:\n");
	printf("|%d|\n", strcmp("", s2));

printf("my:\n");
	printf("|%d|\n", ft_strcmp(s2, ""));
	printf("orig:\n");
	printf("|%d|\n", strcmp(s2, ""));


printf("my:\n");
	printf("|%d|\n", ft_strcmp("", ""));
	printf("orig:\n");
	printf("|%d|\n", strcmp("", ""));

printf("my:\n");
	printf("|%d|\n", ft_strcmp(s2, s3));
	printf("orig:\n");
	printf("|%d|\n", strcmp(s2, s3));

	char _s2[] = "AVA_DAVA_KEVA_LOVA";
	char _s4[] = "AVA_DAVA_KEVA_LOVA";

	printf("orig:\n");
	printf("|%d|\n", strcmp(_s2, _s4));
printf("my:\n");
	printf("|%d|\n", ft_strcmp(_s2, _s4));



	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");


	int	fd;
	printf("FT_WRITE\n");

	printf("my:\n");
	printf("|%zd|\n", ft_write(1, "ft_write different  ", ft_strlen("ft_write different  ")));
	printf("orig:\n");
	printf("|%zd|\n", 	 write(1, "ft_write different  ",    strlen("ft_write different  ")));


	fd = open("test.txt", O_RDWR);

	printf("my:\n");
	printf("|%zd|\n", ft_write(fd,    "ft_write check  ", ft_strlen("ft_write check  ")));
	printf("orig:\n");
	printf("|%zd|\n", 		write(fd, "ft_write check  ", 	 strlen("ft_write check  ")));


	close(fd);

	fd = -1;

	printf("my:\n");
	printf("|%zd|\n", ft_write(fd, "123\n", ft_strlen("123\n")));

	printf("|%d|\n", errno);


	printf("orig:\n");
	printf("|%zd|\n", write(fd, "123\n", strlen("123\n")));
	printf ("|%d|\n", errno);


	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");

	printf("FT_READ\n");

	fd = open("test.txt", O_RDONLY);
	printf("my:\n");
	printf("|%zd|\n", ft_read(fd, buf, 15));
	printf("|%d|\n", errno);


	printf("orig:\n");
	printf("|%zd|\n", read(fd, buf, 15));
	printf("|%d|\n", errno);
	close(fd);


	fd = open("test.txt", O_RDONLY);
printf("my:\n");
	printf("|%zd|\n", ft_read(fd, buf, -15));
	printf("|%s|\n\n\n", buf);
	printf("|%d|\n", errno);

printf("orig:\n");
	printf("|%zd|\n", read(fd, buf, -15));
	printf("|%s|\n\n\n", buf);
	printf("|%d|\n", errno);


	close(fd);




printf("my:\n");
	printf("stdin read:  \n");
	ft_read(0, buf, 200);
	printf("|%s|", buf);

printf("orig:\n");
	printf("stdin read:  \n");
	read(0, buf, 200);
	printf("|%s|", buf);

	fd = -1;

printf("my:\n");
	printf("|%zd|\n", ft_read(fd, "123\n", ft_strlen("123\n")));
	printf("|%d|\n", errno);

printf("orig:\n");
	printf("|%zd|\n", read(fd, "123\n", strlen("123\n")));
	printf("|%d|\n", errno);



	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n");


	printf("FT_STRDUP\n");

printf("my:\n");
	printf("|%s|\n\n\n", ft_strdup(s1));
	printf("orig:\n");
	printf("|%s|\n\n\n", strdup(s1));

printf("my:\n");
	printf("|%s|\n\n\n", ft_strdup(s2));
	printf("orig:\n");
	printf("|%s|\n\n\n", strdup(s2));

printf("my:\n");
	printf("|%s|\n\n\n", ft_strdup(s3));
	printf("orig:\n");
	printf("|%s|\n\n\n", strdup(s3));


	return (0);

}
