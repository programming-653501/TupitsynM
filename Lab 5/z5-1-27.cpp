#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <queue>

struct List_Elem
{
	List_Elem *next;
	List_Elem *prev;
	int Queue_Number;
	char action;
	char symbol;
};
struct List
{
	List_Elem *Head;
	List_Elem *Tail;
	int Number;
} Instructions;

void Pros_Queue(int i, char action, char symbol, std::queue <char> *queues)
{
	if (action == 'A')
	{
		queues[i - 1].push(symbol);
	}
		else
		{
			queues[i - 1].pop();
		}
}

void Read_Instruction(FILE *file)
{
    Instructions.Number++;

	List_Elem *p = new List_Elem;
	p -> next = p -> prev = NULL;

	int i;
	char pr;
	char s;
	fscanf(file, "%u %c %c\n", &i, &pr, &s);
	p -> Queue_Number = i;
	p -> action = pr;
	p -> symbol = s;

	if (Instructions.Head == NULL)
	{
		Instructions.Head = p;
		Instructions.Tail = p;
	}
		else
		{
			p -> prev = Instructions.Tail;
			Instructions.Tail -> next = p;
			Instructions.Tail = p;
		}
}

int main()
{
	Instructions.Head = NULL;
	Instructions.Tail = NULL;
	Instructions.Number = 0;

	FILE *file;
	if ((file = fopen("instructions.txt", "r")) == NULL)
	{
		std::cout << "File \"instructions.txt\" can't be opened\n";
		getch();
		return 1;
	}

    int n;
	fscanf(file, "%u\n", &n);

	while(!feof(file))
	{
		Read_Instruction(file);
	}

	std::queue <char> *queues;
	queues = new std::queue <char> [n];
	List_Elem *p;
	p = Instructions.Head;
	for (int i = 0; i < Instructions.Number; i++)
	{
		Pros_Queue(p -> Queue_Number, p -> action, p -> symbol, queues);
		p = p -> next;
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << "Queue " << i + 1 << " contains: ";
		while(queues[i].size())
		{
			std::cout << queues[i].front() << " ";
			queues[i].pop();
		}
		std::cout << '\n';
	}

	getch();

	return 0;
}
