#include "pch.h"
#include "Board.h"

Reversi::Board::Board()
{
	this->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
	this->RowCount = 8;
	this->ColumnCount = 8;
	for (int i = 0; i < 8; ++i)
	{
		this->ColumnStyles->Add(gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 12.5F));
		this->RowStyles->Add(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 12.5F));
	}
	this->Dock = System::Windows::Forms::DockStyle::Fill;
	this->Location = System::Drawing::Point(35, 35);
	this->Name = L"boardTableLayoutPanel";
	this->Size = System::Drawing::Size(1000, 1000);
	this->TabStop = false;


	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			CircularButton ^button = gcnew CircularButton;
			button->Dock = System::Windows::Forms::DockStyle::Fill;
			button->TabStop = false;
			this->Controls->Add(button, j, i);
		}
	}
	this->BackColor = System::Drawing::Color::DarkGreen;
}