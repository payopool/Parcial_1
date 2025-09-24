#pragma once
#include"Header.h"
#include"Ticket.h"
class gestorTicket {
public:
	gestorTicket() = default;
	~gestorTicket() = default;
	void agregarTicket(const Ticket& New_ticket) {
		tickets.push_back(New_ticket);
	}
	void mostrarTickets() const {
		for (const auto& ticket : tickets) {
			ticket.mostrarTicket();
			std::cout << "------------------------\n";

		}
	}
	Ticket* buscarTicketPorId(const std::string& id) {
		for (auto& ticket : tickets) {
			if (ticket.getId() == id) {
				return &ticket;
			}
		}
		return nullptr; // Retorna nullptr si no se encuentra el ticket
	}
	void eliminarTicketPorId(const std::string& id) {
		auto it = std::remove_if(tickets.begin(), tickets.end(),
			[&id](const Ticket& ticket) { return ticket.getId() == id; });
		if (it != tickets.end()) {
			tickets.erase(it, tickets.end());
			std::cout << "Ticket con ID " << id << " eliminado.\n";
		}
		else {
			std::cout << "No se encontro el ticket con ID " << id << ".\n";
		}
	}
 void editarTicketPorId(const std::string& id, const Ticket& ticketEditado) {
				for (auto& ticket : tickets) {
						if (ticket.getId() == id) {
								ticket.setDescripcion(ticketEditado.getDescripcion());
								ticket.setTitulo(ticketEditado.getTitulo());
								ticket.setFecha(ticketEditado.getFecha());
								ticket.setEstado(ticketEditado.getEstado());
								std::cout << "Ticket con ID " << id << " editado.\n";
								return;
						}
				}
				std::cout << "No se encontro el ticket con ID " << id << ".\n";
 }

private:
	std::vector<Ticket> tickets;


};