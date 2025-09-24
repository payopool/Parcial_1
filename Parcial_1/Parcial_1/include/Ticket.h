#pragma once
#include"Header.h"
#include"gestorTicket.h"
class Ticket {
public:
	Ticket() = default;
	Ticket(std::string id, std::string descripcion, std::string titulo, std::string fecha, std::string estado)
		: Id(id), Descripcion(descripcion), titulo(titulo), fecha(fecha), estado(estado) {
	}
	~Ticket() = default;
void mostrarTicket() const {
		std::cout << "ID: " << Id << "\n";
		std::cout << "Descripcion: " << Descripcion << "\n";
		std::cout << "Titulo: " << titulo << "\n";
		std::cout << "Fecha: " << fecha << "\n";
		std::cout << "Estado: " << estado << "\n";
	}
	std::string getId() const { return Id; }
	std::string getDescripcion() const { return Descripcion; }
	std::string getTitulo() const { return titulo; }
	std::string getFecha() const { return fecha; }
	std::string getEstado() const { return estado; }
	void setDescripcion(const std::string& descripcion) { Descripcion = descripcion; }
	void setTitulo(const std::string& titulo) { this->titulo = titulo; }
	void setFecha(const std::string& fecha) { this->fecha = fecha; }
	void setEstado(const std::string& estado) { this->estado = estado; }


private:
	std::string Id;
	std::string Descripcion;
	std::string titulo;
	std::string fecha;
	std::string estado;
};