#include "sampson.h"
#include "mainform.h"

System::Void basketball::sampson::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm^ mainForm = gcnew MyForm();
	mainForm->Show();
	this->Hide();
}




