#   SQL-02: DBMS vs SQL

*   DBMS (Database Management System)
        A DBMS is software that helps store, organize, retrieve, and manage data efficiently.
Functions:
    Store data
    Update data
    Delete data
    Control access
    Ensure data security

*   SQL (Structured Query Language)
        SQL is the language used to communicate with a DBMS.
#   Retrieves all student records.
    SELECT * FROM Students;

#   Adds a new student.
    INSERT INTO Students VALUES (1, 'Rahul');

#   Updates a record.
    UPDATE Students
    SET Name = 'Aman'
    WHERE ID = 1;

#   Deletes a record. 
    DELETE FROM Students
    WHERE ID = 1;


## DBMS is software used to create, store, and manage databases, while SQL is the language used to interact with those databases. 
For example, MySQL is a DBMS, and SQL commands like SELECT, INSERT, UPDATE, and DELETE are used to retrieve and manipulate data within it.