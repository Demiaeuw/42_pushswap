/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 03:27:50 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/10 03:27:50 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include "get_next_line.h"
# include "push_swap.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
/*			get_next_line		*/
char	*get_next_line(int fd);
char	*gnl_ad_to_stash(int fd, char *s);
char	*gnl_line(char *stash);
char	*gnl_clean_static(char *stash);
/*			get_next_line_utils	*/
char	*gnl_strchr(const char *s, int c);
size_t	gnl_strlen(const char *c);
void	gnl_bzero(void *s, size_t n);
void	*gnl_calloc(size_t nmemb, size_t size);
char	*gnl_strjoin(char *s1, char *s2);

#endif