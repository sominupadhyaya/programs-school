-- adding a column
alter table student
add grade varchar(5);

-- removing a column
alter table student
drop column grade;

-- modify datatype
alter table student
alter grade type INT;

-- rename column
alter table student
rename grade to class;
