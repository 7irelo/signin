#include "sign_in_form.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) 
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Signin::sign_in_form form;
	Application::Run(%form);
}

