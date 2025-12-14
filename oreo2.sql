-- xamarth

create table persons (
    personID int primary key,
    firstName varchar(50),
    lastName varchar(50),
    address varchar(100),
    city varchar(50)
);

show tables;

describe persons;

-- xamarth

create table employee (
    employeeID int,
    employeeName varchar(100),
    designation varchar(50),
    age int,
    joiningDate date,
    department varchar(50)
);

show tables;

describe employee;

-- xamarth

create table studentDetails (
    rollNo int,
    studentName varchar(100),
    semester int,
    age int,
    dob date,
    branch varchar(50)
);

describe studentDetails;

-- xamarth