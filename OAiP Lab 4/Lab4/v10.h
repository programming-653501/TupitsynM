//---------------------------------------------------------------------------

#ifndef v10H
#define v10H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <stack>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TPanel *InputExpressionPanel;
	TLabel *InputExpressionLabel;
	TPanel *PostfixFormPanel;
	TLabel *PostfixFormLabel;
	TLabel *InputLabel;
	TEdit *AEdit;
	TEdit *DEdit;
	TEdit *BEdit;
	TEdit *EEdit;
	TEdit *CEdit;
	TLabel *ResultInLabel;
	TLabel *InfFormLabel;
	TLabel *PostfFormLabel;
	TPanel *ResultInfFormPanel;
	TPanel *ResultPostfFormPanel;
	TButton *CountButton;
	void __fastcall AEditClick(TObject *Sender);
	void __fastcall BEditClick(TObject *Sender);
	void __fastcall CEditClick(TObject *Sender);
	void __fastcall DEditClick(TObject *Sender);
	void __fastcall EEditClick(TObject *Sender);
	void __fastcall CountButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
