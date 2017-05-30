//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PersonalArea.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPersonalForm *PersonalForm;
extern User *CurrentUser;
//---------------------------------------------------------------------------
__fastcall TPersonalForm::TPersonalForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPersonalForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	LoginForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TPersonalForm::ExitButtonClick(TObject *Sender)
{
	PersonalForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TPersonalForm::StatsButtonClick(TObject *Sender)
{
	ShowMessage("����� ��������� ����������: " + IntToStr(CurrentUser->GetExercisesDone()) + ".\n����� ������� ������: " + IntToStr(CurrentUser->GetMistakes()) + ".\n����� ��������� �������: " + IntToStr(CurrentUser->GetTime() / 3600) + ":" + IntToStr((CurrentUser->GetTime() % 3600) / 60) + ":" + IntToStr((CurrentUser->GetTime() % 3600) % 60) + ".");
}
//---------------------------------------------------------------------------

void __fastcall TPersonalForm::SettingsButtonClick(TObject *Sender)
{
	PersonalForm->Hide();
	SettingsForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TPersonalForm::ExercisesButtonClick(TObject *Sender)
{
	PersonalForm->Hide();
	ExerciseSelectForm->Show();
}
//---------------------------------------------------------------------------

