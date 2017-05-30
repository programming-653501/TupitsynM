//---------------------------------------------------------------------------

#ifndef ExercisePageH
#define ExercisePageH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "ExerciseSelect.h"
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TExerciseForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *MistakesLabel;
	TLabel *AmountOfMistakesLabel;
	TEdit *EnterEdit;
	TPanel *Panel;
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TPanel *Panel4;
	TPanel *Panel5;
	TPanel *Panel6;
	TPanel *Panel7;
	TPanel *Panel8;
	TPanel *Panel9;
	TPanel *Panel0;
	TPanel *PanelMinus;
	TPanel *PanelEqual;
	TPanel *PanelQ;
	TPanel *PanelW;
	TPanel *PanelE;
	TPanel *PanelR;
	TPanel *PanelT;
	TPanel *PanelY;
	TPanel *PanelU;
	TPanel *PanelI;
	TPanel *PanelO;
	TPanel *PanelP;
	TPanel *PanelCh1;
	TPanel *PanelCh2;
	TPanel *PanelCh3;
	TPanel *PanelA;
	TPanel *PanelS;
	TPanel *PanelD;
	TPanel *PanelF;
	TPanel *PanelG;
	TPanel *PanelH;
	TPanel *PanelJ;
	TPanel *PanelK;
	TPanel *PanelL;
	TPanel *PanelCh4;
	TPanel *PanelCh5;
	TPanel *PanelCh6;
	TPanel *PanelZ;
	TPanel *PanelX;
	TPanel *PanelC;
	TPanel *PanelV;
	TPanel *PanelB;
	TPanel *PanelN;
	TPanel *PanelM;
	TPanel *PanelCh7;
	TPanel *PanelCh8;
	TPanel *PanelCh9;
	TRichEdit *RichEdit;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall EnterEditKeyPress(TObject *Sender, wchar_t &Key);

private:	// User declarations
public:		// User declarations
	__fastcall TExerciseForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TExerciseForm *ExerciseForm;
//---------------------------------------------------------------------------
#endif
