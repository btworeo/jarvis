-- xamarth

alter table studentDetails
add column email varchar(100);

alter table studentDetails
drop column email;

alter table studentDetails
rename column studentName to fullname;

rename table studentDetails to studentInfo;

alter table studentInfo
modify column age smallint;

desc studentInfo;

-- xamarth