/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tufan <tufan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:11:57 by tkurukay          #+#    #+#             */
/*   Updated: 2024/04/25 20:18:18 by tufan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	char	**tmp;
	int		*a;
	int		*b;
	char	*num;
	int		size_a;
	int		size_b;
	int		flag;
}	t_stack;

int		ft_prtsize(char **ptr);
int		ft_ps_atoi(char *str, t_stack *stack);
int		ft_checked_sorted(int *stack, int size);
void	ft_free(char **str);
void	repeated_num(t_stack *stack);
void	index_stack(int *stack, int size, t_stack *s);
void	ft_error(char *str, t_stack *stack, int flag);

void	rra(t_stack *stack, int print);
void	rrb(t_stack *stack, int print);
void	rrr(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	rr(t_stack *stack);
void	ra(t_stack *stack, int print);
void	rb(t_stack *stack, int print);
void	ss(t_stack *stack);
void	sa(t_stack *stack, int print);
void	sb(t_stack *stack, int print);

void	ft_sort(t_stack *stack, int size);
void	ft_sort_three(t_stack *s);
void	radix_sort(t_stack *stack);
void	selection_sort(t_stack *stack);
#endif
