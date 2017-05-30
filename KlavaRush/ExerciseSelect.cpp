//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ExerciseSelect.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TExerciseSelectForm *ExerciseSelectForm;
AnsiString FileName;
extern User *CurrentUser;
//---------------------------------------------------------------------------
__fastcall TExerciseSelectForm::TExerciseSelectForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TExerciseSelectForm::FormClose(TObject *Sender, TCloseAction &Action)

{
	PersonalForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TExerciseSelectForm::ReturnButtonClick(TObject *Sender)
{
	ExerciseSelectForm->Close();
}
//---------------------------------------------------------------------------

void __fastcall TExerciseSelectForm::StartExerciseButtonClick(TObject *Sender)
{
	if (ExerciseSelectListBox->ItemIndex != -1)
	{
		if (ExerciseSelectListBox->ItemIndex > 9 || CurrentUser->GetExercise(ExerciseSelectListBox->ItemIndex))
		{
			if (ExerciseSelectListBox->ItemIndex < 10)
			{
				FileName = "Exercise" + IntToStr(ExerciseSelectListBox->ItemIndex + 1);
			}
			if (ExerciseSelectListBox->ItemIndex == 11) FileName = "FinalTest";
			if (ExerciseSelectListBox->ItemIndex == 10) FileName = "";
			ExerciseSelectForm->Hide();
			ExerciseForm->Show();
		}
			else
			{
				ShowMessage("�� ��� �� ������� ��� ����������, ����������, �������� ���������� ��� �������������");
				return;
			}
	}
		else
		{
			ShowMessage("�� �� ������� ����������!");
			return;
        }
}
//---------------------------------------------------------------------------

