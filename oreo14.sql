-- xamarth

-- original version with FULL OUTER JOIN, wrong syntax
SELECT Table1.Name, Table2.Address
FROM Table1 FULL OUTER
    JOIN Table2 ON Table1.ID = Table2.ID;

-- corrected version
select table1.name, table2.address
from table1
    left join table2 on table1.id = table2.id
union
select table1.name, table2.address
from table1
    right join table2 on table1.id = table2.id;

-- xamarth