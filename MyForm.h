#pragma 
#include <stdlib.h>
#include <time.h>
#include<iostream>

namespace Lab2CarlosLaparra1031120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Cantidad_Tortuga;
	protected:

	private: System::Windows::Forms::Label^ Cantidad_Liebre;
	protected:

	private: System::Windows::Forms::Label^ Tortuga;
	private: System::Windows::Forms::Label^ Liebre;
	private: System::Windows::Forms::Label^ Movimientos_Tortuga;
	private: System::Windows::Forms::Label^ Movimientos_Liebre;


	public: System::Windows::Forms::Timer^ Timer;
	private: System::Windows::Forms::DataGridView^ dgv_Camino;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ lbl_random;
	private: System::Windows::Forms::Label^ Tiempo_seg;
	private: System::Windows::Forms::Label^ tiempo_min;
	private: System::Windows::Forms::Button^ btn_empezar;
	private: System::Windows::Forms::Label^ lbl_resultado_final;
	private: System::Windows::Forms::Button^ btn_Reinicar;
	public:
	private:
	private: System::ComponentModel::IContainer^ components;
	public:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Cantidad_Tortuga = (gcnew System::Windows::Forms::Label());
			this->Cantidad_Liebre = (gcnew System::Windows::Forms::Label());
			this->Tortuga = (gcnew System::Windows::Forms::Label());
			this->Liebre = (gcnew System::Windows::Forms::Label());
			this->Movimientos_Tortuga = (gcnew System::Windows::Forms::Label());
			this->Movimientos_Liebre = (gcnew System::Windows::Forms::Label());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->dgv_Camino = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_random = (gcnew System::Windows::Forms::Label());
			this->Tiempo_seg = (gcnew System::Windows::Forms::Label());
			this->tiempo_min = (gcnew System::Windows::Forms::Label());
			this->btn_empezar = (gcnew System::Windows::Forms::Button());
			this->lbl_resultado_final = (gcnew System::Windows::Forms::Label());
			this->btn_Reinicar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Camino))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Cantidad_Tortuga
			// 
			this->Cantidad_Tortuga->AutoSize = true;
			this->Cantidad_Tortuga->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Cantidad_Tortuga->Font = (gcnew System::Drawing::Font(L"Noto Serif Cond", 10, System::Drawing::FontStyle::Bold));
			this->Cantidad_Tortuga->Location = System::Drawing::Point(12, 62);
			this->Cantidad_Tortuga->Name = L"Cantidad_Tortuga";
			this->Cantidad_Tortuga->Size = System::Drawing::Size(313, 27);
			this->Cantidad_Tortuga->TabIndex = 0;
			this->Cantidad_Tortuga->Text = L"Cantidad de cuadros recorridos: 0";
			// 
			// Cantidad_Liebre
			// 
			this->Cantidad_Liebre->AutoSize = true;
			this->Cantidad_Liebre->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Cantidad_Liebre->Font = (gcnew System::Drawing::Font(L"Noto Serif Cond", 10, System::Drawing::FontStyle::Bold));
			this->Cantidad_Liebre->Location = System::Drawing::Point(580, 62);
			this->Cantidad_Liebre->Name = L"Cantidad_Liebre";
			this->Cantidad_Liebre->Size = System::Drawing::Size(313, 27);
			this->Cantidad_Liebre->TabIndex = 1;
			this->Cantidad_Liebre->Text = L"Cantidad de cuadros recorridos: 0";
			// 
			// Tortuga
			// 
			this->Tortuga->AutoSize = true;
			this->Tortuga->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Tortuga->Font = (gcnew System::Drawing::Font(L"Noto Serif Cond", 10, System::Drawing::FontStyle::Bold));
			this->Tortuga->Location = System::Drawing::Point(12, 18);
			this->Tortuga->Name = L"Tortuga";
			this->Tortuga->Size = System::Drawing::Size(82, 27);
			this->Tortuga->TabIndex = 2;
			this->Tortuga->Text = L"Tortuga";
			// 
			// Liebre
			// 
			this->Liebre->AutoSize = true;
			this->Liebre->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Liebre->Font = (gcnew System::Drawing::Font(L"Noto Serif Cond", 10, System::Drawing::FontStyle::Bold));
			this->Liebre->Location = System::Drawing::Point(580, 18);
			this->Liebre->Name = L"Liebre";
			this->Liebre->Size = System::Drawing::Size(69, 27);
			this->Liebre->TabIndex = 3;
			this->Liebre->Text = L"Liebre";
			// 
			// Movimientos_Tortuga
			// 
			this->Movimientos_Tortuga->AutoSize = true;
			this->Movimientos_Tortuga->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Movimientos_Tortuga->Font = (gcnew System::Drawing::Font(L"Noto Serif Cond", 10, System::Drawing::FontStyle::Bold));
			this->Movimientos_Tortuga->Location = System::Drawing::Point(12, 115);
			this->Movimientos_Tortuga->Name = L"Movimientos_Tortuga";
			this->Movimientos_Tortuga->Size = System::Drawing::Size(230, 27);
			this->Movimientos_Tortuga->TabIndex = 4;
			this->Movimientos_Tortuga->Text = L"Movimientos realizados:";
			// 
			// Movimientos_Liebre
			// 
			this->Movimientos_Liebre->AutoSize = true;
			this->Movimientos_Liebre->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Movimientos_Liebre->Font = (gcnew System::Drawing::Font(L"Noto Serif Cond", 10, System::Drawing::FontStyle::Bold));
			this->Movimientos_Liebre->Location = System::Drawing::Point(580, 115);
			this->Movimientos_Liebre->Name = L"Movimientos_Liebre";
			this->Movimientos_Liebre->Size = System::Drawing::Size(230, 27);
			this->Movimientos_Liebre->TabIndex = 5;
			this->Movimientos_Liebre->Text = L"Movimientos realizados:";
			// 
			// Timer
			// 
			this->Timer->Interval = 1000;
			this->Timer->Tick += gcnew System::EventHandler(this, &MyForm::Timer_Tick);
			// 
			// dgv_Camino
			// 
			this->dgv_Camino->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_Camino->ColumnHeadersVisible = false;
			this->dgv_Camino->Location = System::Drawing::Point(17, 230);
			this->dgv_Camino->Name = L"dgv_Camino";
			this->dgv_Camino->RowHeadersVisible = false;
			this->dgv_Camino->RowHeadersWidth = 62;
			this->dgv_Camino->RowTemplate->Height = 28;
			this->dgv_Camino->Size = System::Drawing::Size(1393, 94);
			this->dgv_Camino->TabIndex = 6;
			this->dgv_Camino->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dgv_Camino_CellContentClick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, -2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1417, 536);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// lbl_random
			// 
			this->lbl_random->AutoSize = true;
			this->lbl_random->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbl_random->Font = (gcnew System::Drawing::Font(L"Noto Serif Cond", 10, System::Drawing::FontStyle::Bold));
			this->lbl_random->Location = System::Drawing::Point(28, 354);
			this->lbl_random->Name = L"lbl_random";
			this->lbl_random->Size = System::Drawing::Size(255, 27);
			this->lbl_random->TabIndex = 8;
			this->lbl_random->Text = L"Número random generado:";
			// 
			// Tiempo_seg
			// 
			this->Tiempo_seg->AutoSize = true;
			this->Tiempo_seg->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Tiempo_seg->Font = (gcnew System::Drawing::Font(L"Noto Serif Cond", 10, System::Drawing::FontStyle::Bold));
			this->Tiempo_seg->Location = System::Drawing::Point(597, 354);
			this->Tiempo_seg->Name = L"Tiempo_seg";
			this->Tiempo_seg->Size = System::Drawing::Size(116, 27);
			this->Tiempo_seg->TabIndex = 9;
			this->Tiempo_seg->Text = L"Segundos: 0";
			// 
			// tiempo_min
			// 
			this->tiempo_min->AutoSize = true;
			this->tiempo_min->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tiempo_min->Font = (gcnew System::Drawing::Font(L"Noto Serif Cond", 10, System::Drawing::FontStyle::Bold));
			this->tiempo_min->Location = System::Drawing::Point(597, 394);
			this->tiempo_min->Name = L"tiempo_min";
			this->tiempo_min->Size = System::Drawing::Size(105, 27);
			this->tiempo_min->TabIndex = 10;
			this->tiempo_min->Text = L"Minutos: 0";
			// 
			// btn_empezar
			// 
			this->btn_empezar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_empezar->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_empezar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_empezar->Location = System::Drawing::Point(844, 363);
			this->btn_empezar->Name = L"btn_empezar";
			this->btn_empezar->Size = System::Drawing::Size(162, 48);
			this->btn_empezar->TabIndex = 11;
			this->btn_empezar->Text = L"Empezar";
			this->btn_empezar->UseVisualStyleBackColor = false;
			this->btn_empezar->Click += gcnew System::EventHandler(this, &MyForm::btn_empezar_Click);
			// 
			// lbl_resultado_final
			// 
			this->lbl_resultado_final->AutoSize = true;
			this->lbl_resultado_final->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbl_resultado_final->Font = (gcnew System::Drawing::Font(L"Noto Serif Cond", 18, System::Drawing::FontStyle::Bold));
			this->lbl_resultado_final->Location = System::Drawing::Point(398, 464);
			this->lbl_resultado_final->Name = L"lbl_resultado_final";
			this->lbl_resultado_final->Size = System::Drawing::Size(0, 49);
			this->lbl_resultado_final->TabIndex = 12;
			// 
			// btn_Reinicar
			// 
			this->btn_Reinicar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_Reinicar->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Reinicar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_Reinicar->Location = System::Drawing::Point(1108, 363);
			this->btn_Reinicar->Name = L"btn_Reinicar";
			this->btn_Reinicar->Size = System::Drawing::Size(162, 48);
			this->btn_Reinicar->TabIndex = 13;
			this->btn_Reinicar->Text = L"Reiniciar";
			this->btn_Reinicar->UseVisualStyleBackColor = false;
			this->btn_Reinicar->Click += gcnew System::EventHandler(this, &MyForm::btn_Reinicar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1418, 480);
			this->Controls->Add(this->btn_Reinicar);
			this->Controls->Add(this->lbl_resultado_final);
			this->Controls->Add(this->btn_empezar);
			this->Controls->Add(this->tiempo_min);
			this->Controls->Add(this->Tiempo_seg);
			this->Controls->Add(this->lbl_random);
			this->Controls->Add(this->dgv_Camino);
			this->Controls->Add(this->Movimientos_Liebre);
			this->Controls->Add(this->Movimientos_Tortuga);
			this->Controls->Add(this->Liebre);
			this->Controls->Add(this->Tortuga);
			this->Controls->Add(this->Cantidad_Liebre);
			this->Controls->Add(this->Cantidad_Tortuga);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_Camino))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static int segundos= 0;
		static int minutos = 0;
		static int tortuga=0;
		static int liebre=0;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		for (int i = 0; i < 71; i++) {
			DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
			nuevacolumna->Width = 13.9;
			DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
			nuevacolumna->CellTemplate = cellTemplate;
			dgv_Camino->Columns->Add(nuevacolumna);
		}
		for (int i = 0; i < 1; i++) {
			dgv_Camino->Rows->Add();
		}
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	int ran;
	dgv_Camino->Rows[0]->Cells[0]->Value = "T";
	dgv_Camino->Rows[1]->Cells[0]->Value = "H";
	ran = rand() % (11 - 1);
	lbl_random->Text = "El número random generado es: " + ran;
	if (segundos < 60) {
		segundos++;
	}
	else if(segundos==60){
		segundos = 0;
		minutos++;
	}

	Tiempo_seg->Text = "Segundos: " + segundos;
	tiempo_min->Text = "Minutos: " + minutos;
	switch (ran)
	{
	case 0:(tortuga = tortuga + 3) && (liebre=liebre +0);
		if (liebre >= 70) {
			if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
			else if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
			}
			else {
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
		}
		else {
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "T";
			Cantidad_Tortuga->Text = "Ha avanzado: " + tortuga + " cuadros";
			Movimientos_Tortuga->Text = "Avanzó 3 cuadros";
			dgv_Camino->Rows[1]->Cells[liebre]->Value = "H";
			Cantidad_Liebre->Text = "Ha avanzado: " + liebre + " cuadros";
			Movimientos_Liebre->Text = "No avanzó ningún cuadro";
		}

		if (liebre == tortuga) {
			MessageBox::Show("La liebre mordió a la tortuga");
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "!Ouch¡";
			dgv_Camino->Rows[0]->Cells[liebre]->Value = "!Ouch¡";
		}

		if (liebre >= 70 && tortuga >= 70) {
			MessageBox::Show("Ya han llegado a la casilla final");
			lbl_resultado_final->Text = "Empate... a favor de la tortuga!!!";
			Timer->Enabled = false;
		}
		else if (liebre >= 70) {
			MessageBox::Show("La liebre ha llegado a la meta");
			lbl_resultado_final->Text = "La liebre gana. Ni hablar";
			Timer->Enabled = false;
		}
		else if (tortuga >= 70) {
			MessageBox::Show("La tortuga ha llegado a la meta");
			lbl_resultado_final->Text = "!LA TORTUGA GANA¡ !BRAVO¡";
			Timer->Enabled = false;
		}
		break;
	case 1:(tortuga = tortuga + 3) && (liebre = liebre + 0);
		if (liebre >= 70) {
			if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
			else if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
			}
			else {
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
		}
		else {
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "T";
			Cantidad_Tortuga->Text = "Ha avanzado: " + tortuga + " cuadros";
			Movimientos_Tortuga->Text = "Avanzó 3 cuadros";
			dgv_Camino->Rows[1]->Cells[liebre]->Value = "H";
			Cantidad_Liebre->Text = "Ha avanzado: " + liebre + " cuadros";
			Movimientos_Liebre->Text = "No avanzó ningún cuadro";
		}

		if (liebre == tortuga) {
			MessageBox::Show("La liebre mordió a la tortuga");
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "!Ouch¡";
			dgv_Camino->Rows[0]->Cells[liebre]->Value = "!Ouch¡";
		}

		if (liebre >= 70 && tortuga >= 70) {
			MessageBox::Show("Ya han llegado a la casilla final");
			lbl_resultado_final->Text = "Empate... a favor de la tortuga!!!";
			Timer->Enabled = false;
		}
		else if (liebre >= 70) {
			MessageBox::Show("La liebre ha llegado a la meta");
			lbl_resultado_final->Text = "La liebre gana. Ni hablar";
			Timer->Enabled = false;
		}
		else if (tortuga >= 70) {
			MessageBox::Show("La tortuga ha llegado a la meta");
			lbl_resultado_final->Text = "!LA TORTUGA GANA¡ !BRAVO¡";
			Timer->Enabled = false;
		}
		break;
	case 2:(tortuga = tortuga + 3) && (liebre = liebre + 9);
		if (liebre >= 70) {
			if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
			else if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
			}
			else {
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
		}
		else {
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "T";
			Cantidad_Tortuga->Text = "Ha avanzado: " + tortuga + "cuadros";
			Movimientos_Tortuga->Text = "Avanzó 3 cuadros";
			dgv_Camino->Rows[1]->Cells[liebre]->Value = "H";
			Cantidad_Liebre->Text = "Ha avanzado: " + liebre + " cuadros";
			Movimientos_Liebre->Text = "Avanzó 9 cuadros";
		}

		if (liebre == tortuga) {
			MessageBox::Show("La liebre mordió a la tortuga");
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "!Ouch¡";
			dgv_Camino->Rows[0]->Cells[liebre]->Value = "!Ouch¡";
		}

		if (liebre >= 70 && tortuga >= 70) {
			MessageBox::Show("Ya han llegado a la casilla final");
			lbl_resultado_final->Text = "Empate... a favor de la tortuga!!!";
			Timer->Enabled = false;
		}
		else if (liebre >= 70) {
			MessageBox::Show("La liebre ha llegado a la meta");
			lbl_resultado_final->Text = "La liebre gana. Ni hablar";
			Timer->Enabled = false;
		}
		else if (tortuga >= 70) {
			MessageBox::Show("La tortuga ha llegado a la meta");
			lbl_resultado_final->Text = "!LA TORTUGA GANA¡ !BRAVO¡";
			Timer->Enabled = false;
		}
		break;
	case 3:(tortuga = tortuga + 3) && (liebre = liebre + 9);
		if (liebre >= 70) {
			if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
			else if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
			}
			else {
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
		}
		else {
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "T";
			Cantidad_Tortuga->Text = "Ha avanzado: " + tortuga + " cuadros";
			Movimientos_Tortuga->Text = "Avanzó 3 cuadros";
			dgv_Camino->Rows[1]->Cells[liebre]->Value = "H";
			Cantidad_Liebre->Text = "Ha avanzado: " + liebre + " cuadros";
			Movimientos_Liebre->Text = "Avanzó 9 cuadros";
		}

		if (liebre == tortuga) {
			MessageBox::Show("La liebre mordió a la tortuga");
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "!Ouch¡";
			dgv_Camino->Rows[0]->Cells[liebre]->Value = "!Ouch¡";
		}

		if (liebre >= 70 && tortuga >= 70) {
			MessageBox::Show("Ya han llegado a la casilla final");
			lbl_resultado_final->Text = "Empate... a favor de la tortuga!!!";
			Timer->Enabled = false;
		}
		else if (liebre >= 70) {
			MessageBox::Show("La liebre ha llegado a la meta");
			lbl_resultado_final->Text = "La liebre gana. Ni hablar";
			Timer->Enabled = false;
		}
		else if (tortuga >= 70) {
			MessageBox::Show("La tortuga ha llegado a la meta");
			lbl_resultado_final->Text = "!LA TORTUGA GANA¡ !BRAVO¡";
			Timer->Enabled = false;
		}
		break;
	case 4:(tortuga = tortuga + 3) && (liebre = liebre + 1);
		if (liebre >= 70) {
			if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
			else if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
			}
			else {
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
		}
		else {
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "T";
			Cantidad_Tortuga->Text = "Ha avanzado: " + tortuga + " cuadros";
			Movimientos_Tortuga->Text = "Avanzó 3 cuadros";
			dgv_Camino->Rows[1]->Cells[liebre]->Value = "H";
			Cantidad_Liebre->Text = "Ha avanzado: " + liebre + " cuadros";
			Movimientos_Liebre->Text = "Avanzó 1 cuadro";
		}

		if (liebre == tortuga) {
			MessageBox::Show("La liebre mordió a la tortuga");
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "!Ouch¡";
			dgv_Camino->Rows[0]->Cells[liebre]->Value = "!Ouch¡";
		}

		if (liebre >= 70 && tortuga >= 70) {
			MessageBox::Show("Ya han llegado a la casilla final");
			lbl_resultado_final->Text = "Empate... a favor de la tortuga!!!";
			Timer->Enabled = false;
		}
		else if (liebre >= 70) {
			MessageBox::Show("La liebre ha llegado a la meta");
			lbl_resultado_final->Text = "La liebre gana. Ni hablar";
			Timer->Enabled = false;
		}
		else if (tortuga >= 70) {
			MessageBox::Show("La tortuga ha llegado a la meta");
			lbl_resultado_final->Text = "!LA TORTUGA GANA¡ !BRAVO¡";
			Timer->Enabled = false;
		}
		break;
	case 5: (liebre = liebre + 1);
		if (liebre >= 70) {
			if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
			else if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
			}
			else {
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
		}
		else {
			dgv_Camino->Rows[1]->Cells[liebre]->Value = "H";
			Cantidad_Liebre->Text = "Ha avanzado: " + liebre + " cuadros";
			Movimientos_Liebre->Text = "Avanzó 1 cuadro";
			if (tortuga > 5) {
				dgv_Camino->Rows[0]->Cells[tortuga]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 1]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 2]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 3]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 4]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 5]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 6]->Value = "";
				tortuga = tortuga - 6;
				dgv_Camino->Rows[0]->Cells[tortuga]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + tortuga + " cuadros";
				Movimientos_Tortuga->Text = "Retrocedió 6 cuadros";
			}
		}

		if (liebre == tortuga) {
			MessageBox::Show("La liebre mordió a la tortuga");
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "!Ouch¡";
			dgv_Camino->Rows[0]->Cells[liebre]->Value = "!Ouch¡";
		}

		if (liebre >= 70 && tortuga >= 70) {
			MessageBox::Show("Ya han llegado a la casilla final");
			lbl_resultado_final->Text = "Empate... a favor de la tortuga!!!";
			Timer->Enabled = false;
		}
		else if (liebre >= 70) {
			MessageBox::Show("La liebre ha llegado a la meta");
			lbl_resultado_final->Text = "La liebre gana. Ni hablar";
			Timer->Enabled = false;
		}
		else if (tortuga >= 70) {
			MessageBox::Show("La tortuga ha llegado a la meta");
			lbl_resultado_final->Text = "!LA TORTUGA GANA¡ !BRAVO¡";
			Timer->Enabled = false;
		}
		break;
	case 6:(liebre = liebre + 1);
		if (liebre >= 70) {
			if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
			else if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
			}
			else {
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
		}
		else {
			dgv_Camino->Rows[1]->Cells[liebre]->Value = "H";
			Cantidad_Liebre->Text = "Ha avanzado: " + liebre + " cuadros";
			Movimientos_Liebre->Text = "Avanzó 1 cuadro";
			if (tortuga > 5) {
				dgv_Camino->Rows[0]->Cells[tortuga]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 1]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 2]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 3]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 4]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 5]->Value = "";
				dgv_Camino->Rows[0]->Cells[tortuga - 6]->Value = "";
				tortuga = tortuga - 6;
				dgv_Camino->Rows[0]->Cells[tortuga]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + tortuga + " cuadros";
				Movimientos_Tortuga->Text = "Retrocedió 6 cuadros";
			}
		}

		if (liebre == tortuga) {
			MessageBox::Show("La liebre mordió a la tortuga");
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "!Ouch¡";
			dgv_Camino->Rows[0]->Cells[liebre]->Value = "!Ouch¡";
		}

		if (liebre >= 70 && tortuga >= 70) {
			MessageBox::Show("Ya han llegado a la casilla final");
			lbl_resultado_final->Text = "Empate... a favor de la tortuga!!!";
			Timer->Enabled = false;
		}
		else if (liebre >= 70) {
			MessageBox::Show("La liebre ha llegado a la meta");
			lbl_resultado_final->Text = "La liebre gana. Ni hablar";
			Timer->Enabled = false;
		}
		else if (tortuga >= 70) {
			MessageBox::Show("La tortuga ha llegado a la meta");
			lbl_resultado_final->Text = "!LA TORTUGA GANA¡ !BRAVO¡";
			Timer->Enabled = false;
		}
		break;
	case 7:(tortuga = tortuga + 1);
		if (liebre >= 70) {
			if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
			else if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
			}
			else {
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
		}
		else {
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "T";
			Cantidad_Tortuga->Text = "Ha avanzado: " + tortuga + " cuadros";
			Movimientos_Tortuga->Text = "Avanzó 1";
			if (liebre > 1) {
				dgv_Camino->Rows[1]->Cells[liebre]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 1]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 2]->Value = "";
				liebre = liebre - 2;
				dgv_Camino->Rows[1]->Cells[liebre]->Value = "H";
				Cantidad_Liebre->Text = "Ha avanzado: " + liebre + " cuadros";
				Movimientos_Liebre->Text = "Retrocedió 2 cuadros";
			}
		}

		if (liebre == tortuga) {
			MessageBox::Show("La liebre mordió a la tortuga");
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "!Ouch¡";
			dgv_Camino->Rows[0]->Cells[liebre]->Value = "!Ouch¡";
		}

		if (liebre >= 70 && tortuga >= 70) {
			MessageBox::Show("Ya han llegado a la casilla final");
			lbl_resultado_final->Text = "Empate... a favor de la tortuga!!!";
			Timer->Enabled = false;
		}
		else if (liebre >= 70) {
			MessageBox::Show("La liebre ha llegado a la meta");
			lbl_resultado_final->Text = "La liebre gana. Ni hablar";
			Timer->Enabled = false;
		}
		else if (tortuga >= 70) {
			MessageBox::Show("La tortuga ha llegado a la meta");
			lbl_resultado_final->Text = "!LA TORTUGA GANA¡ !BRAVO¡";
			Timer->Enabled = false;
		}
		break;
	case 8:(tortuga = tortuga + 1);
		if (liebre >= 70) {
			if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
			else if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
			}
			else {
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
		}
		else {
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "T";
			Cantidad_Tortuga->Text = "Ha avanzado: " + tortuga + " cuadros";
			Movimientos_Tortuga->Text = "Avanzó 1";
			if (liebre > 1) {
				dgv_Camino->Rows[1]->Cells[liebre]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 1]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 2]->Value = "";
				liebre = liebre - 2;
				dgv_Camino->Rows[1]->Cells[liebre]->Value = "H";
				Cantidad_Liebre->Text = "Ha avanzado: " + liebre + " cuadros";
				Movimientos_Liebre->Text = "Retrocedió 2 cuadros";
			}
		}

		if (liebre == tortuga) {
			MessageBox::Show("La liebre mordió a la tortuga");
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "!Ouch¡";
			dgv_Camino->Rows[0]->Cells[liebre]->Value = "!Ouch¡";
		}

		if (liebre >= 70 && tortuga >= 70) {
			MessageBox::Show("Ya han llegado a la casilla final");
			lbl_resultado_final->Text = "Empate... a favor de la tortuga!!!";
			Timer->Enabled = false;
		}
		else if (liebre >= 70) {
			MessageBox::Show("La liebre ha llegado a la meta");
			lbl_resultado_final->Text = "La liebre gana. Ni hablar";
			Timer->Enabled = false;
		}
		else if (tortuga >= 70) {
			MessageBox::Show("La tortuga ha llegado a la meta");
			lbl_resultado_final->Text = "!LA TORTUGA GANA¡ !BRAVO¡";
			Timer->Enabled = false;
		}
		break;
	case 9:(tortuga = tortuga + 1);
		if (liebre >= 70) {
			if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
			else if (tortuga >= 70) {
				dgv_Camino->Rows[0]->Cells[70]->Value = "T";
				Cantidad_Tortuga->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Tortuga->Text = "Ha llegado al cuadro 70";
			}
			else {
				dgv_Camino->Rows[1]->Cells[70]->Value = "T";
				Cantidad_Liebre->Text = "Ha avanzado: " + 70 + " cuadros";
				Movimientos_Liebre->Text = "Ha llegado al cuadro 70";
			}
		}
		else {
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "T";
			Cantidad_Tortuga->Text = "Ha avanzado: " + tortuga + " cuadros";
			Movimientos_Tortuga->Text = "Avanzó 1";
			if (liebre > 11) {
				dgv_Camino->Rows[1]->Cells[liebre]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 1]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 2]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 3]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 4]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 5]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 6]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 7]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 8]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 9]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 10]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 11]->Value = "";
				dgv_Camino->Rows[1]->Cells[liebre - 12]->Value = "";
				liebre = liebre - 12;
				dgv_Camino->Rows[1]->Cells[liebre]->Value = "H";
				Cantidad_Liebre->Text = "Ha avanzado: " + liebre + " cuadros";
				Movimientos_Liebre->Text = "Retrocedió 12 cuadros";
			}
		}

		if (liebre == tortuga) {
			MessageBox::Show("La liebre mordió a la tortuga");
			dgv_Camino->Rows[0]->Cells[tortuga]->Value = "!Ouch¡";
			dgv_Camino->Rows[0]->Cells[liebre]->Value = "!Ouch¡";
		}

		if (liebre >= 70 && tortuga >= 70) {
			MessageBox::Show("Ya han llegado a la casilla final");
			lbl_resultado_final->Text = "Empate... a favor de la tortuga!!!";
			Timer->Enabled = false;
		}
		else if (liebre >= 70) {
			MessageBox::Show("La liebre ha llegado a la meta");
			lbl_resultado_final->Text = "La liebre gana. Ni hablar";
			Timer->Enabled = false;
		}
		else if (tortuga >= 70) {
			MessageBox::Show("La tortuga ha llegado a la meta");
			lbl_resultado_final->Text = "!LA TORTUGA GANA¡ !BRAVO¡";
			Timer->Enabled = false;
		}
		break;
	default:
		break;
	}
	
}
private: System::Void dgv_Camino_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btn_empezar_Click(System::Object^ sender, System::EventArgs^ e) {
	Timer->Enabled = true;
}
private: System::Void btn_Reinicar_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
};
}
