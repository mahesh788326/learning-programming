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

-- STEP 2: Insert additional data for diversity
INSERT INTO Reserves VALUES (2, 103); -- Assume boat 103 is a test case
INSERT INTO Reserves VALUES (4, 103);

-- IN operator
SELECT name FROM Sailors WHERE sailor_id IN (
    SELECT sailor_id FROM Reserves WHERE boat_color = 'red'
);

-- NOT IN operator (who did not book red)
SELECT name FROM Sailors WHERE sailor_id NOT IN (
    SELECT sailor_id FROM Reserves WHERE boat_color = 'red'
);

-- ALL operator (highest sailor_id)
SELECT sailor_id FROM Sailors WHERE sailor_id = ALL (
    SELECT MAX(sailor_id) FROM Sailors
);

-- ANY operator (sailor_id greater than some sailor)
SELECT sailor_id FROM Sailors WHERE sailor_id > ANY (
    SELECT sailor_id FROM Sailors WHERE sailor_id < 4
);

-- EXISTS (who reserved red)
SELECT name FROM Sailors s WHERE EXISTS (
    SELECT 1 FROM Reserves r WHERE r.boat_color = 'red' AND r.sailor_id = s.sailor_id
);

-- NOT EXISTS (who did not reserve red)
SELECT name FROM Sailors s WHERE NOT EXISTS (
    SELECT 1 FROM Reserves r WHERE r.boat_color = 'red' AND r.sailor_id = s.sailor_id
);
