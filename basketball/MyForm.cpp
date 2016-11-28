#include <C:\Users\Juche\Documents\Visual Studio 2015\Projects\solution1\basketball\mainform.h>
#include <C:\Users\Juche\Documents\Visual Studio 2015\Projects\solution1\basketball\sampson.h>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	basketball::MyForm form;
	Application::Run(%form);

}
