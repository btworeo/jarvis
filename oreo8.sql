-- xamarth

select employeename
from employee
where
    employeename like 'j%'
    or employeename like 'k%'
    or employeename like 'l%'
    or employeename like 'm%';

select employeename
from employee
where
    employeename regexp '^[jklm]';

-- xamarth