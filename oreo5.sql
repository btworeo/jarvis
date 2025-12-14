-- xamarth

update persons
set
    address = 'new road',
    city = 'mumbai'
where
    personid = 1;

select * from persons where personid = 1;

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