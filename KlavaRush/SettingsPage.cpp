//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "SettingsPage.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSettingsForm *SettingsForm;
extern User *CurrentUser;
extern List UserList;
bool Delete = false;
//---------------------------------------------------------------------------
__fastcall TSettingsForm::TSettingsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TSettingsForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	if (!Delete)
	{
		PersonalForm->Show();
	}
		else
		{
			Delete = false;
			CurrentUser = NULL;
			LoginForm->Show();
        }
}
//---------------------------------------------------------------------------
void __fastcall TSettingsForm::DeleteButtonClick(TObject *Sender)
{
	UserList.Delete(CurrentUser->GetName());
	ShowMessage("Жаль, что Вы покинули нас... Надеюсь, еще увидимся!");
	Delete = true;
	SettingsForm->Close();
}
//---------------------------------------------------------------------------

