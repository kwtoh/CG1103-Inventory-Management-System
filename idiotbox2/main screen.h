#pragma once

namespace idiotbox2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainscreen
	/// </summary>
	public ref class mainscreen : public System::Windows::Forms::Form
	{
	public:
		mainscreen(void)
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
		~mainscreen()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 






















































	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Index;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Barcode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Category;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Manufacturer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sales;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Discount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Expiry;
	private: System::Windows::Forms::ToolStripMenuItem^  filleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newProductToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  perishableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  normalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteProductToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  byBarcodeToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  byNameToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  loadInventoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveInventoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  resetSalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  allToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oneProductToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  byBarcodeToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  byNameToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  updateSalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  byBarcodeToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  byNameToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  inventoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  restockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  byBarcodeToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  byNameToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  checkExpiryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  byBarcodeToolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  byNameToolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  statisticsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  topProductToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  topManufacturerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  topProductInACategoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  batchProcessingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  listAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  perishableProductsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ormalProductsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  allProductsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  searchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  byNameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  byCateogryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  byBarcodeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  byManufacturerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  contactUsToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;



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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->filleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newProductToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perishableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->normalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteProductToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byBarcodeToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byNameToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadInventoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveInventoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetSalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->allToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oneProductToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byBarcodeToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byNameToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updateSalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byBarcodeToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byNameToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->inventoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->restockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byBarcodeToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byNameToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkExpiryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byBarcodeToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byNameToolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statisticsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->topProductToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->topManufacturerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->topProductInACategoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->batchProcessingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->perishableProductsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ormalProductsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->allProductsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byNameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byCateogryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byBarcodeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byManufacturerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactUsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Index = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Barcode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Category = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Manufacturer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sales = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Discount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Expiry = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {this->Index, 
				this->Name, this->Barcode, this->Category, this->Manufacturer, this->Price, this->Stock, this->Sales, this->Discount, this->Expiry});
			this->dataGridView1->Location = System::Drawing::Point(0, 40);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(894, 224);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &mainscreen::dataGridView1_CellContentClick);
			// 
			// filleToolStripMenuItem
			// 
			this->filleToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->newProductToolStripMenuItem, 
				this->deleteProductToolStripMenuItem, this->loadInventoryToolStripMenuItem, this->saveInventoryToolStripMenuItem, this->quitToolStripMenuItem});
			this->filleToolStripMenuItem->Name = L"filleToolStripMenuItem";
			this->filleToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->filleToolStripMenuItem->Text = L"File";
			// 
			// newProductToolStripMenuItem
			// 
			this->newProductToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->perishableToolStripMenuItem, 
				this->normalToolStripMenuItem});
			this->newProductToolStripMenuItem->Name = L"newProductToolStripMenuItem";
			this->newProductToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->newProductToolStripMenuItem->Text = L"New Product";
			// 
			// perishableToolStripMenuItem
			// 
			this->perishableToolStripMenuItem->Name = L"perishableToolStripMenuItem";
			this->perishableToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->perishableToolStripMenuItem->Text = L"Perishable";
			// 
			// normalToolStripMenuItem
			// 
			this->normalToolStripMenuItem->Name = L"normalToolStripMenuItem";
			this->normalToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->normalToolStripMenuItem->Text = L"Normal";
			// 
			// deleteProductToolStripMenuItem
			// 
			this->deleteProductToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->byBarcodeToolStripMenuItem1, 
				this->byNameToolStripMenuItem1});
			this->deleteProductToolStripMenuItem->Name = L"deleteProductToolStripMenuItem";
			this->deleteProductToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->deleteProductToolStripMenuItem->Text = L"Delete Product";
			// 
			// byBarcodeToolStripMenuItem1
			// 
			this->byBarcodeToolStripMenuItem1->Name = L"byBarcodeToolStripMenuItem1";
			this->byBarcodeToolStripMenuItem1->Size = System::Drawing::Size(133, 22);
			this->byBarcodeToolStripMenuItem1->Text = L"By Barcode";
			// 
			// byNameToolStripMenuItem1
			// 
			this->byNameToolStripMenuItem1->Name = L"byNameToolStripMenuItem1";
			this->byNameToolStripMenuItem1->Size = System::Drawing::Size(133, 22);
			this->byNameToolStripMenuItem1->Text = L"By Name";
			// 
			// loadInventoryToolStripMenuItem
			// 
			this->loadInventoryToolStripMenuItem->Name = L"loadInventoryToolStripMenuItem";
			this->loadInventoryToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->loadInventoryToolStripMenuItem->Text = L"Load Inventory";
			// 
			// saveInventoryToolStripMenuItem
			// 
			this->saveInventoryToolStripMenuItem->Name = L"saveInventoryToolStripMenuItem";
			this->saveInventoryToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->saveInventoryToolStripMenuItem->Text = L"Save Inventory";
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(153, 22);
			this->quitToolStripMenuItem->Text = L"Quit";
			// 
			// salesToolStripMenuItem
			// 
			this->salesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->resetSalesToolStripMenuItem, 
				this->updateSalesToolStripMenuItem});
			this->salesToolStripMenuItem->Name = L"salesToolStripMenuItem";
			this->salesToolStripMenuItem->Size = System::Drawing::Size(45, 20);
			this->salesToolStripMenuItem->Text = L"Sales";
			// 
			// resetSalesToolStripMenuItem
			// 
			this->resetSalesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->allToolStripMenuItem, 
				this->oneProductToolStripMenuItem});
			this->resetSalesToolStripMenuItem->Name = L"resetSalesToolStripMenuItem";
			this->resetSalesToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->resetSalesToolStripMenuItem->Text = L"Reset Sales";
			// 
			// allToolStripMenuItem
			// 
			this->allToolStripMenuItem->Name = L"allToolStripMenuItem";
			this->allToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->allToolStripMenuItem->Text = L"All";
			// 
			// oneProductToolStripMenuItem
			// 
			this->oneProductToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->byBarcodeToolStripMenuItem2, 
				this->byNameToolStripMenuItem2});
			this->oneProductToolStripMenuItem->Name = L"oneProductToolStripMenuItem";
			this->oneProductToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->oneProductToolStripMenuItem->Text = L"One Product";
			// 
			// byBarcodeToolStripMenuItem2
			// 
			this->byBarcodeToolStripMenuItem2->Name = L"byBarcodeToolStripMenuItem2";
			this->byBarcodeToolStripMenuItem2->Size = System::Drawing::Size(133, 22);
			this->byBarcodeToolStripMenuItem2->Text = L"By Barcode";
			// 
			// byNameToolStripMenuItem2
			// 
			this->byNameToolStripMenuItem2->Name = L"byNameToolStripMenuItem2";
			this->byNameToolStripMenuItem2->Size = System::Drawing::Size(133, 22);
			this->byNameToolStripMenuItem2->Text = L"By Name";
			// 
			// updateSalesToolStripMenuItem
			// 
			this->updateSalesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->byBarcodeToolStripMenuItem3, 
				this->byNameToolStripMenuItem3});
			this->updateSalesToolStripMenuItem->Name = L"updateSalesToolStripMenuItem";
			this->updateSalesToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->updateSalesToolStripMenuItem->Text = L"Update Sales";
			// 
			// byBarcodeToolStripMenuItem3
			// 
			this->byBarcodeToolStripMenuItem3->Name = L"byBarcodeToolStripMenuItem3";
			this->byBarcodeToolStripMenuItem3->Size = System::Drawing::Size(133, 22);
			this->byBarcodeToolStripMenuItem3->Text = L"By Barcode";
			// 
			// byNameToolStripMenuItem3
			// 
			this->byNameToolStripMenuItem3->Name = L"byNameToolStripMenuItem3";
			this->byNameToolStripMenuItem3->Size = System::Drawing::Size(133, 22);
			this->byNameToolStripMenuItem3->Text = L"By Name";
			// 
			// inventoryToolStripMenuItem
			// 
			this->inventoryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->restockToolStripMenuItem, 
				this->checkExpiryToolStripMenuItem, this->statisticsToolStripMenuItem, this->batchProcessingToolStripMenuItem, this->listAllToolStripMenuItem});
			this->inventoryToolStripMenuItem->Name = L"inventoryToolStripMenuItem";
			this->inventoryToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->inventoryToolStripMenuItem->Text = L"Inventory";
			// 
			// restockToolStripMenuItem
			// 
			this->restockToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->byBarcodeToolStripMenuItem4, 
				this->byNameToolStripMenuItem4});
			this->restockToolStripMenuItem->Name = L"restockToolStripMenuItem";
			this->restockToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->restockToolStripMenuItem->Text = L"Restock";
			// 
			// byBarcodeToolStripMenuItem4
			// 
			this->byBarcodeToolStripMenuItem4->Name = L"byBarcodeToolStripMenuItem4";
			this->byBarcodeToolStripMenuItem4->Size = System::Drawing::Size(133, 22);
			this->byBarcodeToolStripMenuItem4->Text = L"By Barcode";
			// 
			// byNameToolStripMenuItem4
			// 
			this->byNameToolStripMenuItem4->Name = L"byNameToolStripMenuItem4";
			this->byNameToolStripMenuItem4->Size = System::Drawing::Size(133, 22);
			this->byNameToolStripMenuItem4->Text = L"By Name";
			// 
			// checkExpiryToolStripMenuItem
			// 
			this->checkExpiryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->byBarcodeToolStripMenuItem5, 
				this->byNameToolStripMenuItem5});
			this->checkExpiryToolStripMenuItem->Name = L"checkExpiryToolStripMenuItem";
			this->checkExpiryToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->checkExpiryToolStripMenuItem->Text = L"Check Expiry";
			// 
			// byBarcodeToolStripMenuItem5
			// 
			this->byBarcodeToolStripMenuItem5->Name = L"byBarcodeToolStripMenuItem5";
			this->byBarcodeToolStripMenuItem5->Size = System::Drawing::Size(133, 22);
			this->byBarcodeToolStripMenuItem5->Text = L"By Barcode";
			// 
			// byNameToolStripMenuItem5
			// 
			this->byNameToolStripMenuItem5->Name = L"byNameToolStripMenuItem5";
			this->byNameToolStripMenuItem5->Size = System::Drawing::Size(133, 22);
			this->byNameToolStripMenuItem5->Text = L"By Name";
			// 
			// statisticsToolStripMenuItem
			// 
			this->statisticsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->topProductToolStripMenuItem, 
				this->topManufacturerToolStripMenuItem, this->topProductInACategoryToolStripMenuItem});
			this->statisticsToolStripMenuItem->Name = L"statisticsToolStripMenuItem";
			this->statisticsToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->statisticsToolStripMenuItem->Text = L"Statistics";
			// 
			// topProductToolStripMenuItem
			// 
			this->topProductToolStripMenuItem->Name = L"topProductToolStripMenuItem";
			this->topProductToolStripMenuItem->Size = System::Drawing::Size(213, 22);
			this->topProductToolStripMenuItem->Text = L"Top X Products";
			// 
			// topManufacturerToolStripMenuItem
			// 
			this->topManufacturerToolStripMenuItem->Name = L"topManufacturerToolStripMenuItem";
			this->topManufacturerToolStripMenuItem->Size = System::Drawing::Size(213, 22);
			this->topManufacturerToolStripMenuItem->Text = L"Top Manufacturer";
			// 
			// topProductInACategoryToolStripMenuItem
			// 
			this->topProductInACategoryToolStripMenuItem->Name = L"topProductInACategoryToolStripMenuItem";
			this->topProductInACategoryToolStripMenuItem->Size = System::Drawing::Size(213, 22);
			this->topProductInACategoryToolStripMenuItem->Text = L"Top Product in a Category";
			// 
			// batchProcessingToolStripMenuItem
			// 
			this->batchProcessingToolStripMenuItem->Name = L"batchProcessingToolStripMenuItem";
			this->batchProcessingToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->batchProcessingToolStripMenuItem->Text = L"BatchProcessing";
			// 
			// listAllToolStripMenuItem
			// 
			this->listAllToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->perishableProductsToolStripMenuItem, 
				this->ormalProductsToolStripMenuItem, this->allProductsToolStripMenuItem});
			this->listAllToolStripMenuItem->Name = L"listAllToolStripMenuItem";
			this->listAllToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->listAllToolStripMenuItem->Text = L"List All";
			// 
			// perishableProductsToolStripMenuItem
			// 
			this->perishableProductsToolStripMenuItem->Name = L"perishableProductsToolStripMenuItem";
			this->perishableProductsToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->perishableProductsToolStripMenuItem->Text = L"Perishable Products";
			// 
			// ormalProductsToolStripMenuItem
			// 
			this->ormalProductsToolStripMenuItem->Name = L"ormalProductsToolStripMenuItem";
			this->ormalProductsToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->ormalProductsToolStripMenuItem->Text = L"Normal Products";
			// 
			// allProductsToolStripMenuItem
			// 
			this->allProductsToolStripMenuItem->Name = L"allProductsToolStripMenuItem";
			this->allProductsToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->allProductsToolStripMenuItem->Text = L"All Products";
			// 
			// searchToolStripMenuItem
			// 
			this->searchToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->byNameToolStripMenuItem, 
				this->byCateogryToolStripMenuItem, this->byBarcodeToolStripMenuItem, this->byManufacturerToolStripMenuItem});
			this->searchToolStripMenuItem->Name = L"searchToolStripMenuItem";
			this->searchToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->searchToolStripMenuItem->Text = L"Search";
			// 
			// byNameToolStripMenuItem
			// 
			this->byNameToolStripMenuItem->Name = L"byNameToolStripMenuItem";
			this->byNameToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->byNameToolStripMenuItem->Text = L"By name";
			// 
			// byCateogryToolStripMenuItem
			// 
			this->byCateogryToolStripMenuItem->Name = L"byCateogryToolStripMenuItem";
			this->byCateogryToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->byCateogryToolStripMenuItem->Text = L"By cateogry";
			// 
			// byBarcodeToolStripMenuItem
			// 
			this->byBarcodeToolStripMenuItem->Name = L"byBarcodeToolStripMenuItem";
			this->byBarcodeToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->byBarcodeToolStripMenuItem->Text = L"By barcode";
			// 
			// byManufacturerToolStripMenuItem
			// 
			this->byManufacturerToolStripMenuItem->Name = L"byManufacturerToolStripMenuItem";
			this->byManufacturerToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->byManufacturerToolStripMenuItem->Text = L"By manufacturer";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->contactUsToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// contactUsToolStripMenuItem
			// 
			this->contactUsToolStripMenuItem->Name = L"contactUsToolStripMenuItem";
			this->contactUsToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->contactUsToolStripMenuItem->Text = L"Contact Us";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->filleToolStripMenuItem, 
				this->salesToolStripMenuItem, this->inventoryToolStripMenuItem, this->searchToolStripMenuItem, this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(904, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &mainscreen::menuStrip1_ItemClicked);
			// 
			// Index
			// 
			this->Index->HeaderText = L"Index";
			this->Index->Name = L"Index";
			this->Index->ReadOnly = true;
			this->Index->Width = 40;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Name";
			this->Name->Name = L"Name";
			this->Name->ReadOnly = true;
			this->Name->Width = 150;
			// 
			// Barcode
			// 
			this->Barcode->HeaderText = L"Barcode";
			this->Barcode->Name = L"Barcode";
			this->Barcode->ReadOnly = true;
			this->Barcode->Width = 70;
			// 
			// Category
			// 
			this->Category->HeaderText = L"Category";
			this->Category->Name = L"Category";
			this->Category->ReadOnly = true;
			// 
			// Manufacturer
			// 
			this->Manufacturer->HeaderText = L"Manufacturer";
			this->Manufacturer->Name = L"Manufacturer";
			this->Manufacturer->ReadOnly = true;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->Name = L"Price";
			this->Price->ReadOnly = true;
			this->Price->Width = 70;
			// 
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			this->Stock->ReadOnly = true;
			this->Stock->Width = 70;
			// 
			// Sales
			// 
			this->Sales->HeaderText = L"Sales";
			this->Sales->Name = L"Sales";
			this->Sales->ReadOnly = true;
			this->Sales->Width = 70;
			// 
			// Discount
			// 
			this->Discount->HeaderText = L"Discount Percentage(%)";
			this->Discount->Name = L"Discount";
			this->Discount->ReadOnly = true;
			this->Discount->Width = 80;
			// 
			// Expiry
			// 
			this->Expiry->HeaderText = L"Expiry Date";
			this->Expiry->Name = L"Expiry";
			this->Expiry->ReadOnly = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(606, 270);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(94, 37);
			this->button11->TabIndex = 23;
			this->button11->Text = L"Check Expiry";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(801, 270);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(94, 37);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Search";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(506, 270);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(94, 37);
			this->button8->TabIndex = 20;
			this->button8->Text = L"Generate Statistics";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(406, 270);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(94, 37);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Reset Sales";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(306, 270);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(94, 37);
			this->button6->TabIndex = 18;
			this->button6->Text = L"Update Sales";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(706, 270);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(94, 37);
			this->button5->TabIndex = 17;
			this->button5->Text = L"Batch Processing";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(206, 270);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(94, 37);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Restock Product";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(106, 270);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(94, 37);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Delete Product";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 270);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(94, 37);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Add Product";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// mainscreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(904, 330);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainscreen";
			this->Text = L"Open ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
};
}
