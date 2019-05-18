#pragma once
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

namespace TV00 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			std::srand(int(time(0)));

			GraphPane^ pane1 = zedGraphControl1->GraphPane;
			GraphPane^ pane2 = zedGraphControl2->GraphPane;
			pane1->XAxis->Title->Text = "Ось X";
			pane1->YAxis->Title->Text = "Ось Y";
			pane2->XAxis->Title->Text = "Ось X";
			pane2->YAxis->Title->Text = "Ось Y";
			pane1->Title->Text = "выборочная функция распеределения";
			pane2->Title->Text = "теоретическая функция распеределения";
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::ComponentModel::IContainer^  components;











	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 260);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"вероятность выхода из строя одного";
			// 
			// textBox1_p
			// 
			this->textBox1_p->Location = System::Drawing::Point(147, 287);
			this->textBox1_p->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1_p->Name = L"textBox1_p";
			this->textBox1_p->Size = System::Drawing::Size(100, 22);
			this->textBox1_p->TabIndex = 1;
			this->textBox1_p->Text = L"0,4";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(111, 430);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 44);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Смоделировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(108, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"количество холодильников";
			// 
			// textBox1_M
			// 
			this->textBox1_M->Location = System::Drawing::Point(147, 214);
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
			this->dataGridView1->Size = System::Drawing::Size(881, 191);
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
			this->textBox2->Text = L"Вариант №13\r\nВ течении некоторого времени испытываются М приборов на надёжность. "
				L"\r\nВероятность выхода из строя каждого прибора независимо от других равна р.\r\nС.в"
				L". n (эта) - число отказавших приборов.";
			// 
			// textBox1_N
			// 
			this->textBox1_N->Location = System::Drawing::Point(147, 359);
			this->textBox1_N->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1_N->Name = L"textBox1_N";
			this->textBox1_N->Size = System::Drawing::Size(100, 22);
			this->textBox1_N->TabIndex = 9;
			this->textBox1_N->Text = L"1000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(108, 332);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"количество экспериментов\r\n";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView2->Location = System::Drawing::Point(432, 214);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(881, 134);
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
			this->label4->Location = System::Drawing::Point(95, 538);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"label4";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(432, 359);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(881, 162);
			this->dataGridView3->TabIndex = 12;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(1332, 14);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
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
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
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
			this->label5->Location = System::Drawing::Point(95, 582);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(95, 638);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"label6";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 732);
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
			this->Text = L"Моделирование случайных величин";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
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
			if (k == 1 || k == n-1) return n;
			if (k < n / 2) k = n - k;
			double res = 1;
			for (int i = k + 1; i <= n; i++)
				res = res * i;
			for (int i = 2; i <= n - k; i++)
				res = res / i;

			//int
			return res;
		}

		double P_bin(int n, int i,double p)
		{
			return (double)C(n,i) *pow(p,i)*pow(1-p, n-i);
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

			int N = Convert::ToInt32(textBox1_N->Text);
			int M = Convert::ToInt32(textBox1_M->Text);
			double p = Convert::ToDouble(textBox1_p->Text);
			int rn = 0;
			double MO = 0;
			double _x_ = 0;
			double D = 0;
			double S2 = 0;
			double R = 0;
			double Me = 0;
			double max_sub = 0;
			double sub = 0;
			double sum1 = 0;
			double sum2 = 0;
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
			std::vector<int> med(N);
			for (int i = 1; i < N+1; i++)
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
				dataGridView1[i, 1]->Value =(double)((int)((Convert::ToDouble(dataGridView1[i, 0]->Value) / (N))*1000))/1000;
				/*if (Convert::ToInt32(dataGridView1[i, 0]->Value) != 0)
				{
					med.push_back(i);
				}*/
				dataGridView3[i, 0]->Value = P_bin(M,i,p);
				dataGridView3[i, 1]->Value = Convert::ToDouble(dataGridView1[i, 0]->Value) / (N);
				MO += i * P_bin(M,i,p);
				_x_ += i * Convert::ToDouble(dataGridView1[i, 0]->Value) / (N);
			}

			double err = 0,
				max_err = 0;
			point_list->Add(0, 0);
			for (int i = 0; i < M + 1; i++)
			{
				D += (i - MO)*(i - MO)*P_bin(M, i, p);
				S2 += (Convert::ToDouble(dataGridView1[i, 0]->Value)*(i - _x_)*(i - _x_)) / (N);
				
				//  sum1 - для эмпирической
				sum1 += Convert::ToDouble(dataGridView3[i, 1]->Value);
				point_list->Add(i, sum1);
				if (i != M)
					point_list->Add(i + 1, sum1);

				//  sum2 - для вероятностной
				sum2 = sum2 + P_bin(M, i, p);
				point_list_t->Add(i, sum2);
				if (i != M)
					point_list_t->Add(i + 1, sum2);
				err = fabs(sum1 - sum2);
				if (err > max_err) max_err = err;
				sub = fabs(P_bin(M, i, p) - Convert::ToDouble(dataGridView1[i, 0]->Value) / (N));
				if (sub > max_sub) max_sub = sub;
			}
			//std::sort(med.begin(), med.begin() + 4);
			std::sort(med.begin(), med.end());
			if (med.size() % 2 == 0) 
				Me = (med[med.size() / 2] + med[(med.size() - 2) / 2]) / 2.0;
			else 
				Me = med[med.size() / 2];
			R = med[med.size()-1] - med[0];
			label4->Text = Convert::ToString(max_sub);
			label5->Text = "max err = " + Convert::ToString(max_err);
			label6->Text = " ";
			if (N < 16)
				for (int i = 0; i < med.size(); i++)
				{
					label6->Text += " " + Convert::ToString(med[i]);
				}
			
			
			dataGridView2->Rows[0]->Cells[0]->Value = MO;
			dataGridView2->Rows[0]->Cells[1]->Value = _x_;
			dataGridView2->Rows[0]->Cells[2]->Value = fabs(MO-_x_);
			dataGridView2->Rows[0]->Cells[3]->Value = D;
			dataGridView2->Rows[0]->Cells[4]->Value = S2;
			dataGridView2->Rows[0]->Cells[5]->Value = fabs(D - S2);
			dataGridView2->Rows[0]->Cells[6]->Value = Me;
			dataGridView2->Rows[0]->Cells[7]->Value = R;


			LineItem^ Curve1 = panel1->AddCurve("частота", point_list, Color::Red, SymbolType::None);
			LineItem^ Curve2 = panel1->AddCurve("вероятность", point_list_t, Color::Blue, SymbolType::None);
			LineItem^ Curve3 = panel2->AddCurve("вероятность", point_list_t, Color::Blue, SymbolType::None);

			zedGraphControl1->AxisChange();
			zedGraphControl1->Invalidate();

			zedGraphControl2->AxisChange();
			zedGraphControl2->Invalidate();
		}
	};
}
