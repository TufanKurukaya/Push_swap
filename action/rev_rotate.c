/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tufan <tufan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:11:38 by tkurukay          #+#    #+#             */
/*   Updated: 2024/04/25 20:18:05 by tufan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <unistd.h>

void	rra(t_stack *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_a > 1)
	{
		tmp = stack->a[stack->size_a - 1];
		i = stack->size_a;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[i] = tmp;
		if (!print)
			write(1, "rra\n", 4);
	}
}

void	rrb(t_stack *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_b > 1)
	{
		tmp = stack->b[stack->size_b - 1];
		i = stack->size_b;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[i] = tmp;
		if (!print)
			write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack *stack)
{
	ra(stack, 1);
	rb(stack, 1);
	write(1, "rrr\n", 4);
}
