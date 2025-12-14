-- xamarth

create table main (id int, salary int);

create table backup (id int, salary int);

insert into main values (1, 10000), (2, 20000), (3, 30000);

select * from main;

create trigger t1
before delete on main
for each row
insert into backup values(old.id, old.salary);

delete from main where id = 1;

select * from backup;

-- xamarth