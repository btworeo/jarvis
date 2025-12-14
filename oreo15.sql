-- xamarth

create table student_trigger (
    student_rollno int not null primary key,
    student_firstname varchar(100),
    student_englishmarks int,
    student_physicsmarks int,
    student_chemistrymarks int,
    student_mathsmarks int,
    student_totalmarks int,
    student_percentage float
);

create trigger student_table_marks
before insert
on student_trigger
for each row
set
    new.student_totalmarks =
        new.student_englishmarks +
        new.student_physicsmarks +
        new.student_chemistrymarks +
        new.student_mathsmarks,
    new.student_percentage =
        (new.student_totalmarks / 400) * 100;

insert into
    student_trigger (
        student_rollno,
        student_firstname,
        student_englishmarks,
        student_physicsmarks,
        student_chemistrymarks,
        student_mathsmarks
    )
values (201, 'sorya', 88, 75, 69, 92);

select * from student_trigger;

-- xamarth