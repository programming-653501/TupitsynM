//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "WelcomePage.h"
#include "LoginPage.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TWelcomeForm *WelcomeForm;
//---------------------------------------------------------------------------
__fastcall TWelcomeForm::TWelcomeForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TWelcomeForm::StartButtonClick(TObject *Sender)
{
	LoginForm->Show();
	WelcomeForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TWelcomeForm::ExitButtonClick(TObject *Sender)
{
	WelcomeForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TWelcomeForm::InfoButtonClick(TObject *Sender)
{
	ShowMessage("KlavaRush ������ 1.0.\n������� ������� �� ����� Hardicon.\n������� �� ������������� ������ ����� ����������.");
}
//---------------------------------------------------------------------------


