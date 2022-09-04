-- Creating the table

create table students(
    id serial primary key,
    name varchar(255) not null,
    roll_no int not null,
    email varchar(255)
)

-- Inserting data in the rows

insert into students
(
    name,
    roll_no,
    email
)
values(
    'romin',
    1,
    'romin123@gmail.com'
),
(
    'john',
    2,
    'john234@gmail.com'
)
-- Selecting the values from table
select * from students;