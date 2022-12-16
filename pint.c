#include "monty.h"
/**
 * f_pint - prints the value at the top of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 * if stack is empty, print error message
 * can't pint, sack empty
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
