//---------------------------------------------------------------------------

#ifndef LoginPageH
#define LoginPageH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "WelcomePage.h"
#include "RegisterPage.h"
#include "PersonalArea.h"
#include "List.h"
//---------------------------------------------------------------------------
class TLoginForm : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TEdit *NicknameEdit;
	TEdit *PasswordEdit;
	TLabel *RegisterLabel;
	TLabel *NicknameLabel;
	TLabel *PasswordLabel;
	TButton *LoginButton;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall RegisterLabelMouseEnter(TObject *Sender);
	void __fastcall RegisterLabelMouseLeave(TObject *Sender);
	void __fastcall LoginButtonClick(TObject *Sender);
	void __fastcall RegisterLabelClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLoginForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginForm *LoginForm;
//---------------------------------------------------------------------------
#endif
