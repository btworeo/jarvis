-- xamarth

insert into
    persons (
        personid,
        lastname,
        firstname,
        address,
        city
    )
values (
        1,
        'sharma',
        'rahul',
        'mg road',
        'delhi'
    ),
    (
        2,
        'patel',
        'anita',
        'ring road',
        'ahmedabad'
    ),
    (
        3,
        'singh',
        'rohan',
        'civil lines',
        'jaipur'
    );

select * from persons;

-- xamarth

insert into
    employee (
        employeeID,
        employeeName,
        designation,
        age,
        joiningDate,
        department,
        salary
    )
values (
        1,
        'rahul',
        'manager',
        35,
        '2018-06-15',
        'hr',
        60000
    ),
    (
        2,
        'anita',
        'developer',
        28,
        '2020-08-10',
        'it',
        50000
    ),
    (
        3,
        'rohan',
        'tester',
        30,
        '2019-03-20',
        'qa',
        45000
    ),
    (
        4,
        'priya',
        'analyst',
        27,
        '2021-01-05',
        'finance',
        48000
    ),
    (
        5,
        'vikram',
        'support',
        32,
        '2017-11-25',
        'operations',
        42000
    );

select * from employee;

-- xamarth

insert into
    studentDetails (
        rollNo,
        studentName,
        semester,
        age,
        dob,
        branch
    )
values (
        1,
        'rahul',
        1,
        18,
        '2006-03-12',
        'cse'
    ),
    (
        2,
        'anita',
        2,
        19,
        '2005-07-25',
        'ece'
    ),
    (
        3,
        'rohan',
        3,
        20,
        '2004-11-10',
        'mech'
    ),
    (
        4,
        'priya',
        4,
        21,
        '2003-01-18',
        'civil'
    ),
    (
        5,
        'vikram',
        5,
        22,
        '2002-09-05',
        'it'
    );

select * from studentDetails;

-- xamarth

update employee set department = 'cs' where age < 30;

select
    employeeid,
    employeename,
    age,
    department
from employee
where
    age < 30;

-- xamarth