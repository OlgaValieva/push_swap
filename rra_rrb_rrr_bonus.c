/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:56:51 by carys             #+#    #+#             */
/*   Updated: 2022/03/12 19:37:16 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rr(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	if (!(*stack) || !((*stack)->next))
		return ;
	tmp = *stack;
	end = ft_lstlast(*stack);
	while ((*stack)->next->next)
		*stack = (*stack)->next;
	end->next = tmp;
	(*stack)->next = NULL;
	*stack = end;
}

void	rra_bonus(t_list **stack1)
{
	ft_rr(stack1);
}

void	rrb_bonus(t_list **stack2)
{
	ft_rr(stack2);
}

void	rrr_bonus(t_list **stack1, t_list **stack2)
{
	ft_rr(stack1);
	ft_rr(stack2);
}
