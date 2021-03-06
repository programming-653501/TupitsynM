//---------------------------------------------------------------------------

#ifndef ListH
#define ListH
//---------------------------------------------------------------------------
#endif
#include "Node.h"

class List
{
	private:
		Node *Head;
		Node *Tail;
	public:
		void Add(User *NewUser);
		bool Delete(AnsiString UserNickname);
		User* Check(AnsiString Nickname, AnsiString Password);
		Node* GetHead();
		bool Check(AnsiString Nickname);

	List();
};
