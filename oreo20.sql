-- xamarth

create table student_info (
    stud_id int,
    stud_code int,
    stud_name varchar(50),
    subject varchar(30),
    marks int,
    phone bigint
);

insert into
    student_info (
        stud_id,
        stud_code,
        stud_name,
        subject,
        marks,
        phone
    )
values (
        1,
        101,
        'mark',
        'english',
        68,
        34545693537
    ),
    (
        2,
        102,
        'joseph',
        'physics',
        70,
        98765435659
    ),
    (
        3,
        103,
        'john',
        'maths',
        70,
        97653269756
    ),
    (
        4,
        104,
        'barack',
        'maths',
        90,
        87698753256
    ),
    (
        5,
        105,
        'rinky',
        'maths',
        85,
        67531579757
    ),
    (
        6,
        106,
        'adam',
        'science',
        92,
        79642256864
    ),
    (
        7,
        107,
        'andrew',
        'science',
        83,
        56742437579
    ),
    (
        8,
        108,
        'brayan',
        'science',
        85,
        75234165670
    ),
    (
        10,
        110,
        'alexandar',
        'biology',
        67,
        2347346438
    );

select * from student_info;

-- xamarth