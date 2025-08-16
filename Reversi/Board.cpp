#include "pch.h"
#include "Board.h"
#include "CircularButton.h"

System::Void Reversi::Board::OnBoardLoad(System::Object^ sender, System::EventArgs^ e)
{
	boardTableLayoutPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			auto button = gcnew CircularButton;
			button->Dock = System::Windows::Forms::DockStyle::Fill;
			button->TabStop = false;
			boardTableLayoutPanel->Controls->Add(button, j, i);
		}
	}

	return System::Void();
}