#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Media;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CoffeShop::Form1 form;
	Application::Run(% form);
	return 0;
}
