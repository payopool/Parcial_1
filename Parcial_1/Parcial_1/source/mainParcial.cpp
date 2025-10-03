#include"Header.h"
#include"Ticket.h"
#include"gestorTicket.h"

int main() {
	gestorTicket gestor; // Instancia del gestor de tickets
	int opcion;

	do {
		system("cls"); // Limpiar pantalla

		// Men� principal
		std::cout << "Menu:\n";
		std::cout << "1. Agregar Ticket\n";
		std::cout << "2. Mostrar Tickets\n";
		std::cout << "3. Eliminar Ticket\n";
		std::cout << "4. Editar Ticket\n";
		std::cout << "5. Salir\n";
		std::cout << "Seleccione una opcion: ";
		std::cin >> opcion;

		std::cin.ignore(); // Limpiar buffer de entrada

		switch (opcion) {
		case 1:
			gestor.agregarTicket(); // Agrega un nuevo ticket
			break;

		case 2:
			gestor.mostrarTickets(); // Muestra todos los tickets
			break;

		case 3: {
			std::string id;
			std::cout << "Ingrese el ID del ticket a eliminar: ";
			std::getline(std::cin, id);
			gestor.eliminarTicket(id); // Elimina el ticket por ID
			break;
		}

		case 4: {
			std::string id;
			std::cout << "Ingrese el ID del ticket a editar: ";
			std::getline(std::cin, id);
			gestor.editarTicket(id); // Edita el ticket por ID
			break;
		}

		case 5:
			std::cout << "Saliendo\n"; // Finaliza el programa
			break;

		default:
			std::cout << "Opcion invalida\n"; // Opci�n no reconocida
		}

		system("pause"); // Pausa para ver resultados
	} while (opcion != 5); // Repite hasta que el usuario elija salir

	return 0;
}