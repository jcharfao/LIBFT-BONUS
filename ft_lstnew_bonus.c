/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 06:57:41 by jcharfao          #+#    #+#             */
/*   Updated: 2024/05/14 20:54:37 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *conetnt)
{
	t_list *newnodo;
	
	newnodo = (t_list *)malloc(sizeof(t_list));
	if (!newnodo)
		return (NULL);
	newnodo->content = (void *)conetnt;
	return (newnodo);
}