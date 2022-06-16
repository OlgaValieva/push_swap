/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carys <carys@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:57:27 by carys             #+#    #+#             */
/*   Updated: 2022/03/14 13:53:13 by carys            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	struct s_list	*next;
	int				num;
	int				index;
	int				flag;
}	t_list;

typedef struct s_push
{
	int	next;
	int	max;
	int	mid;
	int	flag;
}	t_push;

void	sorting(t_list **stack1, int count);
void	big_sorting(t_list **stack1, t_list **stack2, int count);
void	sorting_two(t_list **stack);
void	sorting_three(t_list **stack);
void	sorting_five(t_list **stack1, t_list **stack2);
void	push_min_lst(t_list **stack1, t_list **stack2);
int		ft_atoi(char *str);
int		gnl(char **line, int fd);
int		ft_strncmp(const char *s1, const char *s2, int n);
char	**ft_split(char const *s, char c);
void	error(void);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	sa(t_list **stack);
void	sb(t_list **stack);
void	ss(t_list **stack1, t_list **stack2);
void	ra(t_list **stack);
void	rb(t_list **stack);
void	rr(t_list **stack1, t_list **stack2);
void	rra(t_list **stack);
void	rrb(t_list **stack);
void	rrr(t_list **stack1, t_list **stack2);
void	pa(t_list **stack1, t_list **stack2);
void	pb(t_list **stack1, t_list **stack2);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
t_list	*find_min_lst(t_list **stack);
t_list	*find_max_lst(t_list **stack);
int		check_pos(t_list **stack, t_list *min);
int		count_lst(t_list **stack);
int		check_sorting(t_list **stack1);
void	ra_bonus(t_list **stack1);
void	rb_bonus(t_list **stack2);
void	rr_bonus(t_list **stack1, t_list **stack2);
void	sa_bonus(t_list **stack1);
void	sb_bonus(t_list **stack2);
void	ss_bonus(t_list **stack1, t_list **stack2);
void	rra_bonus(t_list **stack1);
void	rrb_bonus(t_list **stack2);
void	rrr_bonus(t_list **stack1, t_list **stack2);
void	pa_bonus(t_list **stack1, t_list **stack2);
void	pb_bonus(t_list **stack1, t_list **stack2);
int		check_identical(t_list **stack1);
int		check_sorting_a(t_list **stack1, int count);
void	set_index(t_list **stack1);
void	free_stack(t_list *stack, int i);
void	free_stacks(t_list *stack1, t_list *stack2, int i);

#endif
