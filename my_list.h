//
// Created by Володя on 27.02.2024.
//

#ifndef MY_LIST_H
#define MY_LIST_H
#include "Laptop.h"

typedef struct List {
    Laptop* value;
    struct List* next;
} List;

List* insert_start(Laptop* n, List* head);

List* remove_start(List* head);

void print_list(List* head);

List* InsertSort(Laptop* newValue, List* head);

void remove_all(List** list);

List* deleteValue(Laptop value, List* head);

#endif //MY_LIST_H
