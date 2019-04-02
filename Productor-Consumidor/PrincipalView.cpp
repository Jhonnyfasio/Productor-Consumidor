#include "PrincipalView.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProductorConsumidor::PrincipalView principal;
	Application::Run(%principal);
	return 0;
}