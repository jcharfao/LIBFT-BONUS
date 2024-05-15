/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcharfao <jcharfao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 21:40:32 by jcharfao          #+#    #+#             */
/*   Updated: 2024/05/15 15:09:49 by jcharfao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *mntrs;
	while (*lst)
	{
		mntrs = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = mntrs;
	}
	free(*lst);
	*lst = NULL;
}