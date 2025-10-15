-- STEP 1: Create Sailors and Reserves tables
CREATE TABLE Sailors (
    sailor_id INT PRIMARY KEY,
    name VARCHAR(100)
);

CREATE TABLE Reserves (
    sailor_id INT,
    boat_color VARCHAR(20)
);

-- STEP 2: Sample data
INSERT INTO Sailors VALUES (1, 'Ravi');
INSERT INTO Sailors VALUES (2, 'Priya');
INSERT INTO Sailors VALUES (3, 'Amit');
INSERT INTO Sailors VALUES (4, 'Rina');

INSERT INTO Reserves VALUES (1, 'red');
INSERT INTO Reserves VALUES (2, 'green');
INSERT INTO Reserves VALUES (3, 'red');
INSERT INTO Reserves VALUES (3, 'green');
INSERT INTO Reserves VALUES (4, 'blue');

-- UNION: red or green
SELECT name FROM Sailors WHERE sailor_id IN (
    SELECT sailor_id FROM Reserves WHERE boat_color = 'red'
)
UNION
SELECT name FROM Sailors WHERE sailor_id IN (
    SELECT sailor_id FROM Reserves WHERE boat_color = 'green'
);

-- UNION ALL: red or green (with duplicates)
SELECT name FROM Sailors WHERE sailor_id IN (SELECT sailor_id FROM Reserves WHERE boat_color = 'red')
UNION ALL
SELECT name FROM Sailors WHERE sailor_id IN (SELECT sailor_id FROM Reserves WHERE boat_color = 'green');

-- INTERSECT: both red and green (MySQL does not support INTERSECT; using subqueries)
SELECT name FROM Sailors WHERE sailor_id IN (
    SELECT sailor_id FROM Reserves WHERE boat_color = 'red'
)
AND sailor_id IN (
    SELECT sailor_id FROM Reserves WHERE boat_color = 'green'
);

-- MINUS: red not green (MySQL does not support MINUS; using subqueries)
SELECT name FROM Sailors WHERE sailor_id IN (
    SELECT sailor_id FROM Reserves WHERE boat_color = 'red'
) AND sailor_id NOT IN (
    SELECT sailor_id FROM Reserves WHERE boat_color = 'green'
);
