/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:57:08 by carys             #+#    #+#             */
/*   Updated: 2022/03/12 19:37:19 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_s(t_list **stack)
{
	t_list	*tmp;

	if (!(*stack) || !((*stack)->next))
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	sa_bonus(t_list **stack1)
{
	ft_s(stack1);
}

void	sb_bonus(t_list **stack2)
{
	ft_s(stack2);
}

void	ss_bonus(t_list **stack1, t_list **stack2)
{
	ft_s(stack1);
	ft_s(stack2);
}
