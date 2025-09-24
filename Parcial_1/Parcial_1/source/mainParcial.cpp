#include"Header.h"
#include"Ticket.h"
#include"gestorTicket.h"
int main() {
	gestorTicket gestor;
	int opcion;
	do {
		std::cout << "Menu de Gestion de Tickets\n";
		std::cout << "1. Agregar Ticket\n";
		std::cout << "2. Mostrar Tickets\n";
		std::cout << "3. Editar Ticket por ID\n";
		std::cout << "4. Eliminar Ticket por ID\n";
		std::cout << "5. Salida\n";
		std::cout << "Seleccione una opcion: ";
		std::cin >> opcion;
		std::cin.ignore(); //limpia
		switch (opcion) {
		case 1: {
			std::string id, descripcion, titulo, fecha, estado;
			std::cout << "Ingrese ID: ";
			std::getline(std::cin, id);
			std::cout << "Ingrese Descripcion: ";
			std::getline(std::cin, descripcion);
			std::cout << "Ingrese Titulo: ";
			std::getline(std::cin, titulo);
			std::cout << "Ingrese Fecha (DD/MM/AAAA): ";
			std::getline(std::cin, fecha);
			std::cout << "Ingrese Estado: ";
			std::getline(std::cin, estado);
			Ticket nuevoTicket(id, descripcion, titulo, fecha, estado);
			gestor.agregarTicket(nuevoTicket);
			break;
		}
		case 2:
			gestor.mostrarTickets();
			break;
		case 3: {
			std::string id;
			std::cout << "Ingrese el ID del ticket a editar: ";
			std::getline(std::cin, id);
			Ticket* ticket = gestor.buscarTicketPorId(id);
			if (ticket) {
				std::string descripcion, titulo, fecha, estado;
				std::cout << "Ingrese nueva Descripcion: ";
				std::getline(std::cin, descripcion);
				std::cout << "Ingrese nuevo Titulo: ";
				std::getline(std::cin, titulo);
				std::cout << "Ingrese nueva Fecha (DD/MM/AAAA): ";
				std::getline(std::cin, fecha);
				std::cout << "Ingrese nuevo Estado: ";
				std::getline(std::cin, estado);
				Ticket ticketEditado(id, descripcion, titulo, fecha, estado);
				gestor.editarTicketPorId(id, ticketEditado);
			}
			else {
				std::cout << "Ticket con ID " << id << " no encontrado.\n";
			}
			break;
		case 4: {
			std::string id;
			std::cout << "Ingrese el ID del ticket a eliminar: ";
			std::getline(std::cin, id);
			gestor.eliminarTicketPorId(id);
			break;
		}
		case 5:
			std::cout << "Saliendo del programa.\n";
			break;
		default:

			std::cout << "Opcion invalida. Intente de nuevo.\n";
			break;


		}
		}
	} while (opcion != 5);


		return 0;
	}