#pragma once
#include<ctime>
#include <random>
namespace TicTac {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  NewGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  WithFriendToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  WithAIToolStripMenuItem;
	protected:




	private: System::Windows::Forms::ToolStripMenuItem^  ExitToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;


















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->NewGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->WithFriendToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->WithAIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(301, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->NewGameToolStripMenuItem,
					this->toolStripSeparator1, this->ExitToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// NewGameToolStripMenuItem
			// 
			this->NewGameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->WithFriendToolStripMenuItem,
					this->WithAIToolStripMenuItem
			});
			this->NewGameToolStripMenuItem->Name = L"NewGameToolStripMenuItem";
			this->NewGameToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->NewGameToolStripMenuItem->Text = L"New game";
			// 
			// WithFriendToolStripMenuItem
			// 
			this->WithFriendToolStripMenuItem->Name = L"WithFriendToolStripMenuItem";
			this->WithFriendToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->WithFriendToolStripMenuItem->Text = L"With friend";
			this->WithFriendToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::WithFriendToolStripMenuItem_Click);
			// 
			// WithAIToolStripMenuItem
			// 
			this->WithAIToolStripMenuItem->Name = L"WithAIToolStripMenuItem";
			this->WithAIToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->WithAIToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->WithAIToolStripMenuItem->Text = L"With AI";
			this->WithAIToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::WithAIToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(149, 6);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ExitToolStripMenuItem->Text = L"Exit";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::ExitToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(0, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 100);
			this->button1->TabIndex = 1;
			this->button1->TabStop = false;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(100, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 100);
			this->button2->TabIndex = 2;
			this->button2->TabStop = false;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(200, 24);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 100);
			this->button3->TabIndex = 3;
			this->button3->TabStop = false;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(0, 124);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 100);
			this->button4->TabIndex = 6;
			this->button4->TabStop = false;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(100, 124);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 100);
			this->button5->TabIndex = 5;
			this->button5->TabStop = false;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(200, 124);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 100);
			this->button6->TabIndex = 4;
			this->button6->TabStop = false;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(0, 224);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 100);
			this->button7->TabIndex = 9;
			this->button7->TabStop = false;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Location = System::Drawing::Point(100, 224);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 100);
			this->button8->TabIndex = 8;
			this->button8->TabStop = false;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(200, 224);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 100);
			this->button9->TabIndex = 7;
			this->button9->TabStop = false;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(301, 325);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm1";
			this->Text = L"TicTac";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool turn, AI=true,Oo;
		int i = 1,z=0;

	private: System::Void Clears()
	{
		button1->Enabled = true;
		button1->Text = "";

		button2->Enabled = true;
		button2->Text = "";

		button3->Enabled = true;
		button3->Text = "";

		button4->Enabled = true;
		button4->Text = "";

		button5->Enabled = true;
		button5->Text = "";

		button6->Enabled = true;
		button6->Text = "";

		button7->Enabled = true;
		button7->Text = "";

		button8->Enabled = true;
		button8->Text = "";

		button9->Enabled = true;
		button9->Text = "";
	}

	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Button^ TempButton;
		TempButton = (Button^)sender;

		if (turn)
			TempButton->Text = "o";
		else
			TempButton->Text = "x";
		TempButton->Enabled = false;
		turn = !turn;
		if (z != 1)
			CheckWin(TempButton);

		if (AI)
			TurnAI();
		if (z != 1)
			CheckWin(TempButton);

		Oo = false;
	}

	void CheckWin(Button^ CheckButton)
	{
		if (button1->Text == button2->Text && button2->Text == button3->Text && button2->Enabled == false)
		{
			 MessageBox::Show("Win " + button1->Text, "Game Over", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 if (AI)
			 z = 1;
			 i = 1;
			 Clears();
		}
		else if (button4->Text == button5->Text && button5->Text == button6->Text && button5->Enabled == false)
		{
			MessageBox::Show("Win " + button4->Text, "Game Over", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (AI)
			z = 1;
			i = 1;
			Clears();
		}
		else if (button7->Text == button8->Text && button8->Text == button9->Text && button8->Enabled == false)
		{
			MessageBox::Show("Win " + button8->Text, "Game Over", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (AI)
			z = 1;
			i = 1;
			Clears();
		}
		else if (button1->Text == button4->Text && button4->Text == button7->Text && button4->Enabled == false)
		{
			 MessageBox::Show("Win " + button1->Text, "Game Over", MessageBoxButtons::OK, MessageBoxIcon::Information);
			 if (AI)
			 z = 1;
			 i = 1;
			 Clears();
		}
		else if (button2->Text == button5->Text && button5->Text == button8->Text && button5->Enabled == false)
		{
			MessageBox::Show("Win " + button2->Text, "Game Over", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (AI)
			z = 1;
			i = 1;
			Clears();
		}
		else if (button3->Text == button6->Text && button6->Text == button9->Text && button6->Enabled == false)
		{
			MessageBox::Show("Win " + button3->Text, "Game Over", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (AI)
			z = 1;
			i = 1;
			Clears();
		}
		else if (button1->Text == button5->Text && button5->Text == button9->Text && button5->Enabled == false)
		{
			MessageBox::Show("Win " + button1->Text, "Game Over", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (AI)
			z = 1;
			i = 1;
			Clears();
		}
		else if (button3->Text == button5->Text && button5->Text == button7->Text && button5->Enabled == false)
		{
			MessageBox::Show("Win " + button3->Text, "Game Over", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (AI)
			z = 1;
			i = 1;
			Clears();
		}
		else if (button1->Enabled == false && button2->Enabled == false && button3->Enabled == false && button4->Enabled == false && button5->Enabled == false && button6->Enabled == false && button7->Enabled == false && button8->Enabled == false && button9->Enabled == false)
		{
			MessageBox::Show("Draw", "Game Over", MessageBoxButtons::OK, MessageBoxIcon::Information);
			if (AI)
			z = 1;
			i = 1;
			Clears();
		}
		
	}

	private: System::Void WithAIToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AI = true;
		Clears();
		i = 1;
		turn = false;
		z = 0;
	}
	private: System::Void WithFriendToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		turn = false;
		AI = false;
		Clears();
		z = 0;
	}
	private: System::Void ExitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
	void TurnAI()
	{
		turn = !turn;
			if (i == 1)
			{
				z = 0;
				while(!Oo)
				{
					srand(time(0));
					int j = rand() % 5 + 1;
					if (j == 1)
					{
						if (button1->Text != "x")
						{
							button1->Text = "o";
							button1->Enabled = false;
							Oo = true;
						}
					}
					else if (j == 2)
					{
						if (button3->Text != "x")
						{
							button3->Text = "o";
							button3->Enabled = false;
							Oo = true;
						}
					}
					else if (j == 3)
					{
						if (button5->Text != "x")
						{
							button5->Text = "o";
							button5->Enabled = false;
							Oo = true;
						}
					}
					else if (j == 4)
					{
						if (button7->Text != "x")
						{
							button7->Text = "o";
							button7->Enabled = false;
							Oo = true;
						}
					}
					else if (j == 5)
					{
						if (button9->Text != "x")
						{
							button9->Text = "o";
							button9->Enabled = false;
							Oo = true;
						}
					}
				}
				i++;
			}
			else
			{
				if (button1->Text == "o" && button2->Text == "o" && button3->Text != "x")
				{
					button3->Text = "o";
					button3->Enabled = false;
				}
				else if (button1->Text == "o" && button3->Text == "o" && button2->Text != "x")
				{
					button2->Text = "o";
					button2->Enabled = false;
				}
				else if (button2->Text == "o" && button3->Text == "o" && button1->Text != "x")
				{
					button1->Text = "o";
					button1->Enabled = false;
				}

				else if (button4->Text == "o" && button5->Text == "o" && button6->Text != "x")
				{
					button6->Text = "o";
					button6->Enabled = false;
				}
				else if (button5->Text == "o" && button6->Text == "o" && button4->Text != "x")
				{
					button4->Text = "o";
					button4->Enabled = false;
				}
				else if (button4->Text == "o" && button6->Text == "o" && button5->Text != "x")
				{
					button5->Text = "o";
					button5->Enabled = false;
				}

				else if (button7->Text == "o" && button8->Text == "o" && button9->Text != "x")
				{
					button9->Text = "o";
					button9->Enabled = false;
				}
				else if (button7->Text == "o" && button9->Text == "o" && button8->Text != "x")
				{
					button8->Text = "o";
					button8->Enabled = false;
				}
				else if (button8->Text == "o" && button9->Text == "o" && button7->Text != "x")
				{
					button7->Text = "o";
					button7->Enabled = false;
				}

				else if (button1->Text == "o" && button4->Text == "o" && button7->Text != "x")
				{
					button7->Text = "o";
					button7->Enabled = false;
				}
				else if (button1->Text == "o" && button7->Text == "o" && button4->Text != "x")
				{
					button4->Text = "o";
					button4->Enabled = false;
				}
				else if (button4->Text == "o" && button7->Text == "o" && button1->Text != "x")
				{
					button1->Text = "o";
					button1->Enabled = false;
				}

				else if (button2->Text == "o" && button5->Text == "o" && button8->Text != "x")
				{
					button8->Text = "o";
					button8->Enabled = false;
				}
				else if (button2->Text == "o" && button8->Text == "o" && button5->Text != "x")
				{
					button5->Text = "o";
					button5->Enabled = false;
				}
				else if (button5->Text == "o" && button8->Text == "o" && button2->Text != "x")
				{
					button2->Text = "o";
					button2->Enabled = false;
				}

				else if (button3->Text == "o" && button6->Text == "o" && button9->Text != "x")
				{
					button9->Text = "o";
					button9->Enabled = false;
				}
				else if (button3->Text == "o" && button9->Text == "o" && button6->Text != "x")
				{
					button6->Text = "o";
					button6->Enabled = false;
				}
				else if (button6->Text == "o" && button9->Text == "o" && button3->Text != "x")
				{
					button3->Text = "o";
					button3->Enabled = false;
				}

				else if (button1->Text == "o" && button5->Text == "o" && button9->Text != "x")
				{
					button9->Text = "o";
					button9->Enabled = false;
				}
				else if (button1->Text == "o" && button9->Text == "o" && button5->Text != "x")
				{
					button5->Text = "o";
					button5->Enabled = false;
				}
				else if (button5->Text == "o" && button9->Text == "o" && button1->Text != "x")
				{
					button1->Text = "o";
					button1->Enabled = false;
				}

				else if (button3->Text == "o" && button5->Text == "o" && button7->Text != "x")
				{
					button7->Text = "o";
					button7->Enabled = false;
				}
				else if (button3->Text == "o" && button7->Text == "o" && button5->Text != "x")
				{
					button5->Text = "o";
					button5->Enabled = false;
				}
				else if (button5->Text == "o" && button3->Text == "o" && button7->Text != "x")
				{
					button7->Text = "o";
					button7->Enabled = false;
				}
				i++;
				if (button1->Text == "x" && button2->Text == "x" && button3->Text != "o")
				{
					button3->Text = "o";
					button3->Enabled = false;
				}
				else if (button1->Text == "x" && button3->Text == "x" && button2->Text != "o")
				{
					button2->Text = "o";
					button2->Enabled = false;
				}
				else if (button2->Text == "x" && button3->Text == "x" && button1->Text != "o")
				{
					button1->Text = "o";
					button2->Enabled = false;
				}

				else if (button4->Text == "x" && button5->Text == "x" && button6->Text != "o")
				{
					button6->Text = "o";
					button6->Enabled = false;
				}
				else if (button5->Text == "x" && button6->Text == "x" && button4->Text != "o")
				{
					button4->Text = "o";
					button4->Enabled = false;
				}
				else if (button4->Text == "x" && button6->Text == "x" && button5->Text != "o")
				{
					button5->Text = "o";
					button5->Enabled = false;
				}

				else if (button7->Text == "x" && button8->Text == "x" && button9->Text != "o")
				{
					button9->Text = "o";
					button9->Enabled = false;
				}
				else if (button7->Text == "x" && button9->Text == "x" && button8->Text != "o")
				{
					button8->Text = "o";
					button8->Enabled = false;
				}
				else if (button8->Text == "x" && button9->Text == "x" && button7->Text != "o")
				{
					button7->Text = "o";
					button7->Enabled = false;
				}

				else if (button1->Text == "x" && button4->Text == "x" && button7->Text != "o")
				{
					button7->Text = "o";
					button7->Enabled = false;
				}
				else if (button1->Text == "x" && button7->Text == "x" && button4->Text != "o")
				{
					button4->Text = "o";
					button4->Enabled = false;
				}
				else if (button4->Text == "x" && button7->Text == "x" && button1->Text != "o")
				{
					button1->Text = "o";
					button1->Enabled = false;
				}

				else if (button2->Text == "x" && button5->Text == "x" && button8->Text != "o")
				{
					button8->Text = "o";
					button8->Enabled = false;
				}
				else if (button2->Text == "x" && button8->Text == "x" && button5->Text != "o")
				{
					button5->Text = "o";
					button5->Enabled = false;
				}
				else if (button5->Text == "x" && button8->Text == "x" && button2->Text != "o")
				{
					button2->Text = "o";
					button2->Enabled = false;
				}

				else if (button3->Text == "x" && button6->Text == "x" && button9->Text != "o")
				{
					button9->Text = "o";
					button9->Enabled = false;
				}
				else if (button3->Text == "x" && button9->Text == "x" && button6->Text != "o")
				{
					button6->Text = "o";
					button6->Enabled = false;
				}
				else if (button6->Text == "x" && button9->Text == "x" && button3->Text != "o")
				{
					button3->Text = "o";
					button3->Enabled = false;
				}

				else if (button1->Text == "x" && button5->Text == "x" && button9->Text != "o")
				{
					button9->Text = "o";
					button9->Enabled = false;
				}
				else if (button1->Text == "x" && button9->Text == "x" && button5->Text != "o")
				{
					button5->Text = "o";
					button5->Enabled = false;
				}
				else if (button5->Text == "x" && button9->Text == "x" && button1->Text != "o")
				{
					button1->Text = "o";
					button1->Enabled = false;
				}

				else if (button3->Text == "x" && button5->Text == "x" && button7->Text != "o")
				{
					button7->Text = "o";
					button7->Enabled = false;
				}
				else if (button3->Text == "x" && button7->Text == "x" && button5->Text != "o")
				{
					button5->Text = "o";
					button5->Enabled = false;
				}
				else if (button5->Text == "x" && button3->Text == "x" && button7->Text != "o")
				{
					button7->Text = "o";
					button7->Enabled = false;
				}
				else
				{
					if (i < 4)
					{
						while (!Oo)
						{
							srand(time(0));
							int j = rand() % 5 + 1;
							if (j == 1)
							{
								if (button1->Enabled == true)
								{
									button1->Text = "o";
									button1->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 2)
							{
								if (button3->Enabled == true)
								{
									button3->Text = "o";
									button3->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 3)
							{
								if (button5->Enabled == true)
								{
									button5->Text = "o";
									button5->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 4)
							{
								if (button7->Enabled == true)
								{
									button7->Text = "o";
									button7->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 5)
							{
								if (button9->Enabled == true)
								{
									button9->Text = "o";
									button9->Enabled = false;
									Oo = true;
								}
							}
						}
						i++;

					}
				
					else
					{
						while(!Oo)
						{
							srand(time(0));
							int j = rand() % 9 + 1;
							if (j == 1)
							{
								if (button1->Enabled == true)
								{
									button1->Text = "o";
									button1->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 2)
							{
								if (button2->Enabled == true)
								{
									button2->Text = "o";
									button2->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 3)
							{
								if (button3->Enabled == true)
								{
									button3->Text = "o";
									button3->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 4)
							{
								if (button4->Enabled == true)
								{
									button4->Text = "o";
									button4->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 5)
							{
								if (button5->Enabled == true)
								{
									button5->Text = "o";
									button5->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 6)
							{
								if (button6->Enabled == true)
								{
									button6->Text = "o";
									button6->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 7)
							{
								if (button7->Enabled == true)
								{
									button7->Text = "o";
									button7->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 8)
							{
								if (button8->Enabled == true)
								{
									button8->Text = "o";
									button8->Enabled = false;
									Oo = true;
								}
							}
							else if (j == 9)
							{
								if (button9->Enabled == true)
								{
									button9->Text = "o";
									button9->Enabled = false;
									Oo = true;
								}
							}
						}
					}
				}
			}
	}
}
;
}
