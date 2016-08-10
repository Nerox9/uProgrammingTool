#include "uProgramming.h"
#include <iostream>
#include <fstream>

using namespace System;

using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	uProgrammingTool::uProgramming form;
	Application::Run(%form);
}