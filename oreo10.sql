-- xamarth

delete from employee;

insert into
    employee (
        employeeid,
        employeename,
        age,
        salary
    )
values (1, 'john', 24, 25000),
    (2, 'nick', 22, 22000),
    (3, 'amara', 25, 15000),
    (4, 'nick', 22, 22000),
    (5, 'john', 24, 25000);

select employeeid, employeename, age, salary from employee;

-- xamarth