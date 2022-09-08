#pragma once
#include "globalvariable.h"


static int resource = IDB_BITMAP1;
namespace LuckyAZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Rules
	/// </summary>
	public ref class Rules : public System::Windows::Forms::Form
	{
	public:
		Rules(void)
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
		~Rules()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  right;
	private: System::Windows::Forms::Button^  left;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label1;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Rules::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->right = (gcnew System::Windows::Forms::Button());
			this->left = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(37, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(459, 409);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// right
			// 
			this->right->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->right->Location = System::Drawing::Point(498, 232);
			this->right->Name = L"right";
			this->right->Size = System::Drawing::Size(24, 29);
			this->right->TabIndex = 2;
			this->right->Text = L">";
			this->right->UseVisualStyleBackColor = true;
			this->right->Click += gcnew System::EventHandler(this, &Rules::right_Click);
			// 
			// left
			// 
			this->left->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->left->Location = System::Drawing::Point(12, 232);
			this->left->Name = L"left";
			this->left->Size = System::Drawing::Size(24, 29);
			this->left->TabIndex = 3;
			this->left->Text = L"<";
			this->left->UseVisualStyleBackColor = true;
			this->left->Click += gcnew System::EventHandler(this, &Rules::left_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				7)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				86)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				7)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 1, 2);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 3)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 80)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 17)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(534, 512);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(163)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(40, 424);
			this->label1->Margin = System::Windows::Forms::Padding(3, 0, 3, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(453, 73);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Giao diện trò chơi mới";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Rules
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 512);
			this->Controls->Add(this->left);
			this->Controls->Add(this->right);
			this->Controls->Add(this->tableLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Rules";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Rules";
			this->Load += gcnew System::EventHandler(this, &Rules::Rules_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Rules::Close();
	}
	private: System::Void right_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ str1 = L"Giao diện lượt chơi mới";
		String^ str2 = L"Một chuỗi kí tự từ A đến Z cần được mở,\n"
			 L"được đánh ngẫu nhiên liên tiếp\n"
			 L"(không theo đường chéo).\n"
			 L"Nhiều trường hợp không đánh hết được tất cả kí tự.\n"
			L"Nhiệm vụ của bạn là mở được hết những ô kí tự.\n";
		String^ str3 = L"Có nhiều ô dấu chấm\n"
			L"Mở những ô này, trò chơi kết thúc, bạn thua.";
		String^ str4 = L"Có một số ô May Mắn (màu vàng)\n"
			L"mở những ô dấu chấm màu vàng, bạn không bị thua.\n";
		String^ str5 = L"Nếu ô màu vàng là ô chứa kí tự\n"
			L"một ô có kí tự khác sẽ tự mở.\n";
		String^ str6 = L"Có 5 ô God of Luck (màu hồng)\n"
			L"Mở được những ô này, bạn thắng ngay lập tức.\n";
		String^ str7 = L"Để bắt đầu lượt chơi mới, Vào Game > New Game.\n"
			L"Để thoát, nhấn nút đóng cửa sổ hoặc Game > Exit.\n";
		
		//pictureBox1->Image = gcnew Bitmap();
		// Remove any previously stored images
		using namespace System::Reflection;
		using namespace System::Runtime::InteropServices;
		if (pictureBox1->Image != nullptr)
		{
			delete pictureBox1->Image;
		}

		// Pick a new bitmap
		
		if (resource == IDB_BITMAP2)
		{
			resource = IDB_BITMAP3;
			label1->Text = str3;

		}
		else if (resource == IDB_BITMAP3)
		{
			resource = IDB_BITMAP4;
			label1->Text = str4;
		}
		else if (resource == IDB_BITMAP4)
		{
			resource = IDB_BITMAP5;
			label1->Text = str5;
		}
		else if (resource == IDB_BITMAP5)
		{
			resource = IDB_BITMAP6;
			label1->Text = str6;
		}
		else if (resource == IDB_BITMAP6)
		{
			resource = IDB_BITMAP7;
			label1->Text = str7;
		}
		else if (resource == IDB_BITMAP7)
		{
			resource = IDB_BITMAP1;
			label1->Text = str1;
		}
		else
		{
			resource = IDB_BITMAP2;
			label1->Text = str2;
		}

		// Get the primary module
		Module^ mod = Assembly::GetExecutingAssembly()->GetModules()[0];

		// Get the instance handle 
		IntPtr hinst = Marshal::GetHINSTANCE(mod);

		// Get the bitmap as unmanaged
		//HANDLE hbi = LoadImage((HINSTANCE)hinst.ToPointer(), MAKEINTRESOURCE(resource), IMAGE_BITMAP, 0, 0, LR_DEFAULTCOLOR);
		//HANDLE hbi = LoadImageW((HINSTANCE)hinst.ToPointer(), MAKEINTRESOURCEW(0), 0, 0, 0, LR_DEFAULTCOLOR);

		// import the unmanaged bitmap into the managed side 
		//Bitmap^ bi = Bitmap::FromHbitmap(IntPtr(hbi));

		// insert the bitmap into the picture box
		//pictureBox1->Image = bi;

		// Free up the unmanaged bitmap
		//DeleteObject(hbi);

		// Free up the instance and module
		//delete &hinst;
		//delete mod;
		
	}
private: System::Void Rules_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void left_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ str1 = L"Giao diện lượt chơi mới";
	String^ str2 = L"Một chuỗi kí tự từ A đến Z cần được mở,\n"
		L"được đánh ngẫu nhiên liên tiếp\n"
		L"(không theo đường chéo).\n"
		L"Nhiều trường hợp không đánh hết được tất cả kí tự.\n";
	String^ str3 = L"Có nhiều ô dấu chấm\n"
		L"Mở những ô này, trò chơi kết thúc, bạn thua.";
	String^ str4 = L"Có một số ô May Mắn (màu vàng)\n"
		L"mở những ô dấu chấm màu vàng, bạn không bị thua.\n";
	String^ str5 = L"Nếu ô màu vàng là ô chứa kí tự\n"
		L"một ô có kí tự khác sẽ tự mở.\n";
	String^ str6 = L"Có 5 ô God of Luck (màu hồng)\n"
		L"Mở được những ô này, bạn thắng ngay lập tức.\n";
	String^ str7 = L"Để bắt đầu lượt chơi mới, Vào Game > New Game.\n"
		L"Để thoát, nhấn nút đóng cửa sổ hoặc Game > Exit.\n";
	using namespace System::Reflection;
	using namespace System::Runtime::InteropServices;
	if (pictureBox1->Image != nullptr)
	{
		delete pictureBox1->Image;
	}

	// Pick a new bitmap
	if (resource == IDB_BITMAP7)
	{
		resource = IDB_BITMAP6;
		label1->Text = str6;
	}
	else if (resource == IDB_BITMAP6)
	{
		resource = IDB_BITMAP5;
		label1->Text = str5;
	}
	else if (resource == IDB_BITMAP5)
	{
		resource = IDB_BITMAP4;
		label1->Text = str4;
	}
	else if (resource == IDB_BITMAP4)
	{
		resource = IDB_BITMAP3;
		label1->Text = str3;
	}
	else if (resource == IDB_BITMAP3)
	{
		resource = IDB_BITMAP2;
		label1->Text = str2;
	}
	else if (resource == IDB_BITMAP2)
	{
		resource = IDB_BITMAP1;
		label1->Text = str1;
	}
	else
	{
		resource = IDB_BITMAP7;
		label1->Text = str7;
	}

	// Get the primary module
	Module^ mod = Assembly::GetExecutingAssembly()->GetModules()[0];

	// Get the instance handle 
	IntPtr hinst = Marshal::GetHINSTANCE(mod);

	// Get the bitmap as unmanaged
	//HANDLE hbi = LoadImage((HINSTANCE)hinst.ToPointer(), MAKEINTRESOURCE(resource), IMAGE_BITMAP, 0, 0, LR_DEFAULTCOLOR);

	// import the unmanaged bitmap into the managed side 
	//Bitmap^ bi = Bitmap::FromHbitmap(IntPtr(hbi));

	// insert the bitmap into the picture box
	//pictureBox1->Image = bi;

	// Free up the unmanaged bitmap
	//DeleteObject(hbi);

}
};
}
