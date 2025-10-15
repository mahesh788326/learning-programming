-- STEP 1: Create students table
CREATE TABLE Students (
    rollno INT PRIMARY KEY,
    name VARCHAR(100)
);

-- STEP 2: Insert rows
INSERT INTO Students VALUES (1, 'Anita');
INSERT INTO Students VALUES (2, 'John');
INSERT INTO Students VALUES (3, 'Priya');

-- STEP 3: SELECT all data
SELECT * FROM Students;

-- STEP 4: SELECT specific column
SELECT name FROM Students;

-- STEP 5: SELECT with condition
SELECT * FROM Students WHERE rollno = 2;

-- STEP 6: DELETE row
DELETE FROM Students WHERE rollno = 1;

-- STEP 7: UPDATE a row
UPDATE Students SET name = 'Sonia' WHERE rollno = 3;
