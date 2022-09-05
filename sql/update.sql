--updating a record

update students set name = 'bomin' 
where id = 1;

update students set email = 'bomin123@gmail.com'
where id = 1; 

--updating mutliple records at a time

update students set name = 'johndoe' ,
email = 'johndoe234@gmail.com'
where id = 2;
