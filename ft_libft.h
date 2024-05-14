/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 06:57:41 by jcharfao          #+#    #+#             */
/*   Updated: 2024/05/13 15:18:25 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void const *content);
void	ft_lstadd_front(t_list **lst, t_list *new);

#endif LIBFT_H