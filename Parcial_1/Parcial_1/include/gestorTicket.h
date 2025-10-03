#pragma once
#include"Header.h"
#include"Ticket.h"

/**
 * @class gestorTicket
 * @brief Clase encargada de gestionar una colección de tickets.
 */
class gestorTicket {
public:
	/**
	 * @brief Constructor por defecto.
	 */
	gestorTicket() = default;

	/**
	 * @brief Destructor por defecto.
	 */
	~gestorTicket() = default;

	/**
	 * @brief Solicita datos al usuario y agrega un nuevo ticket.
	 *
	 * Pide al usuario los campos necesarios para crear un ticket
	 * y lo agrega al vector de tickets.
	 */
	void agregarTicket() {
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
		nuevoTicket.setId(id); ///< Establece el ID
		tickets.push_back(nuevoTicket); ///< Agrega el ticket al vector
	}

	/**
	 * @brief Muestra todos los tickets almacenados.
	 *
	 * Recorre el vector de tickets y muestra sus datos en consola.
	 */
	void mostrarTickets() const {
		if (tickets.empty()) { ///< Comprueba que el vector esté vacío
			std::cout << "No hay tickets disponibles.\n";
			return;
		}
		for (const auto& ticket : tickets) {
			ticket.mostrarTicket(); ///< Muestra los datos del ticket
			std::cout << "---------------------\n";
		}
	}

	/**
	 * @brief Elimina un ticket por su ID.
	 * @param id ID del ticket a eliminar.
	 */
	void eliminarTicket(const std::string& id) {
		for (auto it = tickets.begin(); it != tickets.end(); ++it) { ///< Busca el ticket por ID
			if (it->getId() == id) {
				tickets.erase(it); ///< Elimina el ticket del vector
				std::cout << "Ticket con ID " << id << " eliminado.\n";
				return;
			}
		}
	}

	/**
	 * @brief Edita los datos de un ticket existente.
	 * @param id ID del ticket a editar.
	 */
	void editarTicket(const std::string& id) {
		for (auto& ticket : tickets) {
			if (ticket.getId() == id) {
				std::string descripcion, titulo, fecha, estado;

				std::cout << "Nueva descripcion: ";
				std::getline(std::cin, descripcion);

				std::cout << "Nuevo titulo: ";
				std::getline(std::cin, titulo);

				std::cout << "Nueva fecha: ";
				std::getline(std::cin, fecha);

				std::cout << "Nuevo estado: ";
				std::getline(std::cin, estado);

				ticket.setDescripcion(descripcion); ///< Actualiza descripción
				ticket.setTitulo(titulo);           ///< Actualiza título
				ticket.setFecha(fecha);             ///< Actualiza fecha
				ticket.setEstado(estado);           ///< Actualiza estado

				std::cout << "Ticket con ID " << id << " editado.\n";
				return;
			}
		}
		std::cout << "No se encontro un ticket con ID " << id << ".\n";
	}

private:
	std::vector<Ticket> tickets; ///< Vector que almacena los tickets
};