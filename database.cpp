#include "database.h"

SqlConnection^ GetConnection() {
	String^ connectionString = "Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=CoffeeShop;Integrated Security=True;Connect Timeout=30;";

	SqlConnection^ connection = gcnew SqlConnection(connectionString);
	return connection;
}

SqlConnection^ StartConnection() {
	SqlConnection^ connection = GetConnection();
	connection->Open();
	return connection;
}

void CloseConnection(SqlConnection^ connection) {
	try {
		connection->Close();
	}
	catch (Exception^ ex) {
		System::Windows::Forms::MessageBox::Show("Error closing connection, check your internet connection or connection might be closed.\n" + ex->Message);
	}
}
