#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array <String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Windowsrectangle::MyForm form;
	Application::Run(% form);
}

