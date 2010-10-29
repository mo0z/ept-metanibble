/*
** get_next_line.c for sfig in /u/ept2/jouan_t/code/c/miniprojs/sfig
** 
** Made by thibault jouan
** Login   <jouan_t@epita.fr>
** 
** Started on  Thu Jan 16 16:56:19 2003 thibault jouan
** Last update Sun May 25 00:40:42 2003 StarK
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 1

static char	buff[BUFF_SIZE];
static int	in_buf = 0;
static int	start;
static int	end_file = 0;

static void	read_from_file(int fd)
{
  in_buf = read(fd, buff, BUFF_SIZE);
  start = 0;
  end_file = in_buf != BUFF_SIZE;
}

static char	*add_to_line(char *line, int cur)
{
  char		*new;
  int		old_len;

  new = malloc((old_len = (line ? strlen(line) : 0)) + cur + 1);
  strcpy(new, line ? line : "");
  memcpy(new + old_len, buff + start, cur);
  new[old_len + cur] = 0;
  if (line)
    free(line);
  start += cur + 1;
  return (new);
}

char		*get_next_line(int fd)
{
  int		cur;
  char		*line;
  
  for (line = 0, cur = 0; ; cur++)
    {
      if (start >= in_buf)
	{
	  if (end_file)
	    return (0);
	  read_from_file(fd);
	  cur = 0;
	}
      if (buff[start + cur] == '\n')
	{
	  line = add_to_line(line, cur);
	  return (line);
	}
      if (start + cur == in_buf - 1)
	line = add_to_line(line, cur + 1);
    }
}
