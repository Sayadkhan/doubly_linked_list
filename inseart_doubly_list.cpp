#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int vlue;
  Node *next;
  Node *prev;

  Node(int val)
  {
    this->vlue = val;
    this->next = NULL;
    this->prev = NULL;
  }
};
void print_linked_list(Node *head)
{
  Node *tmp = head;

  while (tmp != NULL)
  {
    cout << tmp->vlue << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

void insart_at_postion(Node *head, int pos, int value)
{
  Node *Newnode = new Node(value);

  Node *tmp = head;

  for (int i = 1; i <= pos - 1; i++)
  {
    tmp = tmp->next;
  }
  Newnode->next = tmp->next;
  tmp->next = Newnode;
  Newnode->next->prev = Newnode;
  Newnode->prev = tmp;
}

void print_revarse_linked_list(Node *tail)
{

  Node *tmp = tail;

  while (tmp != NULL)
  {
    cout << tmp->vlue << " ";
    tmp = tmp->prev;
  }
  cout << endl;
}
int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);

  // Node *b = new Node(10);

  Node *tail = b;

  head->next = a;
  a->prev = head;
  a->next = b;
  b->prev = a;

  int pos, value;

  cin >> pos >> value;

  insart_at_postion(head, pos, value);

  print_linked_list(head);
  print_revarse_linked_list(tail);
  return 0;
}