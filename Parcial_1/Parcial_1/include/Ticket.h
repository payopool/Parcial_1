#pragma once
#include"Header.h"

/**
 * @class Ticket
 * @brief Representa un ticket con informaci�n como ID, descripci�n, t�tulo, fecha y estado.
 */
class Ticket {
public:
	/**
	 * @brief Constructor por defecto.
	 */
	Ticket() = default;

	/**
	 * @brief Constructor con par�metros para inicializar todos los atributos.
	 * @param id ID del ticket.
	 * @param descripcion Descripci�n de la compra.
	 * @param titulo T�tulo del ticket.
	 * @param fecha Fecha de creaci�n.
	 * @param estado Estado actual del ticket.
	 */
	Ticket(std::string id, std::string descripcion, std::string titulo, std::string fecha, std::string estado)
		: Id(id), Descripcion(descripcion), titulo(titulo), fecha(fecha), estado(estado) {
	}

	/**
	 * @brief Destructor por defecto.
	 */
	~Ticket() = default;

	/**
	 * @brief Establece un nuevo ID.
	 * @param new_id Nuevo ID.
	 */
	void setId(const std::string& new_id) { Id = new_id; }

	/**
	 * @brief Establece una nueva descripci�n.
	 * @param new_descripcion Nueva descripci�n.
	 */
	void setDescripcion(const std::string& new_descripcion) { Descripcion = new_descripcion; }

	/**
	 * @brief Establece un nuevo t�tulo.
	 * @param new_titulo Nuevo t�tulo.
	 */
	void setTitulo(const std::string& new_titulo) { titulo = new_titulo; }

	/**
	 * @brief Establece una nueva fecha.
	 * @param new_fecha Nueva fecha.
	 */
	void setFecha(const std::string& new_fecha) { fecha = new_fecha; }

	/**
	 * @brief Establece un nuevo estado.
	 * @param new_estado Nuevo estado.
	 */
	void setEstado(const std::string& new_estado) { estado = new_estado; }

	/**
	 * @brief Obtiene el ID del ticket.
	 * @return ID actual.
	 */
	std::string getId() const { return Id; }

	/**
	 * @brief Obtiene la descripci�n del ticket.
	 * @return Descripci�n actual.
	 */
	std::string getDescripcion() const { return Descripcion; }

	/**
	 * @brief Obtiene el t�tulo del ticket.
	 * @return T�tulo actual.
	 */
	std::string getTitulo() const { return titulo; }

	/**
	 * @brief Obtiene la fecha del ticket.
	 * @return Fecha actual.
	 */
	std::string getFecha() const { return fecha; }

	/**
	 * @brief Obtiene el estado del ticket.
	 * @return Estado actual.
	 */
	std::string getEstado() const { return estado; }

	/**
	 * @brief Muestra todos los datos del ticket en consola.
	 */
	void mostrarTicket() const {
		std::cout << "ID: " << Id << "\n";
		std::cout << "Descripcion: " << Descripcion << "\n";
		std::cout << "Titulo: " << titulo << "\n";
		std::cout << "Fecha: " << fecha << "\n";
		std::cout << "Estado: " << estado << "\n";
	}

private:
	std::string Id;             ///< ID del ticket
	std::string Descripcion;    ///< Descripci�n de la compra
	std::string titulo;         ///< T�tulo del ticket
	std::string fecha;          ///< Fecha de creaci�n
	std::string estado;         ///< Estado actual del ticket
};