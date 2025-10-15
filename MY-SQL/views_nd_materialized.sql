-- STEP 1: Create Sailors Table (base table)
CREATE TABLE Sailors (
    sid INT PRIMARY KEY,
    sname VARCHAR(100),
    rating INT
);

-- STEP 2: Insert sample data
INSERT INTO Sailors VALUES (1, 'Rahul', 7);
INSERT INTO Sailors VALUES (2, 'Priya', 8);
INSERT INTO Sailors VALUES (3, 'Amit', 9);
INSERT INTO Sailors VALUES (4, 'Geeta', 6);

-- 1. Create a view 'myview' selecting specific columns from Sailors
CREATE VIEW myview AS SELECT sid, sname FROM Sailors;

-- 2. Display all views and tables (MySQL version: SHOW TABLES & SHOW FULL TABLES)
SHOW TABLES;
SHOW FULL TABLES WHERE Table_Type = 'VIEW';

-- 3. Insert a row into the view (works if the base table allows it)
INSERT INTO myview VALUES (5, 'Vimal');

-- 4. Display data from view
SELECT * FROM myview;

-- 5. Display data from Sailors (base table after inserting via view)
SELECT * FROM Sailors;

-- 6. Delete a row from view
DELETE FROM myview WHERE sid = 5;

-- 7. Change structure of an existing view using CREATE OR REPLACE (add rating column)
CREATE OR REPLACE VIEW myview AS SELECT sid, sname, rating FROM Sailors;

-- 8. Create a view when base table doesn't exist using FORCE option (Oracle only)
-- MySQL does not support FORCE, so we can do:
-- Demonstration of error:
CREATE VIEW missingview AS
SELECT id, dummy FROM nonexist; -- Will error in MySQL

-- 9. Create a READ ONLY view (Oracle only; not supported in MySQL)
-- In MySQL, read-only must be emulated by privileges, not by view syntax.

-- 10. Attempt to insert/update in READ ONLY view (should error if system supports)
-- MySQL: All views are updatable if possible, unless complex.
-- INSERT INTO readonlyview VALUES (6, 'Kiran', 7); -- Only relevant in Oracle

-- 11. Create a view WITH CHECK OPTION (only supported in some systems, including MySQL and Oracle)
CREATE VIEW highrating AS
SELECT sid, sname, rating FROM Sailors WHERE rating >= 8
WITH CHECK OPTION;

-- 12. Attempt to insert data violating CHECK OPTION constraint
INSERT INTO highrating VALUES (7, 'Nina', 6); -- Should fail because rating < 8

-- 13. Drop a view
DROP VIEW myview;
DROP VIEW highrating;

-- Optional: Show final state of Sailors table
SELECT * FROM Sailors;
