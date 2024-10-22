/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   get_next_line_bonus.h                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: mde-beer <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/10/18 10:21:17 by mde-beer       #+#    #+#                */
/*   Updated: 2024/10/22 12:48:45 by mde-beer       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <limits.h>
# if BUFFER_SIZE > INT_MAX
#  error "BUFFER_SIZE is larger than INT_MAX. this is not supported"
# endif

typedef struct s_buffer
{
	int				key;
	int				size;
	int				index;
	char			buf[BUFFER_SIZE];
	struct s_buffer	*next;
}	t_buffer;

int			gnl_strlen(const char *str);
int			is_line(const char *str);
void		*free_if_exists(void *ptr);
int			do_read(t_buffer *const buf);
int			build_line(t_buffer *const buf, char **ret);
char		*get_next_line(int fd);
t_buffer	*get_buf(t_buffer **head, int key);
t_buffer	*get_new(int key);
void		free_buffer(t_buffer **head, int key);
#endif
