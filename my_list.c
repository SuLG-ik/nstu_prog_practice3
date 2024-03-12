//
// Created by Володя on 27.02.2024.
//

#include "my_list.h"

#include <stdlib.h>

// вставка перед элементом
List* insert_start(Laptop* n, List* head)
{
    List* q = malloc(sizeof(List)); // выделение памяти
    q->value = n; // присвоение значения
    q->next = head; // присвоение ссылки на следующий элемент
    return q;
}

List* remove_start(List* head)
{
    List* q = head->next;
    free(head);
    return q;
}

void print_list(List* head)
{
    while (head != NULL)
    {
        print_laptop(*head->value);
        head = head->next;
    }
}

void remove_all(List** list)
{
    List* head = *list;
    while (head != NULL)
    {
        List* next = head->next;
        free(head);
        head = next;
    }
    *list = NULL;
}

List* InsertSort(Laptop* newValue, List* head)
{
    List* item = malloc(sizeof(List));
    item->value = newValue;
    item->next = NULL;
    List* tmp = head;
    if (head == NULL) return item;
    if (LessThan(*newValue, *head->value))
    {
        item->next = head;
        return item;
    }
    while (tmp->next != NULL)
    {
        if (LessThan(*newValue, *tmp->next->value))
        {
            item->next = tmp->next;
            tmp->next = item;
            break;
        }
        tmp = tmp->next;
    }
    tmp->next = item;
    return head;
}

List* deleteValue(Laptop value, List* head) {
    List* prev = head;
    List* item;
    if (head == NULL) return NULL;
    if (Equals(*head->value, value)) {
        item = head;
        head = head->next;
        free(item);
        return head;
    }
    while (prev->next != NULL) {
        if (Equals(*prev->next->value, value)) {
            item = prev->next;
            prev->next = prev->next->next;
            free(item);
            return head;
        }
        else prev = prev->next;
    }
    return head;
}