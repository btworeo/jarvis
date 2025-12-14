-- xamarth

create table table1 (
    id int,
    name varchar(50),
    age int
);

insert into
    table1 (id, name, age)
values (1, 'alice', 23),
    (2, 'bob', 28),
    (3, 'charlie', 32);

create table table2 (
    id int,
    address varchar(100),
    salary int
);

insert into
    table2 (id, address, salary)
values (2, 'new york', 50000),
    (3, 'boston', 65000),
    (4, 'san diego', 75000);

select * from table1;

select * from table2;

select table1.name, table2.address
from table1
    inner join table2 on table1.id = table2.id;

-- xamarth