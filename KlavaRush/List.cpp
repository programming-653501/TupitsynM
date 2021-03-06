//---------------------------------------------------------------------------


#pragma hdrstop

#include "List.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

void List::Add(User *NewUser)
{
	Node *Pointer = new Node;
	Pointer->UserInfo = NewUser;
	if (!Head)
	{
		Head = Pointer;
		Tail = Pointer;
	}
		else
		{
			Tail->Next = Pointer;
			Tail = Pointer;
		}
}

bool List::Delete(AnsiString UserNickname)
{
	Node *Pointer;
	Pointer = Head;
	if (Head->UserInfo->GetNickname() == UserNickname)
	{
		Head = Head->Next;
		delete Pointer;
		return true;
	}
		else
		{
			while(Pointer->Next->UserInfo->GetNickname() != UserNickname && Pointer->Next)
			{
				Pointer = Pointer->Next;
			}
			if (!Pointer->Next) return false;
				else
				{
					Node *ForDelete;
					ForDelete = Pointer->Next;
					Pointer->Next = Pointer->Next->Next;
					delete ForDelete;
					return true;
				}
		}
}

User* List::Check(AnsiString Nickname, AnsiString Password)
{
	Node *Pointer;
	Pointer = Head;
	while(Pointer && (Pointer->UserInfo->GetNickname() != Nickname || Pointer->UserInfo->GetPassword() != Password))
			{
				Pointer = Pointer->Next;
			}
			if (!Pointer) return NULL;
				else return Pointer->UserInfo;

}

bool List::Check(AnsiString Nickname)
{
	Node *Pointer;
	Pointer = Head;
	while(Pointer && Pointer->UserInfo->GetNickname() != Nickname)
			{
				Pointer = Pointer->Next;
			}
			if (!Pointer) return false;
				else return true;

}

Node* List::GetHead()
{
	return Head;
}

List::List()
{
	Head = NULL;
	Tail = NULL;
}
