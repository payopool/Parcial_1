#pragma once
#include"Header.h"
#include"Ticket.h"
class gestorTicket {
public:
	gestorTicket() = default;
	~gestorTicket() = default;

	void agregarTicket(){
		std::string id, descripcion, titulo, fecha, estado;
		std::cout << "id (solo numeros): "; 
		std::getline(std::cin, id);
		std::cout << "descripcion de la compra: ";
		std::getline(std::cin, descripcion);
		std::cout << "titulo: ";
		std::getline(std::cin, titulo);
		std::cout << "fecha(dia/mes/año: ";
		std::getline(std::cin, fecha);
		std::cout << "estado: ";
		std::getline(std::cin, estado);

		Ticket nuevoTicket(id, descripcion, titulo, fecha, estado);
		nuevoTicket.setId(id);
		tickets.push_back(nuevoTicket); // Agregar el ticket 
	}

	void mostrarTickets() const {
		if (tickets.empty()) { //Compreba que este vacio
			std::cout << "No hay tickets disponibles.\n";
			return;
		}
		for(const auto& ticket : tickets) {
			ticket.mostrarTicket();
			std::cout << "---------------------\n";
		}
	}

	void eliminarTicket(const std::string& id) {
		for (auto it = tickets.begin(); it != tickets.end(); ++it) {//Busca el ticket por id
			if(it->getId() == id) {
				tickets.erase(it); // Eliminar el ticket 
				std::cout << "Ticket con ID " << id << " eliminado.\n";
				return;
			}
		}
	
	}

	void editarTicket(const std::string& id) {
		for(auto& ticket : tickets) {
			if(ticket.getId() == id) {
				std::string descripcion, titulo, fecha, estado;
				std::cout << "Nueva descripcion: ";
				std::getline(std::cin, descripcion);
				std::cout << "Nuevo titulo: ";
				std::getline(std::cin, titulo);
				std::cout << "Nueva fecha: ";
				std::getline(std::cin, fecha);
				std::cout << "Nuevo estado: ";
				std::getline(std::cin, estado);
				ticket.setDescripcion(descripcion);
				ticket.setTitulo(titulo);
				ticket.setFecha(fecha);
				ticket.setEstado(estado);
				std::cout << "Ticket con ID " << id << " editado.\n";
				return;
			}
		}
		std::cout << "No se encontro un ticket con ID " << id << ".\n";
	}
	

private:
	std::vector<Ticket> tickets;


};