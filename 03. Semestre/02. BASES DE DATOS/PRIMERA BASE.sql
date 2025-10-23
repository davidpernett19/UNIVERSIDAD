create database prueba;
show databases;
use prueba;

create table usuario(
id int,
nombre varchar(50),
apellido varchar(50));

create table clientes(
id_cliente int auto_increment primary key,
Nombre varchar(50),
Direccion varchar(50),
Telefono varchar(10));

drop table usuario; -- esto es para eliminar tablas

insert into clientes (Nombre, Direccion, Telefono) -- cuando se tiene un auto incremet 
values ('David', 'Tintal','3502950779');

select*from clientes;

insert into clientes (Nombre, Direccion, Telefono) -- cuando se tiene un auto incremet 
values ('Emmanuel roscon', 'Patio Bonito','3213213212'),
('Nestor', 'Patio Bonito','3213213212'),
('Cristian Caicedo', 'Patio Bonito','3213213212'),
('laura oe ', 'Patio Bonito','3213213212');

select*from clientes;

