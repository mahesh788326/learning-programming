-- STEP 1: Create tables with shared column 'b'
CREATE TABLE tb1 (
    a INT PRIMARY KEY,
    b INT
);
CREATE TABLE tb2 (
    b INT PRIMARY KEY,
    c VARCHAR(50)
);

-- STEP 2: Insert sample data
INSERT INTO tb1 VALUES (1, 100);
INSERT INTO tb1 VALUES (2, 200);
INSERT INTO tb2 VALUES (100, 'Alpha');
INSERT INTO tb2 VALUES (200, 'Beta');
INSERT INTO tb2 VALUES (300, 'Gamma');

-- STEP 3: Join queries
-- INNER JOIN
SELECT * FROM tb1 INNER JOIN tb2 ON tb1.b = tb2.b;
-- LEFT OUTER JOIN
SELECT * FROM tb1 LEFT JOIN tb2 ON tb1.b = tb2.b;
-- RIGHT OUTER JOIN
SELECT * FROM tb1 RIGHT JOIN tb2 ON tb1.b = tb2.b;
-- NATURAL JOIN (works on columns with same name)
SELECT * FROM tb1 NATURAL JOIN tb2;
-- CROSS JOIN
SELECT * FROM tb1 CROSS JOIN tb2;
-- SELF JOIN
SELECT t1.a, t1.b, t2.a, t2.b FROM tb1 t1, tb1 t2 WHERE t1.b = t2.a;
-- EQUI JOIN
SELECT * FROM tb1, tb2 WHERE tb1.b = tb2.b;
