#include "pch.h"
#include "MainForm.h"
#include "CircularButton.h"
#include "Board.h"

System::Void Reversi::MainForm::OnBoardLoad(System::Object^ sender, System::EventArgs^ e)
{
	this->Controls->Add(gcnew Reversi::Board());
	return System::Void();
}