#include <stdio.h>
#include <stdlib.h>
struct Node {
    int coeff;
    int exp;
    struct Node* next;
};
struct Node* createNode(int coeff, int exp)
 {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}
void insertTerm(struct Node** head, int coeff, int exp)
 {
    struct Node* newNode = createNode(coeff, exp);
    if (!*head || (*head)->exp < exp) 
    {
        newNode->next = *head;
        *head = newNode;
    } 
    else 
    {
        struct Node* temp = *head;
        while (temp->next && temp->next->exp > exp) temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) 
{
    struct Node *result = NULL;
    while (poly1 || poly2) 
    {
        if (poly1 && (!poly2 || poly1->exp > poly2->exp)) 
        {
            insertTerm(&result, poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        } 
        else if (poly2 && (!poly1 || poly1->exp < poly2->exp)) 
        {
            insertTerm(&result, poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        } 
        else 
        {
            insertTerm(&result, poly1->coeff + poly2->coeff, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    return result;
}
void printPolynomial(struct Node* head) 
{
    while (head) 
    {
        if (head->coeff > 0 && head != head) printf(" + ");
        printf("%dx^%d", head->coeff, head->exp);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node *poly1 = NULL, *poly2 = NULL;
    insertTerm(&poly1, 6, 3);
    insertTerm(&poly1, 10, 2);
    insertTerm(&poly1, 0, 1);
    insertTerm(&poly1, 5, 0);

    insertTerm(&poly2, 1, 0);
    insertTerm(&poly2, 2, 1);
    insertTerm(&poly2, 4, 2);

    struct Node* result = addPolynomials(poly1, poly2);

    printf("Sum of the polynomials: ");
    printPolynomial(result);

    return 0;
}
