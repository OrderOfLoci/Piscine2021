/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoimbra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:58:13 by pcoimbra          #+#    #+#             */
/*   Updated: 2021/09/27 16:39:05 by wblotz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

enum e_bool{
	false = 0,
	true = 1
};

# define FALSE 0
# define TRUE 1

# define EVEN(num) (num % 2 == 0)

# define EVEN_MSG "It's an even number of arguments.\n"
# define ODD_MSG "It's an odd number of arguments.\n"

# define SUCCESS 0

#endif
