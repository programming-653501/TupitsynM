//---------------------------------------------------------------------------

#ifndef RegisterPageH
#define RegisterPageH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "LoginPage.h"
//---------------------------------------------------------------------------
class TRegisterForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *NameLabel;
	TLabel *NicknameLabel;
	TLabel *PasswordLabel1;
	TLabel *PasswordLabel2;
	TGroupBox *GroupBox;
	TEdit *NameEdit;
	TEdit *NicknameEdit;
	TEdit *PasswordEdit1;
	TEdit *PasswordEdit2;
	TButton *RegisterButton;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall RegisterButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TRegisterForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegisterForm *RegisterForm;
//---------------------------------------------------------------------------
#endif
