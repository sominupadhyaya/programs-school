CREATE DATABASE my_db;

CREATE TABLE students (
 roll_no SERIAL PRIMARY KEY,
 first_name varchar(255),
 last_name varchar(255),
 age int,
 address text);

INSERT INTO students
(roll_no, first_name, last_name, age, address)
VALUES ('1', 'Surab', 'Parajuli', 17,'Nepal'),
       ('2', 'Isaac', 'Albéniz', 30, 'Spain'),
       ('3', 'Davide', 'Biale', 28, 'Italy');

SELECT * FROM students;

SELECT * FROM students
WHERE age = 17;

UPDATE students
SET address = ‘Ethiopia'
WHERE age = 17;

DELETE FROM students
WHERE address = 'Spain';