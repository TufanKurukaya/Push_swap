/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tufan <tufan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:11:51 by tkurukay          #+#    #+#             */
/*   Updated: 2024/04/25 20:18:04 by tufan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <unistd.h>

void	pa(t_stack *stack)
{
	int	i;

	if (stack->size_b > 0)
	{
		i = stack->size_a;
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = stack->b[0];
		i = 0;
		while (i < stack->size_b - 1)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->size_a++;
		stack->size_b--;
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack *stack)
{
	int	i;

	if (stack->size_a > 0)
	{
		i = stack->size_b;
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[0] = stack->a[0];
		i = 0;
		while (i < stack->size_a - 1)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->size_b++;
		stack->size_a--;
		write(1, "pb\n", 3);
	}
}
