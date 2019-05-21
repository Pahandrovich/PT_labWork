#pragma once
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include "MyTable.h"

#define PI 3.1415926535897932384626433832795028841971

namespace TV00 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>



	std::vector<double> F_theor,
		intervals;
	std::vector<int> med;
	int N = 0,
		M = 0,
		k = 0;
	double p =0.0,
		MO = 0.0,
		_x_ = 0.0,
		D = 0.0,
		S2 = 0.0,
		R = 0.0,
		Me = 0.0,
		alpha = 0.0;






	public ref class MyForm : public System::Windows::Forms::Form
	{
		
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			std::srand(int(time(0)));

			GraphPane^ pane1 = zedGraphControl1->GraphPane;
			GraphPane^ pane2 = zedGraphControl2->GraphPane;
			pane1->XAxis->Title->Text = "��� X";
			pane1->YAxis->Title->Text = "��� Y";
			pane2->XAxis->Title->Text = "��� X";
			pane2->YAxis->Title->Text = "��� Y";
			pane1->Title->Text = "���������� ������� ��������������";
			pane2->Title->Text = "������������� ������� ��������������";


			std::vector<double> F_theor;


		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1_p;
	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1_M;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::TextBox^  textBox1_N;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::TextBox^  textBox1_k;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1_alpha;

	private: System::Windows::Forms::Label^  label8;








	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;


	private: System::ComponentModel::IContainer^  components;











	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1_p = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1_M = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1_N = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1_k = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1_alpha = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 234);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����������� ������ �� ����� ������";
			// 
			// textBox1_p
			// 
			this->textBox1_p->Location = System::Drawing::Point(159, 261);
			this->textBox1_p->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1_p->Name = L"textBox1_p";
			this->textBox1_p->Size = System::Drawing::Size(100, 22);
			this->textBox1_p->TabIndex = 1;
			this->textBox1_p->Text = L"0,4";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(4, 434);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 44);
			this->button1->TabIndex = 2;
			this->button1->Text = L"�������������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(120, 161);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"���������� �������������";
			// 
			// textBox1_M
			// 
			this->textBox1_M->Location = System::Drawing::Point(159, 188);
			this->textBox1_M->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1_M->Name = L"textBox1_M";
			this->textBox1_M->Size = System::Drawing::Size(100, 22);
			this->textBox1_M->TabIndex = 4;
			this->textBox1_M->Text = L"10";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(432, 12);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(881, 139);
			this->dataGridView1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 12);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(415, 138);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"������� �13\r\n� ������� ���������� ������� ������������ � �������� �� ���������. "
				L"\r\n����������� ������ �� ����� ������� ������� ���������� �� ������ ����� �.\r\n�.�"
				L". n (���) - ����� ���������� ��������.";
			// 
			// textBox1_N
			// 
			this->textBox1_N->Location = System::Drawing::Point(159, 334);
			this->textBox1_N->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1_N->Name = L"textBox1_N";
			this->textBox1_N->Size = System::Drawing::Size(100, 22);
			this->textBox1_N->TabIndex = 9;
			this->textBox1_N->Text = L"10";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(120, 306);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"���������� �������������\r\n";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView2->Location = System::Drawing::Point(432, 156);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(881, 97);
			this->dataGridView2->TabIndex = 10;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"En";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"x^";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"|En-_x_|";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Dn";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"S2";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"|Dn-S2|";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Me^";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"R^";
			this->Column8->Name = L"Column8";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 506);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"����. ����� ���. � ����.";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(432, 260);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(881, 114);
			this->dataGridView3->TabIndex = 12;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(1332, 14);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(525, 335);
			this->zedGraphControl1->TabIndex = 13;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(1332, 359);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(525, 335);
			this->zedGraphControl2->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 539);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"����. ����. ����� ����.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 677);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"R0 = ";
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column9 });
			this->dataGridView4->Location = System::Drawing::Point(432, 382);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(216, 411);
			this->dataGridView4->TabIndex = 17;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"������� ����������";
			this->Column9->Name = L"Column9";
			// 
			// textBox1_k
			// 
			this->textBox1_k->Location = System::Drawing::Point(67, 405);
			this->textBox1_k->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1_k->Name = L"textBox1_k";
			this->textBox1_k->Size = System::Drawing::Size(100, 22);
			this->textBox1_k->TabIndex = 19;
			this->textBox1_k->Text = L"10";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(51, 382);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(135, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"����� ��������� k";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(287, 434);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 44);
			this->button2->TabIndex = 21;
			this->button2->Text = L"���������� ������� ��� �����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1_alpha
			// 
			this->textBox1_alpha->Location = System::Drawing::Point(260, 405);
			this->textBox1_alpha->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1_alpha->Name = L"textBox1_alpha";
			this->textBox1_alpha->Size = System::Drawing::Size(100, 22);
			this->textBox1_alpha->TabIndex = 22;
			this->textBox1_alpha->Text = L"0,05";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(303, 382);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 17);
			this->label8->TabIndex = 23;
			this->label8->Text = L"alpha";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(145, 434);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 44);
			this->button3->TabIndex = 32;
			this->button3->Text = L"��������� �������������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(25, 606);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(60, 17);
			this->label17->TabIndex = 33;
			this->label17->Text = L"FChi2 = ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(25, 640);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(134, 17);
			this->label18->TabIndex = 34;
			this->label18->Text = L"�������� �������";
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column10,
					this->Column11
			});
			this->dataGridView5->Location = System::Drawing::Point(656, 382);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(333, 411);
			this->dataGridView5->TabIndex = 35;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"ni";
			this->Column10->Name = L"Column10";
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"pi";
			this->Column11->Name = L"Column11";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 807);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1_alpha);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1_k);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->zedGraphControl2);
			this->Controls->Add(this->zedGraphControl1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox1_N);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1_M);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1_p);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"������������� ��������� �������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool rand_num(double p)
		{
			double num = ((double)rand()) / RAND_MAX;
			if (num <= p)
				return true;
			else
				return false;
		}

		double C(int n, int k)
		{
			if (k == 0 || k == n) return 1;
			if (k == 1 || k == n - 1) return n;
			if (k < n / 2) k = n - k;
			double res = 1;
			for (int i = k + 1; i <= n; i++)
				res = res * i;
			for (int i = 2; i <= n - k; i++)
				res = res / i;

			//int
			return res;
		}

		double P_bin(int n, int i, double p)
		{
			return (double)C(n, i) *pow(p, i)*pow(1 - p, n - i);
		}

		double P_bin_X(int n, double i, double p)
		{
			if (i == 0.0) return 0.0;
			int j = 0;
			if (i - (int)i == 0) j = (int)i - 1;
			else j = (int)i;

			return P_bin(n, j, p);
		}

		double intFunc(double x,std::vector<double> &v)
		{
			if (x == 0.0) return 0.0;
			int y = 0;
			if (x - (int)x == 0) y = (int)x - 1;
			else y = (int)x;

			return v[y];
		}



	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		GraphPane^ panel1 = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		panel1->CurveList->Clear();
		panel2->CurveList->Clear();
		PointPairList^ point_list = gcnew ZedGraph::PointPairList();
		PointPairList^ point_list_t = gcnew ZedGraph::PointPairList();

		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		dataGridView3->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView3->Columns->Clear();

		N = Convert::ToInt32(textBox1_N->Text); // int
		M = Convert::ToInt32(textBox1_M->Text); //int
		p = Convert::ToDouble(textBox1_p->Text); // double
		int rn = 0;
		MO = 0; //double
		_x_ = 0; //double
		D = 0; // double
		S2 = 0; // double
		R = 0; // double
		Me = 0; // double
		double max_sub = 0;
		double sub = 0;
		double sum1 = 0;
		double sum2 = 0;
		//std::vector<double> F_theor(M + 1);
		F_theor.resize(M + 1);
		for (int i = 0; i < M + 1; i++)
		{
			dataGridView1->Columns->Add("Column1" + Convert::ToString(i), Convert::ToString(i));
			dataGridView1->Columns[i]->Width = 38;
			dataGridView3->Columns->Add("Column3" + Convert::ToString(i), Convert::ToString(i));
			dataGridView3->Columns[i]->Width = 50;
		}
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->HeaderCell->Value = "ksi";
		dataGridView1->Rows[1]->HeaderCell->Value = "frequency";
		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();
		dataGridView3->Rows[0]->HeaderCell->Value = "P(ksi)";
		dataGridView3->Rows[1]->HeaderCell->Value = "frequency";
		//std::vector<int> med(N);
		med.resize(N);
		for (int i = 1; i < N + 1; i++)
		{
			int rn = 0;
			for (int j = 0; j < M; j++)
			{
				if (rand_num(p)) rn++;
			}
			med[i - 1] = rn;
			dataGridView1[rn, 0]->Value = Convert::ToInt32(dataGridView1[rn, 0]->Value) + 1;
		}
		for (int i = 0; i < M + 1; i++)
		{
			dataGridView1[i, 1]->Value = (double)((int)((Convert::ToDouble(dataGridView1[i, 0]->Value) / (N)) * 1000)) / 1000;
			/*if (Convert::ToInt32(dataGridView1[i, 0]->Value) != 0)
			{
				med.push_back(i);
			}*/
			dataGridView3[i, 0]->Value = P_bin(M, i, p);
			dataGridView3[i, 1]->Value = Convert::ToDouble(dataGridView1[i, 0]->Value) / (N);
			MO += i * P_bin(M, i, p);
			_x_ += i * Convert::ToDouble(dataGridView1[i, 0]->Value) / (N);
		}

		double err = 0,
			max_err = 0;
		point_list->Add(0, 0);
		//F_theor[0] = 0.0;
		for (int i = 0; i < M + 1; i++)
		{
			D += (i - MO)*(i - MO)*P_bin(M, i, p);
			S2 += (Convert::ToDouble(dataGridView1[i, 0]->Value)*(i - _x_)*(i - _x_)) / (N);

			//  sum1 - ��� ������������
			sum1 += Convert::ToDouble(dataGridView3[i, 1]->Value);
			point_list->Add(i, sum1);
			if (i != M)
				point_list->Add(i + 1, sum1);

			//  sum2 - ��� �������������
			sum2 = sum2 + P_bin(M, i, p);
			F_theor[i] = sum2;
			point_list_t->Add(i, sum2);
			if (i != M)
				point_list_t->Add(i + 1, sum2);
			err = fabs(sum1 - sum2);
			if (err > max_err) max_err = err;
			sub = fabs(P_bin(M, i, p) - Convert::ToDouble(dataGridView1[i, 0]->Value) / (N));
			if (sub > max_sub) max_sub = sub;
		}
		std::sort(med.begin(), med.end());
		if (med.size() % 2 == 0)
			Me = (med[med.size() / 2] + med[(med.size() - 2) / 2]) / 2.0;
		else
			Me = med[med.size() / 2];
		R = med[med.size() - 1] - med[0];
		label4->Text = "max ������� ����� � � �� = " + Convert::ToString(max_sub);
		label5->Text = "����������� �������� = " + Convert::ToString(max_err);
		/*label6->Text = " ";
		if (N < 16)
			for (int i = 0; i < med.size(); i++)
			{
				label6->Text += " " + Convert::ToString(med[i]);
			}*/


		dataGridView2->Rows[0]->Cells[0]->Value = MO;
		dataGridView2->Rows[0]->Cells[1]->Value = _x_;
		dataGridView2->Rows[0]->Cells[2]->Value = fabs(MO - _x_);
		dataGridView2->Rows[0]->Cells[3]->Value = D;
		dataGridView2->Rows[0]->Cells[4]->Value = S2;
		dataGridView2->Rows[0]->Cells[5]->Value = fabs(D - S2);
		dataGridView2->Rows[0]->Cells[6]->Value = Me;
		dataGridView2->Rows[0]->Cells[7]->Value = R;


		LineItem^ Curve1 = panel1->AddCurve("�������", point_list, Color::Red, SymbolType::None);
		LineItem^ Curve2 = panel1->AddCurve("�����������", point_list_t, Color::Blue, SymbolType::None);
		LineItem^ Curve3 = panel2->AddCurve("�����������", point_list_t, Color::Blue, SymbolType::None);

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();

		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();


		//int k = Convert::ToInt32(textBox1_k->Text);
		//double alpha = Convert::ToDouble(textBox1_alpha->Text);
		//std::vector<double> intervals(k - 1);

		//int count = 0;
		//bool flag = true;
		//if (dataGridView4->RowCount > 1)
		//{

		//	if (!checkBox1->Checked)
		//	{
		//		double prev = Convert::ToDouble(dataGridView4[0, 0]->Value);
		//		intervals[0] = prev;
		//		for (int i = 1; i < k - 1 && flag; i++)
		//		{
		//			prev = Convert::ToDouble(dataGridView4[0, i - 1]->Value);
		//			if (prev > Convert::ToDouble(dataGridView4[0, i]->Value)) flag = false;
		//			intervals[i] = Convert::ToDouble(dataGridView4[0, i]->Value);
		//		}
		//	}
		//}
		//if (checkBox1->Checked)
		//{

		//	double h = (double)(med[med.size() - 1] - med[0]) / (k - 2.0);
		//	double prev = med[0];
		//	intervals[0] = prev;
		//	for (int i = 1; i < k - 2; i++)
		//	{
		//		prev = med[i - 1];
		//		intervals[i] = med[0] + i * h;
		//	}
		//	intervals[intervals.size() - 1] = med[med.size() - 1];
		//}


		//label9->Text = "intervals = ";
		//for (int i = 0; i< intervals.size();i++)
		//	label9->Text += " "+Convert::ToString(intervals[i]);


		//if (flag)
		//{
		//	Mytable tab(k - 2);
		//	int j = 0;
		//	//while (med[j])
		//	for (int i = 0; i < k - 2; i++)
		//	{
		//		count = 0;
		//		while (med[j] >= intervals[i] && med[j] < intervals[i + 1] && j < med.size())
		//		{
		//			j++;
		//			count++;
		//		}
		//		tab.ni[i] = count;
		//	}

		//	if (j != med.size())
		//		tab.ni[tab.ni.size() - 1] += med.size() - j;

		//	label10->Text = "ni = ";
		//	for (int i = 0; i < tab.ni.size(); i++)
		//		label10->Text += " " + Convert::ToString(tab.ni[i]);

		//	for (int i = 0; i < k - 2; i++)
		//	{
		//		tab.pi[i] = intFunc(intervals[i + 1], F_theor) - intFunc(intervals[i], F_theor);
		//		//tab.pi[i] = P_bin_X(M, intervals[i + 1], p) - P_bin_X(M, intervals[i], p);
		//	}

		//	label12->Text = "3 " + intervals[1] + " "+ intFunc(intervals[1], F_theor);
		//	label13->Text = "2 = " + intervals[0] +" "+ intFunc(intervals[0], F_theor);

		//	label11->Text = "pi = ";
		//	for (int i = 0; i < tab.ni.size(); i++)
		//		label11->Text += " " + Convert::ToString(tab.pi[i]);

		//	double X_2 = 0.0;
		//	label14->Text = "X_2i = ";
		//	label15->Text = "N * tab.pi[i] = ";
		//	for (int i = 0; i < tab.ni.size() /*k - 2*/; i++)
		//	{
		//		label15->Text += " " + N * tab.pi[i];
		//		X_2 = X_2 + (tab.ni[i] - N * tab.pi[i])*(tab.ni[i] - N * tab.pi[i]) / (N*tab.pi[i]);
		//		label14->Text += " " + X_2;
		//	}


		//	label6->Text = Convert::ToString(X_2);
		//}
	


	}


		private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			dataGridView4->Rows->Clear();
			
			k = Convert::ToInt32(textBox1_k->Text);
			//M = Convert::ToInt32(textBox1_M->Text);
			int size = 0;
			if (med.size() != 0)
			{
				size = med[med.size() - 1] - med[0];
			}
			if (k > 2)
				for (int i = 0; i < k - 1; i++)
				{
					dataGridView4->Rows->Add();
					if (k > 2 && size != 0)
						dataGridView4[0, i]->Value = i * (size / (k - 2.0));
				}
		}

		double fChi2(double x, int r)
		{
			double res = 0;
			if (x > 0)
			{
				res = pow(x, r / 2.0 - 1.0) / (pow(2, r / 2.0)*std::tgamma(r / 2.0)*exp(x / 2.0));
			}
			return res;
		}

		double FChi2(double R0, int r)
		{
			
			double res = 0;
			int N = 10000;
			double h = (double)R0 / N;

			for (int i = 0; i < N; i++)
			{
				res += (fChi2(i*h, r) + fChi2((i+1)*h, r))/2.0*h;
			}

			return 1 - res;
		}


		private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			dataGridView5->Rows->Clear();
			if (k > 2 && M != 0)
			{
				alpha = Convert::ToDouble(textBox1_alpha->Text);
				intervals.resize(k-1);

				int count = 0;
				bool flag = true;

				double prev = Convert::ToDouble(dataGridView4[0, 0]->Value);
				intervals[0] = prev;
				for (int i = 1; i < k - 1 && flag; i++)
				{
					prev = Convert::ToDouble(dataGridView4[0, i - 1]->Value);
					if (prev > Convert::ToDouble(dataGridView4[0, i]->Value)) flag = false;
					intervals[i] = Convert::ToDouble(dataGridView4[0, i]->Value);
				}


				/*label9->Text = "intervals = ";
				for (int i = 0; i< intervals.size();i++)
					label9->Text += " "+Convert::ToString(intervals[i]);*/


				if (flag)
				{
					Mytable tab(k);
					int j = 0;
					while (j < med.size() && med[j] < intervals[0])
					{
						j++;
						count++;
					}
					tab.ni[0] = count;
					for (int i = 0; i < k - 2; i++)
					{
						count = 0;
						while (j < med.size() && med[j] >= intervals[i] && med[j] < intervals[i + 1])
						{
							j++;
							count++;
							if (j == med.size()) break;
						}
						tab.ni[i+1] = count;
					}
					//label17->Text = "Debug1";

					if (j < med.size())
						tab.ni[tab.ni.size() - 1] += med.size() - j;

					//label10->Text = "ni = ";
					//for (int i = 0; i < tab.ni.size(); i++)
						//label10->Text += " " + Convert::ToString(tab.ni[i]);

					//label17->Text = "Debug2";

					for (int i = 0; i < k - 2; i++)
					{
						tab.pi[i+1] = intFunc(intervals[i + 1], F_theor) - intFunc(intervals[i], F_theor);
						//tab.pi[i] = P_bin_X(M, intervals[i + 1], p) - P_bin_X(M, intervals[i], p);
					}
					tab.pi[0] = intFunc(intervals[0], F_theor);
					tab.pi[tab.pi.size() - 1] = 1.0 - intFunc(intervals[intervals.size()-1], F_theor);

					//label12->Text = "� ����� 2 =  " + intervals[1] + " "+ intFunc(intervals[2], F_theor);
					//label13->Text = "� ����� 1 = " + intervals[0] +" "+ intFunc(intervals[1], F_theor);

					
					//label17->Text = "Debug3";

					//label11->Text = " DEBUG1 ";
					
					for (int i = 0; i < tab.pi.size(); i++)
					{
						dataGridView5->Rows->Add();
						dataGridView5[0, i]->Value = tab.ni[i];
						dataGridView5[1, i]->Value = tab.pi[i];

					}
					//label17->Text = "Debug4";
					double R0 = 0.0;
					//label14->Text = "R0 = ";
					//label15->Text = "N * tab.pi[i] = ";
					for (int i = 0; i < tab.ni.size() /*k - 2*/; i++)
					{
						//label15->Text += " " + N * tab.pi[i];
						R0 = R0 + (tab.ni[i] - N * tab.pi[i])*(tab.ni[i] - N * tab.pi[i]) / (N*tab.pi[i]);
						//label14->Text += " " + R0;
					}
					double Chi = FChi2(R0, k - 1);
					if (FChi2(R0, k - 1) > alpha)
						label18->Text = "������� �������� �������";
					else 
						label18->Text = "������� �������� ����������";
					label17->Text ="FChi2 = " Convert::ToString(Chi);
					label6->Text = "R0 = " + Convert::ToString(R0);
				}


			}

		}
};
}
