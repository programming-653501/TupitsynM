//---------------------------------------------------------------------------

#ifndef PersonalAreaH
#define PersonalAreaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "SettingsPage.h"
#include "ExerciseSelect.h"
#include "LoginPage.h"
//---------------------------------------------------------------------------
class TPersonalForm : public TForm
{
__published:	// IDE-managed Components
	TButton *ExercisesButton;
	TButton *StatsButton;
	TButton *SettingsButton;
	TButton *ExitButton;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall ExitButtonClick(TObject *Sender);
	void __fastcall StatsButtonClick(TObject *Sender);
	void __fastcall SettingsButtonClick(TObject *Sender);
	void __fastcall ExercisesButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPersonalForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPersonalForm *PersonalForm;
//---------------------------------------------------------------------------
#endif
