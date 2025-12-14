-- xamarth

create table department (
    deptid int,
    dname varchar(50),
    rollno int
);

insert into
    department (deptid, dname, rollno)
values (1112, 'mtech', 102),
    (1114, 'Me', 104);

select * from department;

update department set deptid = deptid + 5 where rollno in (102, 104);

select * from department;

-- xamarth