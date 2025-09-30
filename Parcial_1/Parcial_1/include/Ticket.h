#pragma once
#include"Header.h"
class Ticket {
public:
	Ticket() = default;
	Ticket(std::string id, std::string descripcion, std::string titulo, std::string fecha, std::string estado)
		: Id(id), Descripcion(descripcion), titulo(titulo), fecha(fecha), estado(estado) {
	}
	~Ticket() = default;
void setId(const std::string& new_id) { Id = new_id; }

	void setDescripcion(const std::string& new_descripcion) { Descripcion = new_descripcion; }

	void setTitulo(const std::string& new_titulo) { titulo = new_titulo; }

	void setFecha(const std::string& new_fecha) { fecha = new_fecha; }

	void setEstado(const std::string& new_estado) { estado = new_estado; }

	std::string getId() const { return Id; }

	std::string getDescripcion() const { return Descripcion; }

	std::string getTitulo() const { return titulo; }

	std::string getFecha() const { return fecha; }

	std::string getEstado() const { return estado; }

	void mostrarTicket() const {
		std::cout << "ID: " << Id << "\n";
		std::cout << "Descripcion: " << Descripcion << "\n";
		std::cout << "Titulo: " << titulo << "\n";
		std::cout << "Fecha: " << fecha << "\n";
		std::cout << "Estado: " << estado << "\n";
	}


private:
	std::string Id;
	std::string Descripcion;
	std::string titulo;
	std::string fecha;
	std::string estado;
};