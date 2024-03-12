#include <stdio.h>

#include "my_list.h"

int main()
{
    List* list = NULL;

    Laptop* laptop = Init("Asus", "Intel", 1);
    list = insert_start(laptop, list);
    laptop = Init("Mac", "Intel", 0);
    list = insert_start(laptop, list);
    laptop = Init("Lenovo", "AMD", 0);
    list = insert_start(laptop, list);
    list = remove_start(list);
    print_list(list);

    remove_all(&list);

    List* list2 = NULL;

    laptop = Init("Asus", "Intel", 1);
    list2 = InsertSort(laptop, list2);
    laptop = Init("Mac", "Intel", 0);
    list2 = InsertSort(laptop, list2);
    laptop = Init("Lenovo", "AMD", 0);
    list2 = InsertSort(laptop, list2);
    laptop = Init("Redmi", "Intel", 1);
    list2 = InsertSort(laptop, list2);

    list = deleteValue(*Init("Lenovo", "AMD", 0), list2);
    print_list(list2);
    remove_all(&list2);
    return 0;
}
