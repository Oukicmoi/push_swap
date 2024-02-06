/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtraiman <gtraiman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:59:00 by gtraiman          #+#    #+#             */
/*   Updated: 2024/02/06 21:08:02 by gtraiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <unistd.h>

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	if (!tab) 
		return ;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}
int	main(int ac, char **av)
{
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	initialize_stack(ac, av, &stack_a);
	if(initialize_stack(ac, av, &stack_a) == 1)
		ft_stclear(&stack_a);
	allthree1(&stack_a, &stack_b);
	sort_three(&stack_a);
	emptyb(&stack_a, &stack_b);
	final_sort(&stack_a);
	ft_stclear(&stack_a);
}