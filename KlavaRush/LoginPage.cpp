//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "LoginPage.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include <stdio.h>

TLoginForm *LoginForm;
List UserList;
FILE *UsersInput = fopen("Users.sav", "r");
User *CurrentUser;
//---------------------------------------------------------------------------

__fastcall TLoginForm::TLoginForm(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TLoginForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	FILE *UsersOutput = fopen("Users.sav", "w");
	Node *Pointer;
	Pointer = UserList.GetHead();
	while (Pointer)
	{
		char Name[20];
		char Nickname[20];
		char Password[20];
		AnsiString _Name = Pointer->UserInfo->GetName();
		for (int Counter = 0; Counter < _Name.Length(); Counter++)
		{
			Name[Counter] = _Name[Counter + 1];
		}
		Name[_Name.Length()] = '\0';
		AnsiString _Nickname = Pointer->UserInfo->GetNickname();
		for (int Counter = 0; Counter < _Nickname.Length(); Counter++)
		{
			Nickname[Counter] = _Nickname[Counter + 1];
		}
		Nickname[_Nickname.Length()] = '\0';
		AnsiString _Password = Pointer->UserInfo->GetPassword();
		for (int Counter = 0; Counter < _Password.Length(); Counter++)
		{
			Password[Counter] = _Password[Counter + 1];
		}
		Password[_Password.Length()] = '\0';
		fprintf(UsersOutput, "%s %s %s %u %u %u %u %u %u %u %u %u %u %u %u %u", Name, Nickname, Password, Pointer->UserInfo->GetExercise(0), Pointer->UserInfo->GetExercise(1), Pointer->UserInfo->GetExercise(2), Pointer->UserInfo->GetExercise(3), Pointer->UserInfo->GetExercise(4), Pointer->UserInfo->GetExercise(5), Pointer->UserInfo->GetExercise(6), Pointer->UserInfo->GetExercise(7), Pointer->UserInfo->GetExercise(8), Pointer->UserInfo->GetExercise(9), Pointer->UserInfo->GetExercisesDone(), Pointer->UserInfo->GetMistakes(), Pointer->UserInfo->GetTime());
		if (Pointer->Next) putc('\n', UsersOutput);
		Pointer = Pointer->Next;
	}
	fclose(UsersOutput);
	WelcomeForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TLoginForm::RegisterLabelMouseEnter(TObject *Sender)
{
	RegisterLabel->Font->Color = clBlue;
	RegisterLabel->Font->Style = RegisterLabel->Font->Style << fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TLoginForm::RegisterLabelMouseLeave(TObject *Sender)
{
	RegisterLabel->Font->Color = clBlack;
	RegisterLabel->Font->Style = RegisterLabel->Font->Style >> fsUnderline;
}
//---------------------------------------------------------------------------

void __fastcall TLoginForm::LoginButtonClick(TObject *Sender)
{
	CurrentUser = UserList.Check(NicknameEdit->Text, PasswordEdit->Text);
	if (!CurrentUser)
	{
		ShowMessage("�������� ����� ��� ������!");
		PasswordEdit->Clear();
	}
		else
		{
            switch (rand() % 5)
			{
				case 0: ShowMessage("����� ����������, " + CurrentUser->GetName() +"! ������� ����������!");;
						break;
				case 1: ShowMessage("���," + CurrentUser->GetName() + ", ����� �� ��������!");
						break;
				case 2: ShowMessage(CurrentUser->GetName() + ", ��� ��� ������!");
						break;
				case 3: ShowMessage("���! " + CurrentUser->GetName() + "! � ��� ������ ��� ������ ������� �� �������!");
						break;
				case 4: ShowMessage("��� �� ��� ��������! " + CurrentUser->GetName() + "! ����� � ����������� ����������!");
						break;
			}
			PasswordEdit->Clear();
			LoginForm->Hide();
			PersonalForm->Show();
		}
}
//---------------------------------------------------------------------------

void __fastcall TLoginForm::FormCreate(TObject *Sender)
{
	while(!feof(UsersInput))
	{
		char Name[20];
		char Nickname[20];
		char Password[20];
		bool Exercises[10];
		int ExercisesDone;
		int Mistakes;
		int Time;
		fscanf(UsersInput, "%s %s %s %u %u %u %u %u %u %u %u %u %u %u %u %u/n", Name, Nickname, Password, &Exercises[0], &Exercises[1], &Exercises[2], &Exercises[3], &Exercises[4], &Exercises[5], &Exercises[6], &Exercises[7], &Exercises[8], &Exercises[9], &ExercisesDone, &Mistakes, &Time);
		User *NewUser = new User;
		NewUser->SetName((AnsiString)Name);
		NewUser->SetNickname((AnsiString)Nickname);
		NewUser->SetPassword((AnsiString)Password);
		for (int Counter = 0; Counter < 10; Counter++)
		{
			NewUser->SetExercise(Counter, Exercises[Counter]);
		}
		NewUser->SetExercisesDone(ExercisesDone);
		NewUser->SetMistakes(Mistakes);
		NewUser->SetTime(Time);
		UserList.Add(NewUser);
	}
	fclose(UsersInput);
}
//---------------------------------------------------------------------------

void __fastcall TLoginForm::RegisterLabelClick(TObject *Sender)
{
	LoginForm->Hide();
	RegisterForm->Show();
}
//---------------------------------------------------------------------------

