-- xamarth

show databases;

create database oreo;

use oreo;

create table students (
    student_id int primary key auto_increment,
    name varchar(100),
    age int,
    department varchar(50)
);

show tables;

describe students;

-- xamarth