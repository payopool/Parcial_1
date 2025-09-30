#include"Header.h"
#include"Ticket.h"
#include"gestorTicket.h"
int main() {
	gestorTicket gestor;
	int opcion;
	do {
		system("cls"); // Limpiar pantalla
		std::cout << "Menu:\n";
		std::cout << "1. Agregar Ticket\n";
		std::cout << "2. Mostrar Tickets\n";
		std::cout << "3. Eliminar Ticket\n";
		std::cout << "4. Editar Ticket\n";
		std::cout << "5. Salir\n";
		std::cout << "Seleccione una opcion: ";
		std::cin >> opcion;

		std::cin.ignore(); // Limpiar 

		switch(opcion) {
			case 1:
				gestor.agregarTicket();
				break;
			case 2:
				gestor.mostrarTickets();
				break;
			case 3: {
				std::string id;
				std::cout << "Ingrese el ID del ticket a eliminar: ";
				std::getline(std::cin, id);
				gestor.eliminarTicket(id);
				break;
			}
			case 4: {
				std::string id;
				std::cout << "Ingrese el ID del ticket a editar: ";
				std::getline(std::cin, id);
				gestor.editarTicket(id);
				break;
			}
			case 5:
				std::cout << "Saliendo\n";
				break;
			default:
				std::cout << "Opcion invalida\n";
				
				
		}
		system("pause");
	} while (opcion != 5);
		return 0;
	}