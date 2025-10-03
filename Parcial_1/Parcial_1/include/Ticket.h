#pragma once
#include"Header.h"

class Ticket {
public:
	// Constructor por defecto
	Ticket() = default;

	// Constructor con parámetros para inicializar todos los atributos
	Ticket(std::string id, std::string descripcion, std::string titulo, std::string fecha, std::string estado)
		: Id(id), Descripcion(descripcion), titulo(titulo), fecha(fecha), estado(estado) {
	}

	// Destructor por defecto
	~Ticket() = default;

	// Establece un nuevo ID
	void setId(const std::string& new_id) { Id = new_id; }

	// Establece una nueva descripción
	void setDescripcion(const std::string& new_descripcion) { Descripcion = new_descripcion; }

	// Establece un nuevo título
	void setTitulo(const std::string& new_titulo) { titulo = new_titulo; }

	// Establece una nueva fecha
	void setFecha(const std::string& new_fecha) { fecha = new_fecha; }

	// Establece un nuevo estado
	void setEstado(const std::string& new_estado) { estado = new_estado; }

	// Obtiene el ID del ticket
	std::string getId() const { return Id; }

	// Obtiene la descripción del ticket
	std::string getDescripcion() const { return Descripcion; }

	// Obtiene el título del ticket
	std::string getTitulo() const { return titulo; }

	// Obtiene la fecha del ticket
	std::string getFecha() const { return fecha; }

	// Obtiene el estado del ticket
	std::string getEstado() const { return estado; }

	// Muestra todos los datos del ticket en consola
	void mostrarTicket() const {
		std::cout << "ID: " << Id << "\n";
		std::cout << "Descripcion: " << Descripcion << "\n";
		std::cout << "Titulo: " << titulo << "\n";
		std::cout << "Fecha: " << fecha << "\n";
		std::cout << "Estado: " << estado << "\n";
	}

private:
	std::string Id;             // ID del ticket
	std::string Descripcion;    // Descripción de la compra
	std::string titulo;         // Título del ticket
	std::string fecha;          // Fecha de creación
	std::string estado;         // Estado actual del ticket
};