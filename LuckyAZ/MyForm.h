#pragma once
#include "globalvariable.h"
#include "About.h"
#include "Rules.h"


namespace LuckyAZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
#pragma region 
	public: System::Windows::Forms::Button^  button00;

	public:

	private: System::Windows::Forms::StatusStrip^  statusStrip1;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	public: System::Windows::Forms::Button^  button10;
	private:
	public: System::Windows::Forms::Button^  button11;
	public: System::Windows::Forms::Button^  button12;
	public: System::Windows::Forms::Button^  button13;
	public: System::Windows::Forms::Button^  button14;
	public: System::Windows::Forms::Button^  button15;
	public: System::Windows::Forms::Button^  button16;
	public: System::Windows::Forms::Button^  button17;
	public: System::Windows::Forms::Button^  button18;
	public: System::Windows::Forms::Button^  button19;
	public: System::Windows::Forms::Button^  button09;

	public: System::Windows::Forms::Button^  button08;

	public: System::Windows::Forms::Button^  button07;

	public: System::Windows::Forms::Button^  button06;

	public: System::Windows::Forms::Button^  button05;

	public: System::Windows::Forms::Button^  button04;

	public: System::Windows::Forms::Button^  button03;

	public: System::Windows::Forms::Button^  button02;

	public: System::Windows::Forms::Button^  button01;

	private: System::Windows::Forms::MenuStrip^  menuStrip2;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  luckyResultsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rulesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	public: System::Windows::Forms::Button^  button90;
	private:
	public: System::Windows::Forms::Button^  button91;
	public: System::Windows::Forms::Button^  button92;
	public: System::Windows::Forms::Button^  button93;
	public: System::Windows::Forms::Button^  button94;
	public: System::Windows::Forms::Button^  button95;
	public: System::Windows::Forms::Button^  button96;
	public: System::Windows::Forms::Button^  button97;
	public: System::Windows::Forms::Button^  button98;
	public: System::Windows::Forms::Button^  button99;
	public: System::Windows::Forms::Button^  button80;
	public: System::Windows::Forms::Button^  button81;
	public: System::Windows::Forms::Button^  button82;
	public: System::Windows::Forms::Button^  button83;
	public: System::Windows::Forms::Button^  button84;
	public: System::Windows::Forms::Button^  button85;
	public: System::Windows::Forms::Button^  button86;
	public: System::Windows::Forms::Button^  button87;
	public: System::Windows::Forms::Button^  button88;
	public: System::Windows::Forms::Button^  button89;
	public: System::Windows::Forms::Button^  button70;
	public: System::Windows::Forms::Button^  button71;
	public: System::Windows::Forms::Button^  button72;
	public: System::Windows::Forms::Button^  button73;
	public: System::Windows::Forms::Button^  button74;
	public: System::Windows::Forms::Button^  button75;
	public: System::Windows::Forms::Button^  button76;
	public: System::Windows::Forms::Button^  button77;
	public: System::Windows::Forms::Button^  button78;
	public: System::Windows::Forms::Button^  button79;
	public: System::Windows::Forms::Button^  button60;
	public: System::Windows::Forms::Button^  button61;
	public: System::Windows::Forms::Button^  button62;
	public: System::Windows::Forms::Button^  button63;
	public: System::Windows::Forms::Button^  button64;
	public: System::Windows::Forms::Button^  button65;
	public: System::Windows::Forms::Button^  button66;
	public: System::Windows::Forms::Button^  button67;
	public: System::Windows::Forms::Button^  button68;
	public: System::Windows::Forms::Button^  button69;
	public: System::Windows::Forms::Button^  button50;
	public: System::Windows::Forms::Button^  button51;
	public: System::Windows::Forms::Button^  button52;
	public: System::Windows::Forms::Button^  button53;
	public: System::Windows::Forms::Button^  button54;
	public: System::Windows::Forms::Button^  button55;
	public: System::Windows::Forms::Button^  button56;
	public: System::Windows::Forms::Button^  button57;
	public: System::Windows::Forms::Button^  button58;
	public: System::Windows::Forms::Button^  button59;
	public: System::Windows::Forms::Button^  button40;
	public: System::Windows::Forms::Button^  button41;
	public: System::Windows::Forms::Button^  button42;
	public: System::Windows::Forms::Button^  button43;
	public: System::Windows::Forms::Button^  button44;
	public: System::Windows::Forms::Button^  button45;
	public: System::Windows::Forms::Button^  button46;
	public: System::Windows::Forms::Button^  button47;
	public: System::Windows::Forms::Button^  button48;
	public: System::Windows::Forms::Button^  button49;
	public: System::Windows::Forms::Button^  button30;
	public: System::Windows::Forms::Button^  button31;
	public: System::Windows::Forms::Button^  button32;
	public: System::Windows::Forms::Button^  button33;
	public: System::Windows::Forms::Button^  button34;
	public: System::Windows::Forms::Button^  button35;
	public: System::Windows::Forms::Button^  button36;
	public: System::Windows::Forms::Button^  button37;
	public: System::Windows::Forms::Button^  button38;
	public: System::Windows::Forms::Button^  button39;
	public: System::Windows::Forms::Button^  button20;
	public: System::Windows::Forms::Button^  button21;
	public: System::Windows::Forms::Button^  button22;
	public: System::Windows::Forms::Button^  button23;
	public: System::Windows::Forms::Button^  button24;
	public: System::Windows::Forms::Button^  button25;
	public: System::Windows::Forms::Button^  button26;
	public: System::Windows::Forms::Button^  button27;
	public: System::Windows::Forms::Button^  button28;
	public: System::Windows::Forms::Button^  button29;
private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
public:

	private:

	private:

	private:

	public:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		
#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button00 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button90 = (gcnew System::Windows::Forms::Button());
			this->button91 = (gcnew System::Windows::Forms::Button());
			this->button92 = (gcnew System::Windows::Forms::Button());
			this->button93 = (gcnew System::Windows::Forms::Button());
			this->button94 = (gcnew System::Windows::Forms::Button());
			this->button95 = (gcnew System::Windows::Forms::Button());
			this->button96 = (gcnew System::Windows::Forms::Button());
			this->button97 = (gcnew System::Windows::Forms::Button());
			this->button98 = (gcnew System::Windows::Forms::Button());
			this->button99 = (gcnew System::Windows::Forms::Button());
			this->button80 = (gcnew System::Windows::Forms::Button());
			this->button81 = (gcnew System::Windows::Forms::Button());
			this->button82 = (gcnew System::Windows::Forms::Button());
			this->button83 = (gcnew System::Windows::Forms::Button());
			this->button84 = (gcnew System::Windows::Forms::Button());
			this->button85 = (gcnew System::Windows::Forms::Button());
			this->button86 = (gcnew System::Windows::Forms::Button());
			this->button87 = (gcnew System::Windows::Forms::Button());
			this->button88 = (gcnew System::Windows::Forms::Button());
			this->button89 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->button74 = (gcnew System::Windows::Forms::Button());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->button77 = (gcnew System::Windows::Forms::Button());
			this->button78 = (gcnew System::Windows::Forms::Button());
			this->button79 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->button69 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button09 = (gcnew System::Windows::Forms::Button());
			this->button08 = (gcnew System::Windows::Forms::Button());
			this->button07 = (gcnew System::Windows::Forms::Button());
			this->button06 = (gcnew System::Windows::Forms::Button());
			this->button05 = (gcnew System::Windows::Forms::Button());
			this->button04 = (gcnew System::Windows::Forms::Button());
			this->button03 = (gcnew System::Windows::Forms::Button());
			this->button02 = (gcnew System::Windows::Forms::Button());
			this->button01 = (gcnew System::Windows::Forms::Button());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->luckyResultsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rulesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button00
			// 
			this->button00->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button00->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button00->Location = System::Drawing::Point(5, 5);
			this->button00->Margin = System::Windows::Forms::Padding(4);
			this->button00->Name = L"button00";
			this->button00->Size = System::Drawing::Size(39, 37);
			this->button00->TabIndex = 0;
			this->button00->UseVisualStyleBackColor = true;
			this->button00->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 486);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(484, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(34, 17);
			this->toolStripStatusLabel1->Text = L"0.000";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->Controls->Add(this->button90, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->button91, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->button92, 2, 9);
			this->tableLayoutPanel1->Controls->Add(this->button93, 3, 9);
			this->tableLayoutPanel1->Controls->Add(this->button94, 4, 9);
			this->tableLayoutPanel1->Controls->Add(this->button95, 5, 9);
			this->tableLayoutPanel1->Controls->Add(this->button96, 6, 9);
			this->tableLayoutPanel1->Controls->Add(this->button97, 7, 9);
			this->tableLayoutPanel1->Controls->Add(this->button98, 8, 9);
			this->tableLayoutPanel1->Controls->Add(this->button99, 9, 9);
			this->tableLayoutPanel1->Controls->Add(this->button80, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->button81, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->button82, 2, 8);
			this->tableLayoutPanel1->Controls->Add(this->button83, 3, 8);
			this->tableLayoutPanel1->Controls->Add(this->button84, 4, 8);
			this->tableLayoutPanel1->Controls->Add(this->button85, 5, 8);
			this->tableLayoutPanel1->Controls->Add(this->button86, 6, 8);
			this->tableLayoutPanel1->Controls->Add(this->button87, 7, 8);
			this->tableLayoutPanel1->Controls->Add(this->button88, 8, 8);
			this->tableLayoutPanel1->Controls->Add(this->button89, 9, 8);
			this->tableLayoutPanel1->Controls->Add(this->button70, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->button71, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->button72, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->button73, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->button74, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->button75, 5, 7);
			this->tableLayoutPanel1->Controls->Add(this->button76, 6, 7);
			this->tableLayoutPanel1->Controls->Add(this->button77, 7, 7);
			this->tableLayoutPanel1->Controls->Add(this->button78, 8, 7);
			this->tableLayoutPanel1->Controls->Add(this->button79, 9, 7);
			this->tableLayoutPanel1->Controls->Add(this->button60, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->button61, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->button62, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->button63, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->button64, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->button65, 5, 6);
			this->tableLayoutPanel1->Controls->Add(this->button66, 6, 6);
			this->tableLayoutPanel1->Controls->Add(this->button67, 7, 6);
			this->tableLayoutPanel1->Controls->Add(this->button68, 8, 6);
			this->tableLayoutPanel1->Controls->Add(this->button69, 9, 6);
			this->tableLayoutPanel1->Controls->Add(this->button50, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->button51, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->button52, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->button53, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->button54, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->button55, 5, 5);
			this->tableLayoutPanel1->Controls->Add(this->button56, 6, 5);
			this->tableLayoutPanel1->Controls->Add(this->button57, 7, 5);
			this->tableLayoutPanel1->Controls->Add(this->button58, 8, 5);
			this->tableLayoutPanel1->Controls->Add(this->button59, 9, 5);
			this->tableLayoutPanel1->Controls->Add(this->button40, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->button41, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->button42, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->button43, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->button44, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->button45, 5, 4);
			this->tableLayoutPanel1->Controls->Add(this->button46, 6, 4);
			this->tableLayoutPanel1->Controls->Add(this->button47, 7, 4);
			this->tableLayoutPanel1->Controls->Add(this->button48, 8, 4);
			this->tableLayoutPanel1->Controls->Add(this->button49, 9, 4);
			this->tableLayoutPanel1->Controls->Add(this->button30, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button31, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->button32, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->button33, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->button34, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->button35, 5, 3);
			this->tableLayoutPanel1->Controls->Add(this->button36, 6, 3);
			this->tableLayoutPanel1->Controls->Add(this->button37, 7, 3);
			this->tableLayoutPanel1->Controls->Add(this->button38, 8, 3);
			this->tableLayoutPanel1->Controls->Add(this->button39, 9, 3);
			this->tableLayoutPanel1->Controls->Add(this->button20, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button21, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button22, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button23, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->button24, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->button25, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->button26, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->button27, 7, 2);
			this->tableLayoutPanel1->Controls->Add(this->button28, 8, 2);
			this->tableLayoutPanel1->Controls->Add(this->button29, 9, 2);
			this->tableLayoutPanel1->Controls->Add(this->button10, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button11, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button12, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button13, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->button14, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->button15, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->button16, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->button17, 7, 1);
			this->tableLayoutPanel1->Controls->Add(this->button18, 8, 1);
			this->tableLayoutPanel1->Controls->Add(this->button19, 9, 1);
			this->tableLayoutPanel1->Controls->Add(this->button09, 9, 0);
			this->tableLayoutPanel1->Controls->Add(this->button08, 8, 0);
			this->tableLayoutPanel1->Controls->Add(this->button07, 7, 0);
			this->tableLayoutPanel1->Controls->Add(this->button06, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->button05, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->button04, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->button03, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button02, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button01, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button00, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 24);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(484, 462);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// button90
			// 
			this->button90->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button90->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button90->Location = System::Drawing::Point(5, 419);
			this->button90->Margin = System::Windows::Forms::Padding(4);
			this->button90->Name = L"button90";
			this->button90->Size = System::Drawing::Size(39, 38);
			this->button90->TabIndex = 99;
			this->button90->UseVisualStyleBackColor = true;
			this->button90->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button91
			// 
			this->button91->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button91->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button91->Location = System::Drawing::Point(53, 419);
			this->button91->Margin = System::Windows::Forms::Padding(4);
			this->button91->Name = L"button91";
			this->button91->Size = System::Drawing::Size(39, 38);
			this->button91->TabIndex = 98;
			this->button91->UseVisualStyleBackColor = true;
			this->button91->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button92
			// 
			this->button92->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button92->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button92->Location = System::Drawing::Point(101, 419);
			this->button92->Margin = System::Windows::Forms::Padding(4);
			this->button92->Name = L"button92";
			this->button92->Size = System::Drawing::Size(39, 38);
			this->button92->TabIndex = 97;
			this->button92->UseVisualStyleBackColor = true;
			this->button92->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button93
			// 
			this->button93->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button93->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button93->Location = System::Drawing::Point(149, 419);
			this->button93->Margin = System::Windows::Forms::Padding(4);
			this->button93->Name = L"button93";
			this->button93->Size = System::Drawing::Size(39, 38);
			this->button93->TabIndex = 96;
			this->button93->UseVisualStyleBackColor = true;
			this->button93->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button94
			// 
			this->button94->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button94->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button94->Location = System::Drawing::Point(197, 419);
			this->button94->Margin = System::Windows::Forms::Padding(4);
			this->button94->Name = L"button94";
			this->button94->Size = System::Drawing::Size(39, 38);
			this->button94->TabIndex = 95;
			this->button94->UseVisualStyleBackColor = true;
			this->button94->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button95
			// 
			this->button95->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button95->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button95->Location = System::Drawing::Point(245, 419);
			this->button95->Margin = System::Windows::Forms::Padding(4);
			this->button95->Name = L"button95";
			this->button95->Size = System::Drawing::Size(39, 38);
			this->button95->TabIndex = 94;
			this->button95->UseVisualStyleBackColor = true;
			this->button95->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button96
			// 
			this->button96->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button96->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button96->Location = System::Drawing::Point(293, 419);
			this->button96->Margin = System::Windows::Forms::Padding(4);
			this->button96->Name = L"button96";
			this->button96->Size = System::Drawing::Size(39, 38);
			this->button96->TabIndex = 93;
			this->button96->UseVisualStyleBackColor = true;
			this->button96->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button97
			// 
			this->button97->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button97->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button97->Location = System::Drawing::Point(341, 419);
			this->button97->Margin = System::Windows::Forms::Padding(4);
			this->button97->Name = L"button97";
			this->button97->Size = System::Drawing::Size(39, 38);
			this->button97->TabIndex = 92;
			this->button97->UseVisualStyleBackColor = true;
			this->button97->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button98
			// 
			this->button98->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button98->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button98->Location = System::Drawing::Point(389, 419);
			this->button98->Margin = System::Windows::Forms::Padding(4);
			this->button98->Name = L"button98";
			this->button98->Size = System::Drawing::Size(39, 38);
			this->button98->TabIndex = 91;
			this->button98->UseVisualStyleBackColor = true;
			this->button98->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button99
			// 
			this->button99->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button99->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button99->Location = System::Drawing::Point(437, 419);
			this->button99->Margin = System::Windows::Forms::Padding(4);
			this->button99->Name = L"button99";
			this->button99->Size = System::Drawing::Size(42, 38);
			this->button99->TabIndex = 90;
			this->button99->UseVisualStyleBackColor = true;
			this->button99->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button80
			// 
			this->button80->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button80->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button80->Location = System::Drawing::Point(5, 373);
			this->button80->Margin = System::Windows::Forms::Padding(4);
			this->button80->Name = L"button80";
			this->button80->Size = System::Drawing::Size(39, 37);
			this->button80->TabIndex = 89;
			this->button80->UseVisualStyleBackColor = true;
			this->button80->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button81
			// 
			this->button81->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button81->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button81->Location = System::Drawing::Point(53, 373);
			this->button81->Margin = System::Windows::Forms::Padding(4);
			this->button81->Name = L"button81";
			this->button81->Size = System::Drawing::Size(39, 37);
			this->button81->TabIndex = 88;
			this->button81->UseVisualStyleBackColor = true;
			this->button81->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button82
			// 
			this->button82->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button82->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button82->Location = System::Drawing::Point(101, 373);
			this->button82->Margin = System::Windows::Forms::Padding(4);
			this->button82->Name = L"button82";
			this->button82->Size = System::Drawing::Size(39, 37);
			this->button82->TabIndex = 87;
			this->button82->UseVisualStyleBackColor = true;
			this->button82->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button83
			// 
			this->button83->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button83->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button83->Location = System::Drawing::Point(149, 373);
			this->button83->Margin = System::Windows::Forms::Padding(4);
			this->button83->Name = L"button83";
			this->button83->Size = System::Drawing::Size(39, 37);
			this->button83->TabIndex = 86;
			this->button83->UseVisualStyleBackColor = true;
			this->button83->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button84
			// 
			this->button84->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button84->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button84->Location = System::Drawing::Point(197, 373);
			this->button84->Margin = System::Windows::Forms::Padding(4);
			this->button84->Name = L"button84";
			this->button84->Size = System::Drawing::Size(39, 37);
			this->button84->TabIndex = 85;
			this->button84->UseVisualStyleBackColor = true;
			this->button84->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button85
			// 
			this->button85->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button85->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button85->Location = System::Drawing::Point(245, 373);
			this->button85->Margin = System::Windows::Forms::Padding(4);
			this->button85->Name = L"button85";
			this->button85->Size = System::Drawing::Size(39, 37);
			this->button85->TabIndex = 84;
			this->button85->UseVisualStyleBackColor = true;
			this->button85->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button86
			// 
			this->button86->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button86->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button86->Location = System::Drawing::Point(293, 373);
			this->button86->Margin = System::Windows::Forms::Padding(4);
			this->button86->Name = L"button86";
			this->button86->Size = System::Drawing::Size(39, 37);
			this->button86->TabIndex = 83;
			this->button86->UseVisualStyleBackColor = true;
			this->button86->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button87
			// 
			this->button87->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button87->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button87->Location = System::Drawing::Point(341, 373);
			this->button87->Margin = System::Windows::Forms::Padding(4);
			this->button87->Name = L"button87";
			this->button87->Size = System::Drawing::Size(39, 37);
			this->button87->TabIndex = 82;
			this->button87->UseVisualStyleBackColor = true;
			this->button87->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button88
			// 
			this->button88->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button88->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button88->Location = System::Drawing::Point(389, 373);
			this->button88->Margin = System::Windows::Forms::Padding(4);
			this->button88->Name = L"button88";
			this->button88->Size = System::Drawing::Size(39, 37);
			this->button88->TabIndex = 81;
			this->button88->UseVisualStyleBackColor = true;
			this->button88->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button89
			// 
			this->button89->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button89->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button89->Location = System::Drawing::Point(437, 373);
			this->button89->Margin = System::Windows::Forms::Padding(4);
			this->button89->Name = L"button89";
			this->button89->Size = System::Drawing::Size(42, 37);
			this->button89->TabIndex = 80;
			this->button89->UseVisualStyleBackColor = true;
			this->button89->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button70
			// 
			this->button70->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button70->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button70->Location = System::Drawing::Point(5, 327);
			this->button70->Margin = System::Windows::Forms::Padding(4);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(39, 37);
			this->button70->TabIndex = 79;
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button71
			// 
			this->button71->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button71->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button71->Location = System::Drawing::Point(53, 327);
			this->button71->Margin = System::Windows::Forms::Padding(4);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(39, 37);
			this->button71->TabIndex = 78;
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button72
			// 
			this->button72->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button72->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button72->Location = System::Drawing::Point(101, 327);
			this->button72->Margin = System::Windows::Forms::Padding(4);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(39, 37);
			this->button72->TabIndex = 77;
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button73
			// 
			this->button73->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button73->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button73->Location = System::Drawing::Point(149, 327);
			this->button73->Margin = System::Windows::Forms::Padding(4);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(39, 37);
			this->button73->TabIndex = 76;
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button74
			// 
			this->button74->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button74->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button74->Location = System::Drawing::Point(197, 327);
			this->button74->Margin = System::Windows::Forms::Padding(4);
			this->button74->Name = L"button74";
			this->button74->Size = System::Drawing::Size(39, 37);
			this->button74->TabIndex = 75;
			this->button74->UseVisualStyleBackColor = true;
			this->button74->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button75
			// 
			this->button75->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button75->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button75->Location = System::Drawing::Point(245, 327);
			this->button75->Margin = System::Windows::Forms::Padding(4);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(39, 37);
			this->button75->TabIndex = 74;
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button76
			// 
			this->button76->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button76->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button76->Location = System::Drawing::Point(293, 327);
			this->button76->Margin = System::Windows::Forms::Padding(4);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(39, 37);
			this->button76->TabIndex = 73;
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button77
			// 
			this->button77->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button77->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button77->Location = System::Drawing::Point(341, 327);
			this->button77->Margin = System::Windows::Forms::Padding(4);
			this->button77->Name = L"button77";
			this->button77->Size = System::Drawing::Size(39, 37);
			this->button77->TabIndex = 72;
			this->button77->UseVisualStyleBackColor = true;
			this->button77->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button78
			// 
			this->button78->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button78->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button78->Location = System::Drawing::Point(389, 327);
			this->button78->Margin = System::Windows::Forms::Padding(4);
			this->button78->Name = L"button78";
			this->button78->Size = System::Drawing::Size(39, 37);
			this->button78->TabIndex = 71;
			this->button78->UseVisualStyleBackColor = true;
			this->button78->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button79
			// 
			this->button79->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button79->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button79->Location = System::Drawing::Point(437, 327);
			this->button79->Margin = System::Windows::Forms::Padding(4);
			this->button79->Name = L"button79";
			this->button79->Size = System::Drawing::Size(42, 37);
			this->button79->TabIndex = 70;
			this->button79->UseVisualStyleBackColor = true;
			this->button79->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button60
			// 
			this->button60->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button60->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button60->Location = System::Drawing::Point(5, 281);
			this->button60->Margin = System::Windows::Forms::Padding(4);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(39, 37);
			this->button60->TabIndex = 69;
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button61
			// 
			this->button61->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button61->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button61->Location = System::Drawing::Point(53, 281);
			this->button61->Margin = System::Windows::Forms::Padding(4);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(39, 37);
			this->button61->TabIndex = 68;
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button62
			// 
			this->button62->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button62->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button62->Location = System::Drawing::Point(101, 281);
			this->button62->Margin = System::Windows::Forms::Padding(4);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(39, 37);
			this->button62->TabIndex = 67;
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button63
			// 
			this->button63->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button63->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button63->Location = System::Drawing::Point(149, 281);
			this->button63->Margin = System::Windows::Forms::Padding(4);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(39, 37);
			this->button63->TabIndex = 66;
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button64
			// 
			this->button64->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button64->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button64->Location = System::Drawing::Point(197, 281);
			this->button64->Margin = System::Windows::Forms::Padding(4);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(39, 37);
			this->button64->TabIndex = 65;
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button65
			// 
			this->button65->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button65->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button65->Location = System::Drawing::Point(245, 281);
			this->button65->Margin = System::Windows::Forms::Padding(4);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(39, 37);
			this->button65->TabIndex = 64;
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button66
			// 
			this->button66->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button66->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button66->Location = System::Drawing::Point(293, 281);
			this->button66->Margin = System::Windows::Forms::Padding(4);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(39, 37);
			this->button66->TabIndex = 63;
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button67
			// 
			this->button67->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button67->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button67->Location = System::Drawing::Point(341, 281);
			this->button67->Margin = System::Windows::Forms::Padding(4);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(39, 37);
			this->button67->TabIndex = 62;
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button68
			// 
			this->button68->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button68->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button68->Location = System::Drawing::Point(389, 281);
			this->button68->Margin = System::Windows::Forms::Padding(4);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(39, 37);
			this->button68->TabIndex = 61;
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button69
			// 
			this->button69->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button69->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button69->Location = System::Drawing::Point(437, 281);
			this->button69->Margin = System::Windows::Forms::Padding(4);
			this->button69->Name = L"button69";
			this->button69->Size = System::Drawing::Size(42, 37);
			this->button69->TabIndex = 60;
			this->button69->UseVisualStyleBackColor = true;
			this->button69->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button50
			// 
			this->button50->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button50->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button50->Location = System::Drawing::Point(5, 235);
			this->button50->Margin = System::Windows::Forms::Padding(4);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(39, 37);
			this->button50->TabIndex = 59;
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button51
			// 
			this->button51->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button51->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button51->Location = System::Drawing::Point(53, 235);
			this->button51->Margin = System::Windows::Forms::Padding(4);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(39, 37);
			this->button51->TabIndex = 58;
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button52
			// 
			this->button52->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button52->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button52->Location = System::Drawing::Point(101, 235);
			this->button52->Margin = System::Windows::Forms::Padding(4);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(39, 37);
			this->button52->TabIndex = 57;
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button53
			// 
			this->button53->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button53->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button53->Location = System::Drawing::Point(149, 235);
			this->button53->Margin = System::Windows::Forms::Padding(4);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(39, 37);
			this->button53->TabIndex = 56;
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button54
			// 
			this->button54->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button54->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button54->Location = System::Drawing::Point(197, 235);
			this->button54->Margin = System::Windows::Forms::Padding(4);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(39, 37);
			this->button54->TabIndex = 55;
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button55
			// 
			this->button55->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button55->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button55->Location = System::Drawing::Point(245, 235);
			this->button55->Margin = System::Windows::Forms::Padding(4);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(39, 37);
			this->button55->TabIndex = 54;
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button56
			// 
			this->button56->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button56->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button56->Location = System::Drawing::Point(293, 235);
			this->button56->Margin = System::Windows::Forms::Padding(4);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(39, 37);
			this->button56->TabIndex = 53;
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button57
			// 
			this->button57->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button57->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button57->Location = System::Drawing::Point(341, 235);
			this->button57->Margin = System::Windows::Forms::Padding(4);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(39, 37);
			this->button57->TabIndex = 52;
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button58
			// 
			this->button58->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button58->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button58->Location = System::Drawing::Point(389, 235);
			this->button58->Margin = System::Windows::Forms::Padding(4);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(39, 37);
			this->button58->TabIndex = 51;
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button59
			// 
			this->button59->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button59->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button59->Location = System::Drawing::Point(437, 235);
			this->button59->Margin = System::Windows::Forms::Padding(4);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(42, 37);
			this->button59->TabIndex = 50;
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button40
			// 
			this->button40->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button40->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button40->Location = System::Drawing::Point(5, 189);
			this->button40->Margin = System::Windows::Forms::Padding(4);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(39, 37);
			this->button40->TabIndex = 49;
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button41
			// 
			this->button41->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button41->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button41->Location = System::Drawing::Point(53, 189);
			this->button41->Margin = System::Windows::Forms::Padding(4);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(39, 37);
			this->button41->TabIndex = 48;
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button42
			// 
			this->button42->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button42->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button42->Location = System::Drawing::Point(101, 189);
			this->button42->Margin = System::Windows::Forms::Padding(4);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(39, 37);
			this->button42->TabIndex = 47;
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button43
			// 
			this->button43->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button43->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button43->Location = System::Drawing::Point(149, 189);
			this->button43->Margin = System::Windows::Forms::Padding(4);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(39, 37);
			this->button43->TabIndex = 46;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button44
			// 
			this->button44->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button44->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button44->Location = System::Drawing::Point(197, 189);
			this->button44->Margin = System::Windows::Forms::Padding(4);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(39, 37);
			this->button44->TabIndex = 45;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button45
			// 
			this->button45->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button45->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button45->Location = System::Drawing::Point(245, 189);
			this->button45->Margin = System::Windows::Forms::Padding(4);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(39, 37);
			this->button45->TabIndex = 44;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button46
			// 
			this->button46->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button46->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button46->Location = System::Drawing::Point(293, 189);
			this->button46->Margin = System::Windows::Forms::Padding(4);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(39, 37);
			this->button46->TabIndex = 43;
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button47
			// 
			this->button47->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button47->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button47->Location = System::Drawing::Point(341, 189);
			this->button47->Margin = System::Windows::Forms::Padding(4);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(39, 37);
			this->button47->TabIndex = 42;
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button48
			// 
			this->button48->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button48->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button48->Location = System::Drawing::Point(389, 189);
			this->button48->Margin = System::Windows::Forms::Padding(4);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(39, 37);
			this->button48->TabIndex = 41;
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button49
			// 
			this->button49->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button49->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button49->Location = System::Drawing::Point(437, 189);
			this->button49->Margin = System::Windows::Forms::Padding(4);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(42, 37);
			this->button49->TabIndex = 40;
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button30
			// 
			this->button30->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button30->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button30->Location = System::Drawing::Point(5, 143);
			this->button30->Margin = System::Windows::Forms::Padding(4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(39, 37);
			this->button30->TabIndex = 39;
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button31
			// 
			this->button31->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button31->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button31->Location = System::Drawing::Point(53, 143);
			this->button31->Margin = System::Windows::Forms::Padding(4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(39, 37);
			this->button31->TabIndex = 38;
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button32
			// 
			this->button32->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button32->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button32->Location = System::Drawing::Point(101, 143);
			this->button32->Margin = System::Windows::Forms::Padding(4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(39, 37);
			this->button32->TabIndex = 37;
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button33
			// 
			this->button33->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button33->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button33->Location = System::Drawing::Point(149, 143);
			this->button33->Margin = System::Windows::Forms::Padding(4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(39, 37);
			this->button33->TabIndex = 36;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button34
			// 
			this->button34->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button34->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button34->Location = System::Drawing::Point(197, 143);
			this->button34->Margin = System::Windows::Forms::Padding(4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(39, 37);
			this->button34->TabIndex = 35;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button35
			// 
			this->button35->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button35->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button35->Location = System::Drawing::Point(245, 143);
			this->button35->Margin = System::Windows::Forms::Padding(4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(39, 37);
			this->button35->TabIndex = 34;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button36
			// 
			this->button36->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button36->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button36->Location = System::Drawing::Point(293, 143);
			this->button36->Margin = System::Windows::Forms::Padding(4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(39, 37);
			this->button36->TabIndex = 33;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button37
			// 
			this->button37->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button37->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button37->Location = System::Drawing::Point(341, 143);
			this->button37->Margin = System::Windows::Forms::Padding(4);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(39, 37);
			this->button37->TabIndex = 32;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button38
			// 
			this->button38->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button38->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button38->Location = System::Drawing::Point(389, 143);
			this->button38->Margin = System::Windows::Forms::Padding(4);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(39, 37);
			this->button38->TabIndex = 31;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button39
			// 
			this->button39->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button39->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button39->Location = System::Drawing::Point(437, 143);
			this->button39->Margin = System::Windows::Forms::Padding(4);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(42, 37);
			this->button39->TabIndex = 30;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button20
			// 
			this->button20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button20->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button20->Location = System::Drawing::Point(5, 97);
			this->button20->Margin = System::Windows::Forms::Padding(4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(39, 37);
			this->button20->TabIndex = 29;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button21
			// 
			this->button21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button21->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button21->Location = System::Drawing::Point(53, 97);
			this->button21->Margin = System::Windows::Forms::Padding(4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(39, 37);
			this->button21->TabIndex = 28;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button22
			// 
			this->button22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button22->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button22->Location = System::Drawing::Point(101, 97);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(39, 37);
			this->button22->TabIndex = 27;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button23
			// 
			this->button23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button23->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button23->Location = System::Drawing::Point(149, 97);
			this->button23->Margin = System::Windows::Forms::Padding(4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(39, 37);
			this->button23->TabIndex = 26;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button24
			// 
			this->button24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button24->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button24->Location = System::Drawing::Point(197, 97);
			this->button24->Margin = System::Windows::Forms::Padding(4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(39, 37);
			this->button24->TabIndex = 25;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button25
			// 
			this->button25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button25->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button25->Location = System::Drawing::Point(245, 97);
			this->button25->Margin = System::Windows::Forms::Padding(4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(39, 37);
			this->button25->TabIndex = 24;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button26
			// 
			this->button26->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button26->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button26->Location = System::Drawing::Point(293, 97);
			this->button26->Margin = System::Windows::Forms::Padding(4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(39, 37);
			this->button26->TabIndex = 23;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button27
			// 
			this->button27->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button27->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button27->Location = System::Drawing::Point(341, 97);
			this->button27->Margin = System::Windows::Forms::Padding(4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(39, 37);
			this->button27->TabIndex = 22;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button28
			// 
			this->button28->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button28->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button28->Location = System::Drawing::Point(389, 97);
			this->button28->Margin = System::Windows::Forms::Padding(4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(39, 37);
			this->button28->TabIndex = 21;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button29
			// 
			this->button29->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button29->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button29->Location = System::Drawing::Point(437, 97);
			this->button29->Margin = System::Windows::Forms::Padding(4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(42, 37);
			this->button29->TabIndex = 20;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button10
			// 
			this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button10->Location = System::Drawing::Point(5, 51);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(39, 37);
			this->button10->TabIndex = 19;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button11
			// 
			this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button11->Location = System::Drawing::Point(53, 51);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(39, 37);
			this->button11->TabIndex = 18;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button12
			// 
			this->button12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button12->Location = System::Drawing::Point(101, 51);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(39, 37);
			this->button12->TabIndex = 17;
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button13
			// 
			this->button13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button13->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button13->Location = System::Drawing::Point(149, 51);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(39, 37);
			this->button13->TabIndex = 16;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button14
			// 
			this->button14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button14->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button14->Location = System::Drawing::Point(197, 51);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(39, 37);
			this->button14->TabIndex = 15;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button15
			// 
			this->button15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button15->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button15->Location = System::Drawing::Point(245, 51);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(39, 37);
			this->button15->TabIndex = 14;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button16
			// 
			this->button16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button16->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button16->Location = System::Drawing::Point(293, 51);
			this->button16->Margin = System::Windows::Forms::Padding(4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(39, 37);
			this->button16->TabIndex = 13;
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button17
			// 
			this->button17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button17->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button17->Location = System::Drawing::Point(341, 51);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(39, 37);
			this->button17->TabIndex = 12;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button18
			// 
			this->button18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button18->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button18->Location = System::Drawing::Point(389, 51);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(39, 37);
			this->button18->TabIndex = 11;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button19
			// 
			this->button19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button19->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button19->Location = System::Drawing::Point(437, 51);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(42, 37);
			this->button19->TabIndex = 10;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button09
			// 
			this->button09->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button09->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button09->Location = System::Drawing::Point(437, 5);
			this->button09->Margin = System::Windows::Forms::Padding(4);
			this->button09->Name = L"button09";
			this->button09->Size = System::Drawing::Size(42, 37);
			this->button09->TabIndex = 9;
			this->button09->UseVisualStyleBackColor = true;
			this->button09->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button08
			// 
			this->button08->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button08->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button08->Location = System::Drawing::Point(389, 5);
			this->button08->Margin = System::Windows::Forms::Padding(4);
			this->button08->Name = L"button08";
			this->button08->Size = System::Drawing::Size(39, 37);
			this->button08->TabIndex = 8;
			this->button08->UseVisualStyleBackColor = true;
			this->button08->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button07
			// 
			this->button07->BackColor = System::Drawing::Color::Transparent;
			this->button07->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button07->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button07->Location = System::Drawing::Point(341, 5);
			this->button07->Margin = System::Windows::Forms::Padding(4);
			this->button07->Name = L"button07";
			this->button07->Size = System::Drawing::Size(39, 37);
			this->button07->TabIndex = 7;
			this->button07->UseVisualStyleBackColor = false;
			this->button07->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button06
			// 
			this->button06->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button06->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button06->Location = System::Drawing::Point(293, 5);
			this->button06->Margin = System::Windows::Forms::Padding(4);
			this->button06->Name = L"button06";
			this->button06->Size = System::Drawing::Size(39, 37);
			this->button06->TabIndex = 6;
			this->button06->UseVisualStyleBackColor = true;
			this->button06->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button05
			// 
			this->button05->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button05->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button05->Location = System::Drawing::Point(245, 5);
			this->button05->Margin = System::Windows::Forms::Padding(4);
			this->button05->Name = L"button05";
			this->button05->Size = System::Drawing::Size(39, 37);
			this->button05->TabIndex = 5;
			this->button05->UseVisualStyleBackColor = true;
			this->button05->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button04
			// 
			this->button04->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button04->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button04->Location = System::Drawing::Point(197, 5);
			this->button04->Margin = System::Windows::Forms::Padding(4);
			this->button04->Name = L"button04";
			this->button04->Size = System::Drawing::Size(39, 37);
			this->button04->TabIndex = 4;
			this->button04->UseVisualStyleBackColor = true;
			this->button04->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button03
			// 
			this->button03->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button03->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button03->Location = System::Drawing::Point(149, 5);
			this->button03->Margin = System::Windows::Forms::Padding(4);
			this->button03->Name = L"button03";
			this->button03->Size = System::Drawing::Size(39, 37);
			this->button03->TabIndex = 3;
			this->button03->UseVisualStyleBackColor = true;
			this->button03->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button02
			// 
			this->button02->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button02->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button02->Location = System::Drawing::Point(101, 5);
			this->button02->Margin = System::Windows::Forms::Padding(4);
			this->button02->Name = L"button02";
			this->button02->Size = System::Drawing::Size(39, 37);
			this->button02->TabIndex = 2;
			this->button02->UseVisualStyleBackColor = true;
			this->button02->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button01
			// 
			this->button01->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button01->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->button01->Location = System::Drawing::Point(53, 5);
			this->button01->Margin = System::Windows::Forms::Padding(4);
			this->button01->Name = L"button01";
			this->button01->Size = System::Drawing::Size(39, 37);
			this->button01->TabIndex = 1;
			this->button01->UseVisualStyleBackColor = true;
			this->button01->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->gameToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(484, 24);
			this->menuStrip2->TabIndex = 5;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newGameToolStripMenuItem,
					this->luckyResultsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			this->gameToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->gameToolStripMenuItem->Text = L"Game";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->newGameToolStripMenuItem->Text = L"New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::Newgame);
			// 
			// luckyResultsToolStripMenuItem
			// 
			this->luckyResultsToolStripMenuItem->Name = L"luckyResultsToolStripMenuItem";
			this->luckyResultsToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->luckyResultsToolStripMenuItem->Text = L"Lucky Results (not available)";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->rulesToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// rulesToolStripMenuItem
			// 
			this->rulesToolStripMenuItem->Name = L"rulesToolStripMenuItem";
			this->rulesToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->rulesToolStripMenuItem->Text = L"Rules";
			this->rulesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rulesToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(484, 508);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lucky AZ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
		void button_add(System::Object^ sender0) //get button address (row,col)
		{
			String^ a = ((Button^)sender0)->Name;
			rowbutton = a[6] - '0';
			colbutton = a[7] - '0';
		}

		void buttonshow(System::Object^ sender0) //show content of selected button
		{
			((Button^)sender0)->Text = gcnew String(table[rowbutton][colbutton].content.ToString()) ;
			table[rowbutton][colbutton].shown = true;
		}
		void showall()
		{
			String^ a;
			int row0, col0;
			for each (Button^ buttonX in tableLayoutPanel1->Controls) {
				a = buttonX->Name;
				row0 = a[6] - '0';
				col0 = a[7] - '0';
				buttonX->Text = gcnew String(table[row0][col0].content.ToString());
				if (table[a[6] - '0'][a[7] - '0'].god)
					buttonX->BackColor = Color::HotPink;
				else if (table[a[6] - '0'][a[7] - '0'].luck)
					buttonX->BackColor = Color::Yellow;
			}
		}
		
		void checktable(System::Object^ sender0)
		{
			if (endgame == false) {
				if (table[rowbutton][colbutton].god) {
					((Button^)sender0)->BackColor = Color::HotPink;
					showall();
					win_god();
					endgame = true;
				
				}
					
				else if (table[rowbutton][colbutton].luck) {
					((Button^)sender0)->BackColor = Color::Yellow; //FromArgb(201, 63, 194);
					buttonshow(sender0);
					if (table[rowbutton][colbutton].content != '.') {
						String^ a;

						Char row1, col1;
						int random;
						
						do {
							random = randomnumber();
							row1 = random / 10 + '0';
							col1 = random % 10 + '0';
						} while (table[random / 10][random % 10].shown || table[random / 10][random % 10].content == '.');
						a = "button" + gcnew String(row1.ToString()) + gcnew String(col1.ToString());
						for each (Button^ buttonX in tableLayoutPanel1->Controls) {
							if (buttonX->Name == a) {
								buttonX->Text = gcnew String(table[random / 10][random % 10].content.ToString());
							}	
						}
						shown_count = shown_count + 2;
						/*if (shown_count == azcount) {
							winAZ();
							endgame = true;
						} */
					}

				}
				else if (table[rowbutton][colbutton].content != '.') {
					((Button^)sender0)->BackColor = Color::Chartreuse;  
					buttonshow(sender0);
					++shown_count;
					/*if (shown_count == azcount) {
						winAZ();
						endgame = true;
					}*/

				}
					
				else {
					((Button^)sender0)->BackColor = Color::Red;   //FromArgb(228, 36, 36);
					showall();
					lose();
				}
					
			}
			
		}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		button00->Text = "A";
		endgame = false;
		std::srand((unsigned)time(NULL));
		azgenerate();
		luckygenrate();
	}
	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
		button_add(sender);
		checktable(sender);
	}


	private: System::Void Newgame(System::Object^  sender, System::EventArgs^  e) {
		std::srand((unsigned)time(NULL));
		endgame = false;
		azgenerate();
		luckygenrate();
		for each (Button^ buttonX in tableLayoutPanel1->Controls) {
			buttonX->Text = "";
			buttonX->BackColor = Color::Transparent;
		}
		button00->Text = "A";
	}
	private: System::Void Showall(System::Object^  sender, System::EventArgs^  e) {
		showall();
	}
	
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm::Close();
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		(gcnew About)->Show();
	}
	private: System::Void rulesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		(gcnew Rules)->Show();
	}
};
}

