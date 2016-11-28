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

	System::Void CppWinform::sampson::button1_Click(System::Object^  sender, System::EventArgs^  e) {
		sampson^ Sampson = gcnew Sampson();
		Sampson->Show();
		this->Hide();
	}
}
