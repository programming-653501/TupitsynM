//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "v10.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::AEditClick(TObject *Sender)
{
	AEdit->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::BEditClick(TObject *Sender)
{
	BEdit->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::CEditClick(TObject *Sender)
{
	CEdit->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::DEditClick(TObject *Sender)
{
	DEdit->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::EEditClick(TObject *Sender)
{
	EEdit->Clear();
}
//---------------------------------------------------------------------------



void __fastcall TMainForm::CountButtonClick(TObject *Sender)
{
    PostfixFormPanel->Caption = "";
	try
	{
		StrToInt(AEdit->Text);
		StrToInt(BEdit->Text);
		StrToInt(CEdit->Text);
		StrToInt(DEdit->Text);
		StrToInt(EEdit->Text);
	}
		catch(...)
		{
			ShowMessage("�� ����� �� ��� ����� ��� ��������� ����� ��������� 2^31");
			return;
		}
	//������� � ���
	//Stack - ���� ��� �������� ��������
	//expression - ������ � ��������� ��������� ���������
	//counter - ��������� ������� � �������
	std::stack <char> Stack;
	char expression[] = "a*(b+c)/(d-e)";
	int counter = 0;

	while (expression[counter] != '\0')
	{
		if (strchr("abcde", expression[counter]))
		{
			PostfixFormPanel->Caption = PostfixFormPanel->Caption + expression[counter];
		}
		if (strchr("(", expression[counter]))
		{
			Stack.push(expression[counter]);
		}
		if (strchr(")", expression[counter]))
		{
			while(Stack.top() != '(')
			{
				PostfixFormPanel->Caption = PostfixFormPanel->Caption + Stack.top();
				Stack.pop();
			}
			Stack.pop();
		}
		if (strchr("*/", expression[counter]))
		{
			while(!Stack.empty() && !strchr("+-()", Stack.top()))
			{
				PostfixFormPanel->Caption = PostfixFormPanel->Caption + Stack.top();
				Stack.pop();
			}
			Stack.push(expression[counter]);
		}
		if (strchr("+-", expression[counter]))
		{
			while(!Stack.empty() && !strchr("()", Stack.top()))
			{
				PostfixFormPanel->Caption = PostfixFormPanel->Caption + Stack.top();
				Stack.pop();
			}
			Stack.push(expression[counter]);
		}
		counter++;
	}
	while(!Stack.empty())
	{
		PostfixFormPanel->Caption = PostfixFormPanel->Caption + Stack.top();
		Stack.pop();
	}

	//���������� ��������� � ���
	//Operands - ���� ��� �������� ��������
	//counter - ������� � ������
	//str - ������, ���������� ��������� � ���
	//operand1 - �������� ������ ��������
	//operand2 - �������� ������� ��������

	int operand1, operand2;
	std::stack <long double> Operands;
	String str = PostfixFormPanel->Caption;

	for (int counter = 1; counter <= str.Length(); counter++)
	{
		if (strchr("abcde", str[counter]))
		{
			switch(str[counter])
			{
				case 'a': Operands.push(StrToFloat(AEdit->Text));
						  break;
				case 'b': Operands.push(StrToFloat(BEdit->Text));
						  break;
				case 'c': Operands.push(StrToFloat(CEdit->Text));
						  break;
				case 'd': Operands.push(StrToFloat(DEdit->Text));
						  break;
				case 'e': Operands.push(StrToFloat(EEdit->Text));
						  break;
			}
		}
			else
			{
				operand2 = Operands.top();
				Operands.pop();
				operand1 = Operands.top();
				Operands.pop();

				switch(str[counter])
				{
					case '+': Operands.push((long double)operand1 + operand2);
							  break;
					case '-': Operands.push((long double)operand1 - operand2);
							  break;
					case '*': Operands.push((long double)operand1 * operand2);
							  break;
					case '/': Operands.push((long double)operand1 / operand2);
							  break;
				}
			}
	}
		ResultPostfFormPanel->Caption = FloatToStr(Operands.top());
		ResultInfFormPanel->Caption = FloatToStr(StrToFloat(AEdit->Text) * (StrToFloat(BEdit->Text) + StrToFloat(CEdit->Text)) / (StrToFloat(DEdit->Text) - StrToFloat(EEdit->Text)));
}
//---------------------------------------------------------------------------

