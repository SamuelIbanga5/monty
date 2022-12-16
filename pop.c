#include "monty.h"
/**
 * f_pop - removes the top elements of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 * if stack is empty print error message
 * can't pop an empty stack
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	h = *head;
	*head = h->next;
	free(h);
}
