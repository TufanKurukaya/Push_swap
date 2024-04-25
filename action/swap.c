/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tufan <tufan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:11:46 by tkurukay          #+#    #+#             */
/*   Updated: 2024/04/25 20:18:08 by tufan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <unistd.h>

void	sa(t_stack *stack, int print)
{
	int	tmp;

	if (stack->size_a > 1)
	{
		tmp = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = tmp;
		if (!print)
			write(1, "sa\n", 3);
	}
}

void	sb(t_stack *stack, int print)
{
	int	tmp;

	if (stack->size_b > 1)
	{
		tmp = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = tmp;
		if (!print)
			write(1, "sb\n", 3);
	}
}

void	ss(t_stack *stack)
{
	sa(stack, 1);
	sb(stack, 1);
	write(1, "ss\n", 3);
}
