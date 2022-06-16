/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:56:42 by carys             #+#    #+#             */
/*   Updated: 2022/03/12 19:37:12 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_r(t_list **stack)
{
	t_list	*head;

	head = *stack;
	if (!(*stack) || !((*stack)->next))
		return ;
	*stack = head->next;
	head->next = NULL;
	ft_lstlast(*stack)->next = head;
}

void	ra_bonus(t_list **stack1)
{
	ft_r(stack1);
}

void	rb_bonus(t_list **stack2)
{
	ft_r(stack2);
}

void	rr_bonus(t_list **stack1, t_list **stack2)
{
	ft_r(stack1);
	ft_r(stack2);
}
