//---------------------------------------------------------------------------


#pragma hdrstop

#include "User.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)

void User::SetName(AnsiString _Name)
{
	Name = _Name;
}

AnsiString User::GetName()
{
	return Name;
}

void User::SetNickname(AnsiString _Nickname)
{
	Nickname = _Nickname;
}

AnsiString User::GetNickname()
{
	return Nickname;
}

void User::SetPassword(AnsiString _Password)
{
	Password = _Password;
}

AnsiString User::GetPassword()
{
	return Password;
}

void User::SetExercise(int Number, bool State)
{
	Exercises[Number] = State;
}

bool User::GetExercise(int Number)
{
	return Exercises[Number];
}

void User::SetExercisesDone(int Amount)
{
	UserStats.ExercisesDone += Amount;
}

int User::GetExercisesDone()
{
	return UserStats.ExercisesDone;
}

void User::SetMistakes(int Amount)
{
	UserStats.Mistakes += Amount;
}

int User::GetMistakes()
{
	return UserStats.Mistakes;
}

void User::SetTime(int Seconds)
{
	UserStats.Time += Seconds;
}

int User::GetTime()
{
	return UserStats.Time;
}

User::User()
{
	Name = "";
	Nickname = "";
	Password = "";
	Exercises[0] = true;
	for (int Counter = 1; Counter < 10; Counter++)
	{
        Exercises[Counter] = false;
	}
	UserStats.ExercisesDone = 0;
	UserStats.Mistakes = 0;
	UserStats.Time = 0;
}