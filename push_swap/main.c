#include "push_swap.h"
#include <stdio.h> // Include this header for file operations

int main(int argc, char **argv)
{
    linked_list *stacka;
    linked_list *stackb;
    n_list *ptr;
    FILE *log_file;

    if (argc < 2)
        return (0);

    stacka = get_input(argv + 1, argc - 1);
    if (!stacka)
    {
        printf("Error\n");
        return (0);
    }

    stackb = new_list();
    if (!stackb)
    {
        free_list(stacka);
        printf("Error\n");
        return (0);
    }

    // Open the log file for writing
    log_file = fopen("operations.log", "w");
    if (!log_file)
    {
        perror("Error opening log file");
        free_list(stacka);
        free_list(stackb);
        return (1);
    }

    index_list(stacka);

    ptr = stacka->start;
    if (!ptr)
    {
        fprintf(stderr, "Error: stacka is empty\n");
        return (1);
    }
    while (ptr)
    {
        // printf("i:%d\n", ptr->index);
        // printf("v:%d\n", ptr->value);
        printf("\n");
        ptr = ptr->next;
    }

    // Pass the file pointer to radix_sort
    radix_sort(&stacka, &stackb, log_file);

    // Close the log file
    fclose(log_file);

    free_list(stacka);
    free_list(stackb);

    return (0);
}