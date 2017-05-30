//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("SettingsPage.cpp", SettingsForm);
USEFORM("RegisterPage.cpp", RegisterForm);
USEFORM("PersonalArea.cpp", PersonalForm);
USEFORM("WelcomePage.cpp", WelcomeForm);
USEFORM("ExerciseSelect.cpp", ExerciseSelectForm);
USEFORM("LoginPage.cpp", LoginForm);
USEFORM("ExercisePage.cpp", ExerciseForm);
//---------------------------------------------------------------------------
WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TWelcomeForm), &WelcomeForm);
		Application->CreateForm(__classid(TLoginForm), &LoginForm);
		Application->CreateForm(__classid(TRegisterForm), &RegisterForm);
		Application->CreateForm(__classid(TPersonalForm), &PersonalForm);
		Application->CreateForm(__classid(TSettingsForm), &SettingsForm);
		Application->CreateForm(__classid(TExerciseSelectForm), &ExerciseSelectForm);
		Application->CreateForm(__classid(TExerciseForm), &ExerciseForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
