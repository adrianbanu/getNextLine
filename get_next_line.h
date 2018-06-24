#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 222
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"
# include <sys/types.h>
# include <unistd.h>

typedef struct			s_fdlist
{
	int			fd;
	char			*file;
	int			i;
	struct s_fdlist		*next;
	int			check_final;
}				t_fdlist;

int				get_next_line(const int fd, char **line);
#endif
