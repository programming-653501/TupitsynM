//---------------------------------------------------------------------------

#ifndef SettingsPageH
#define SettingsPageH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "PersonalArea.h"
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TSettingsForm : public TForm
{
__published:	// IDE-managed Components
	TCheckBox *MusicCheckBox;
	TRadioGroup *RadioGroup;
	TButton *DeleteButton;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall DeleteButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TSettingsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSettingsForm *SettingsForm;
//---------------------------------------------------------------------------
#endif
