//---------------------------------------------------------------------------

#ifndef UserH
#define UserH
//---------------------------------------------------------------------------
#endif
#include <vcl.h>
#include "Stats.h"
class User
{
	private:
		AnsiString Name;
		AnsiString Nickname;
		AnsiString Password;
		bool Exercises[10];
		Stats UserStats;
	public:
		void SetName(AnsiString _Name);
		AnsiString GetName();
		void SetNickname(AnsiString _Nickname);
		AnsiString GetNickname();
		void SetPassword(AnsiString _Password);
		AnsiString GetPassword();
		void SetExercise(int Number, bool State);
		bool GetExercise(int Number);
		void SetExercisesDone(int Amount);
		int GetExercisesDone();
		void SetMistakes(int Amount);
		int GetMistakes();
		void SetTime(int Seconds);
		int GetTime();

	User();
};