#pragma once

#include <time.h>
#include "collection.h"

namespace ProductorConsumidor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PrincipalView
	/// </summary>
	public ref class PrincipalView : public System::Windows::Forms::Form
	{
	public:
		Collection<char>* listData;
		bool consumerActive = false;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBoxProducer;
	private: System::Windows::Forms::Panel^  panelConsumer;
	private: System::Windows::Forms::Panel^  panelProducer;
	private: System::Windows::Forms::Timer^  timer1;
	public:

			 bool producerActive = false;

		PrincipalView(void)
		{
			InitializeComponent();
			
			listData = new Collection<char>;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PrincipalView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panelDrawing;
	private: System::Windows::Forms::Button^  btnStart;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelGeneralCounter;
	private: System::Windows::Forms::PictureBox^  pictureBoxConsumer;


	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PrincipalView::typeid));
			this->panelDrawing = (gcnew System::Windows::Forms::Panel());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelGeneralCounter = (gcnew System::Windows::Forms::Label());
			this->pictureBoxConsumer = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxProducer = (gcnew System::Windows::Forms::PictureBox());
			this->panelConsumer = (gcnew System::Windows::Forms::Panel());
			this->panelProducer = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxConsumer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxProducer))->BeginInit();
			this->SuspendLayout();
			// 
			// panelDrawing
			// 
			this->panelDrawing->Location = System::Drawing::Point(118, 74);
			this->panelDrawing->Name = L"panelDrawing";
			this->panelDrawing->Size = System::Drawing::Size(91, 526);
			this->panelDrawing->TabIndex = 0;
			this->panelDrawing->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PrincipalView::panel1_Paint);
			// 
			// btnStart
			// 
			this->btnStart->Location = System::Drawing::Point(118, 12);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(91, 23);
			this->btnStart->TabIndex = 1;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &PrincipalView::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(122, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Contador:";
			// 
			// labelGeneralCounter
			// 
			this->labelGeneralCounter->AutoSize = true;
			this->labelGeneralCounter->Location = System::Drawing::Point(194, 49);
			this->labelGeneralCounter->Name = L"labelGeneralCounter";
			this->labelGeneralCounter->Size = System::Drawing::Size(13, 13);
			this->labelGeneralCounter->TabIndex = 3;
			this->labelGeneralCounter->Text = L"0";
			// 
			// pictureBoxConsumer
			// 
			this->pictureBoxConsumer->Location = System::Drawing::Point(235, 12);
			this->pictureBoxConsumer->Name = L"pictureBoxConsumer";
			this->pictureBoxConsumer->Size = System::Drawing::Size(81, 64);
			this->pictureBoxConsumer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxConsumer->TabIndex = 4;
			this->pictureBoxConsumer->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(25, 19);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(54, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(249, 19);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(54, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBoxProducer
			// 
			this->pictureBoxProducer->Location = System::Drawing::Point(12, 12);
			this->pictureBoxProducer->Name = L"pictureBoxProducer";
			this->pictureBoxProducer->Size = System::Drawing::Size(81, 64);
			this->pictureBoxProducer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxProducer->TabIndex = 7;
			this->pictureBoxProducer->TabStop = false;
			// 
			// panelConsumer
			// 
			this->panelConsumer->Location = System::Drawing::Point(225, 75);
			this->panelConsumer->Name = L"panelConsumer";
			this->panelConsumer->Size = System::Drawing::Size(91, 526);
			this->panelConsumer->TabIndex = 1;
			// 
			// panelProducer
			// 
			this->panelProducer->Location = System::Drawing::Point(12, 73);
			this->panelProducer->Name = L"panelProducer";
			this->panelProducer->Size = System::Drawing::Size(91, 526);
			this->panelProducer->TabIndex = 1;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &PrincipalView::timer1_Tick);
			// 
			// PrincipalView
			// 
			this->ClientSize = System::Drawing::Size(328, 611);
			this->Controls->Add(this->panelProducer);
			this->Controls->Add(this->panelConsumer);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBoxConsumer);
			this->Controls->Add(this->labelGeneralCounter);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnStart);
			this->Controls->Add(this->panelDrawing);
			this->Controls->Add(this->pictureBoxProducer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"PrincipalView";
			this->Text = L"Productor-Consumidor";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &PrincipalView::PrincipalView_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxConsumer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxProducer))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		// Variables de Tipo Global
		int generalCounter = 0;


	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		SolidBrush ^sb = gcnew SolidBrush(Color::DarkGray);
		Pen ^p = gcnew Pen(Color::Black);
		Graphics ^g = panelDrawing->CreateGraphics();
		//g->FillRectangle(sb, 0, 0, 90, 15);
		
		for (int i(0), j(0); i < 35; i++) {
			g->DrawRectangle(p, 0, j, 90, 15);
			j = j + 15;
		}
		//pictureBoxConsumer->ImageLocation = "Green.png";
		//pictureBoxProducer->ImageLocation = "Green.png";
	}
	private: System::Void PrincipalView_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyData == Keys::Escape) {
			this->Close();
			MessageBox::Show("click");
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Interval = 1000;
		timer1->Start();
		btnStart->Enabled = false;
	}
	
	int randConsumer;
	int randProducer;

	int posConsumer = 0;
	int posProducer = 0;

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		SolidBrush ^sb = gcnew SolidBrush(Color::DarkGray);
		Pen ^p = gcnew Pen(Color::Red);
		Graphics ^g = panelDrawing->CreateGraphics();
		Graphics ^drawConsumer = panelDrawing->CreateGraphics();
		Graphics ^drawProducer = panelDrawing->CreateGraphics();

		generalCounter++;
		labelGeneralCounter->Text = generalCounter.ToString();

		drawProducer->Clear(Color::Transparent);
		drawConsumer->Clear(Color::Transparent);

		if (generalCounter % 2 == 0) { /// Trabaja el consumidor
			panelConsumer->BackColor = Color::LightYellow;
			panelProducer->BackColor = Color::Transparent;

			pictureBoxProducer->ImageLocation = "White.png";

			srand(time(NULL));
			randConsumer = rand() % 100;

			if (randConsumer < 50) {
				consumerActive = false;
			}
			else {
				consumerActive = true;
			}

			if (consumerActive) {
				if (!listData->isEmpty()) {
					pictureBoxConsumer->ImageLocation = "Green.png";
					listData->dequeue();
					
				}
				else {
					pictureBoxConsumer->ImageLocation = "Red.png";
				}
			}
			else {
				pictureBoxConsumer->ImageLocation = "Blue.png";
			}
		}
		else { /// Trabaja el productor
			srand(time(NULL));
			randProducer = rand() % 100;

			panelConsumer->BackColor = Color::Transparent;
			panelProducer->BackColor = Color::LightYellow;

			pictureBoxConsumer->ImageLocation = "White.png";

			if (randProducer < 50) {
				producerActive = false;
			}
			else {
				producerActive = true;
			}

			if (producerActive) {
				if (listData->getItemCounter() <= 35) {
					pictureBoxProducer->ImageLocation = "Green.png";
					listData->insertData((char)rand%);

					drawProducer->DrawRectangle(p, 0, posProducer * 15, 90, 15);

					g->FillRectangle(sb, 0, posProducer * 15, 90, 15);
					posProducer++;

					if (posProducer == 35) {
						posProducer = 0;
					}

				}
				else {
					pictureBoxProducer->ImageLocation = "Red.png";
				}
			}
			else {
				pictureBoxProducer->ImageLocation = "Blue.png";
			}
		}

		
		//g->FillRectangle(sb, 0, 0, 90, 15);

		for (int i(0), j(0); i < 35; i++) {
			g->DrawRectangle(p, 0, j, 90, 15);
			j = j + 15;
		}
}
};
}
