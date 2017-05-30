//---------------------------------------------------------------------------

#ifndef ExerciseSelectH
#define ExerciseSelectH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "PersonalArea.h"
#include "ExercisePage.h"
#include <CheckLst.hpp>
//---------------------------------------------------------------------------
class TExerciseSelectForm : public TForm
{
__published:	// IDE-managed Components
	TListBox *ExerciseSelectListBox;
	TButton *StartExerciseButton;
	TButton *ReturnButton;
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall ReturnButtonClick(TObject *Sender);
	void __fastcall StartExerciseButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TExerciseSelectForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TExerciseSelectForm *ExerciseSelectForm;
//---------------------------------------------------------------------------
#endif
