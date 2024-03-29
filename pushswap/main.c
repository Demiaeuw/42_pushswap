#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_data	data;

	init_data(&data);
	step01(ac, av, &data);
	step02(ac, av, &data);
	// step03(&data);
	ft_printf("\nstack A\n\n");
	print_list(data.stack_a);
	ft_printf("\nstack B\n\n");
	print_list(data.stack_b);
	// if (ac == 2)
	// {
	// 	ft_printf("\nliste comme recus\n\n");
	// 	ft_printf("stack A\n\n");
	// 	print_list(data.stack_a);
	// 	ft_printf("\nstack B\n\n");
	// 	print_list(data.stack_b);
	// 	one_entry(&(data.stack_a));
	// 	ft_printf("\nTrie de une entrée\n\n");
	// 	print_list(data.stack_a);
	// 	print_list(data.stack_b);
	// 	ft_printf("\napres reinitialisation de l'index\n\n");
	// 	reset_index(data.stack_a);
	// 	reset_index(data.stack_b);
	// 	ft_printf("stack A\n\n");
	// 	print_list(data.stack_a);
	// 	ft_printf("\nstack B\n\n");
	// 	print_list(data.stack_b);
	// }
	// else if (ac == 3)
	// {
	// 	ft_printf("\nliste comme recus\n\n");
	// 	ft_printf("stack A\n\n");
	// 	print_list(data.stack_a);
	// 	ft_printf("\nstack B\n\n");
	// 	print_list(data.stack_b);
	// 	two_entry(&(data.stack_a));
	// 	ft_printf("\nTrie de deux entrées\n\n");
	// 	print_list(data.stack_a);
	// 	print_list(data.stack_b);
	// 	ft_printf("\napres reinitialisation de l'index\n\n");
	// 	reset_index(data.stack_a);
	// 	reset_index(data.stack_b);
	// 	ft_printf("stack A\n\n");
	// 	print_list(data.stack_a);
	// 	ft_printf("\nstack B\n\n");
	// 	print_list(data.stack_b);
	// }
	// else if (ac == 4)
	// {
	// 	ft_printf("\nliste comme recus\n\n");
	// 	ft_printf("stack A\n\n");
	// 	print_list(data.stack_a);
	// 	ft_printf("\nstack B\n\n");
	// 	print_list(data.stack_b);
	// 	three_entry(&(data.stack_a));
	// 	ft_printf("\nTrie de trois entrées\n\n");
	// 	print_list(data.stack_a);
	// 	print_list(data.stack_b);
	// 	ft_printf("\napres reinitialisation de l'index\n\n");
	// 	reset_index(data.stack_a);
	// 	reset_index(data.stack_b);
	// 	ft_printf("stack A\n\n");
	// 	print_list(data.stack_a);
	// 	ft_printf("\nstack B\n\n");
	// 	print_list(data.stack_b);
	// }
	if (ac > 4)
	{
		// ft_printf("\nliste comme recus\n\n");
		// ft_printf("stack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);
		
		// ra(&(data.stack_a));
		
		// ft_printf("\nliste apres rotate\n\n");
		// ft_printf("stack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);
		// ft_printf("\napres reinitialisation de l'index\n\n");
		// reset_index(data.stack_a);
		// reset_index(data.stack_b);
		// ft_printf("stack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);


		// pb(&(data.stack_a), &(data.stack_b));

		// ft_printf("\nliste apres push\n\n");
		// ft_printf("stack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);
		// ft_printf("\napres reinitialisation de l'index\n\n");
		// reset_index(data.stack_a);
		// reset_index(data.stack_b);
		// ft_printf("stack A\n\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n\n");
		// print_list(data.stack_b);










		// trie_step_01(&data);
		// ft_printf("\nstack A\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n");
		// print_list(data.stack_b);

		step03(&data);
		ft_printf("\nstack A\n");
		print_list(data.stack_a);
		ft_printf("\nstack B\n");
		print_list(data.stack_b);


		// ft_printf("\ntest de debut de trie\n\n");
		// ft_printf("la target de ");
		// print_noeud_list(data.stack_b);
		// ft_printf("est ");
		// print_noeud_list(target_minus_prox(data.stack_a, data.stack_b->value));
		// target_to_node(&data);
		// ft_printf("\nstack A\n");
		// print_list(data.stack_a);
		// ft_printf("\nstack B\n");
		// print_list(data.stack_b);

		ft_printf("\n\nfin\n\n");


	}
	step_end(&data);
	return (0);
}
