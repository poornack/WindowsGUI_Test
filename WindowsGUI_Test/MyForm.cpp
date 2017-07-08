#include "MyForm.h"
#include <stdio.h>
#include <vector>
#include <stdlib.h>

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	WindowsGUI_Test::MyForm form;
	Application::Run(%form);


	std::vector<int> numbers;
}