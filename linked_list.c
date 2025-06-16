#include <stdio.h>
#include <stdlib.h>

typedef struct line {
    int data;
    struct line* link;
} sam;

void create_node(sam** ptr, int val);
void insert_node(sam** head, int val, int pos);
void delete_node(sam** head, int pos);
int print(sam* head);
void free_list(sam* head);

int main() {
    int n, val, op, data, pos;
    sam* head = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("No data entered.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &val);
        create_node(&head, val);
    }

    while (1) {
        printf("\nChoose Operation:\n 1) Print\n 2) Insert\n 3) Delete\n 4) Quit\n");
        scanf("%d", &op);

        if (op == 1)
            printf("Total count: %d\n", print(head));

        else if (op == 2) {
            printf("Enter value and position to insert: ");
            scanf("%d %d", &data, &pos);
            insert_node(&head, data, pos);
        }

        else if (op == 3) {
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            delete_node(&head, pos);
        }

        else if (op == 4) {
            printf("Linked list exited successfully.\n");
            break;
        }

        else {
            printf("Invalid choice.\n");
        }
    }

    free_list(head);
    return 0;
}

void create_node(sam** head, int val) {
    sam* new_node = (sam*)malloc(sizeof(sam));
    new_node -> data = val;
    new_node -> link = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }

    sam* temp =  *head;
    while (temp->link != NULL)
        temp = temp->link;

    temp->link = new_node;
}

void insert_node(sam** head, int val, int pos) {
    sam* new_node = (sam*)malloc(sizeof(sam));
    new_node->data = val;
    new_node->link = NULL;

    if (pos <= 0 || *head == NULL || pos == 1) {
        new_node->link = *head;
        *head = new_node;
        return;
    }

    sam* temp = *head;
    for (int i = 1; i < pos - 1 && temp->link != NULL; i++) {
        temp = temp->link;
    }

    new_node->link = temp->link;
    temp->link = new_node;
}

void delete_node(sam** head, int pos) {
    if (*head == NULL || pos <= 0) return;

    sam* temp = *head;

    if (pos == 1) {
        *head = temp->link;
        free(temp);
        return;
    }

    for (int i = 1; i < pos - 1 && temp->link != NULL; i++) {
        temp = temp->link;
    }

    if (temp->link == NULL) return;
	
    sam* to_delete = temp->link;
    temp->link = to_delete->link;
    free(to_delete);
}

int print(sam* ptr) {
    int count = 0;
    while (ptr != NULL) {
        printf("%d (link: %p)\n", ptr->data, (void*)ptr->link);
        ptr = ptr->link;
        count++;
    }
    return count;
}

void free_list(sam* head) {
    sam* temp;
    while (head != NULL) {
        temp = head;
        head = head->link;
        free(temp);
    }
}

