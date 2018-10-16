/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarev <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 14:53:45 by skarev            #+#    #+#             */
/*   Updated: 2018/05/11 14:53:45 by skarev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "./libft/libft.h"
# include <fcntl.h>
# include <stdio.h>
# define BUFF_SIZE 16
# define MAX_FD 8192

int			get_next_line(const int fd, char **line);

#endif
