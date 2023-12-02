/* SYSC 2006 Lab 12. */

typedef struct node {
    int data;
    struct node *next;
} node_t;

double power(double x, int n);
int count_in_array(int a[], int n, int target);
int count_in_sll(node_t *head, int target);
int last_in_sll(node_t *head);

/* Extra-practice exercises. */

int num_digits(int n);
double power2(double x, int n);
