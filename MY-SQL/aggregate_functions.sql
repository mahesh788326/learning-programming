-- STEP 1: Create Company Table
CREATE TABLE Company (
    company_name VARCHAR(50),
    amount INT
);

-- STEP 2: Insert sample data
INSERT INTO Company VALUES ('TCS', 12000);
INSERT INTO Company VALUES ('Infosys', 14500);
INSERT INTO Company VALUES ('Wipro', 9700);
INSERT INTO Company VALUES ('TCS', 8000);
INSERT INTO Company VALUES ('Infosys', 13500);

-- STEP 3: Aggregate queries
SELECT AVG(amount) FROM Company;
SELECT SUM(amount) FROM Company;
SELECT MAX(amount) FROM Company;
SELECT MIN(amount) FROM Company;
SELECT COUNT(*) FROM Company;
SELECT company_name, SUM(amount) FROM Company GROUP BY company_name;
SELECT company_name, MIN(amount) FROM Company GROUP BY company_name;
SELECT company_name, MAX(amount) FROM Company GROUP BY company_name;
SELECT company_name, COUNT(*) FROM Company GROUP BY company_name;
SELECT company_name, COUNT(*) FROM Company GROUP BY company_name HAVING COUNT(*) > 1;
SELECT company_name, SUM(amount) FROM Company GROUP BY company_name HAVING SUM(amount) > 20000;
