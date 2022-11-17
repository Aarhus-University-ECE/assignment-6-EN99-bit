#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node
{
  int data;
  struct node *next;
} node;

void add(node *head, int x)
{
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head != NULL);
  node *p = head;
  while (p->next != NULL)
  {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node *)malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element;
}

int size(node *l)
{
  node *p = l;
  int i = 0;
  while (p->next != NULL)
  {
    p = p->next;
    i++;
  }
  return i;
}

void printout(node *l)
{
  /*Excercise 3d) Implement your changes..
    pre: head points to the first, empty element. The last element's next is NULL
    post: the values of the list are printed out*/
  node *p = l->next;
  while (p != NULL)
  {
    printf("%d, ", p->data);
    p = p->next;
  }
  printf("\n");
}
/*Excercise 3e) Add your code below.*/

int largest(node *l)
{
  node *p = l->next;

  int largest = p->data;

  while (p != NULL)
  {
    if (p->data > largest)
    {
      largest = p->data;
    }
    p = p->next;
  }
  // Need to find the largest element of the nodes
  // pre: head points to the first, empty element. The last element's next is NULL. size(l>0)
  // post: returns the largest value of the list*/

  return largest;
}
