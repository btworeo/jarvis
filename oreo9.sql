-- xamarth

create table customers (
    id int,
    name varchar(100),
    age int,
    address varchar(100),
    salary int
);

insert into
    customers (
        id,
        name,
        age,
        address,
        salary
    )
values (
        1,
        'himani gupta',
        21,
        'modi nagar',
        22000
    ),
    (
        2,
        'shiva tiwari',
        22,
        'bhopal',
        21000
    ),
    (
        3,
        'ajeet bhargav',
        45,
        'meerut',
        65000
    ),
    (
        4,
        'ritesh yadav',
        36,
        'azamgarh',
        26000
    );

select * from customers order by name asc;

select * from customers order by salary desc;

select * from customers order by address asc;

-- xamarth