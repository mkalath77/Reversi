#include "pch.h"
#include "Board.h"
// #include "Board.h"

System::Void Reversi::Board::OnBoardLoad(System::Object^ sender, System::EventArgs^ e)
{
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			auto button = gcnew System::Windows::Forms::Button;
			button->Dock = System::Windows::Forms::DockStyle::Fill;
			button->BackColor = System::Drawing::Color::LightGray;
			button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			button->TabStop = false;
			boardTableLayoutPanel->Controls->Add(button, j, i);
		}
	}

	return System::Void();
}