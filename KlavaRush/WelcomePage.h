//---------------------------------------------------------------------------

#ifndef WelcomePageH
#define WelcomePageH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TWelcomeForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *StartButton;
	TButton *InfoButton;
	TButton *ExitButton;
	void __fastcall StartButtonClick(TObject *Sender);
	void __fastcall ExitButtonClick(TObject *Sender);
	void __fastcall InfoButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TWelcomeForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWelcomeForm *WelcomeForm;
//---------------------------------------------------------------------------
#endif
