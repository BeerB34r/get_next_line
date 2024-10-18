/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   get_next_line.h                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/18 10:21:17 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/18 13:09:42 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_buffer
{
	int		key;
	int		size;
	int		index;
	char	buf[BUFFER_SIZE];
}	t_buffer;

int		gnl_strlen(const char *str);
int		is_line(const char *str);
void	*free_if_exists(void *ptr);
int		do_read(t_buffer *const buf);
int		build_line(t_buffer *const buf, char **ret);
char	*get_next_line(int fd);
#endif
