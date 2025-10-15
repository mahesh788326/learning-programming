-- STEP 1: Create Students Table
CREATE TABLE Students (
    StudentID INT PRIMARY KEY,
    StudentName VARCHAR(100),
    Major VARCHAR(100)
);

-- STEP 2: Create Courses Table
CREATE TABLE Courses (
    CourseID INT PRIMARY KEY,
    CourseName VARCHAR(100),
    Credits INT
);

-- STEP 3: Create Enrollments Table
CREATE TABLE Enrollments (
    StudentID INT,
    CourseID INT,
    EnrollmentDate DATE,
    PRIMARY KEY (StudentID, CourseID),
    FOREIGN KEY (StudentID) REFERENCES Students(StudentID),
    FOREIGN KEY (CourseID) REFERENCES Courses(CourseID)
);

-- STEP 4: Create Instructors Table
CREATE TABLE Instructors (
    InstructorID INT PRIMARY KEY,
    InstructorName VARCHAR(100),
    Phone VARCHAR(20)
);

-- STEP 5: Create Course_Instructors Table
CREATE TABLE Course_Instructors (
    CourseID INT,
    InstructorID INT,
    PRIMARY KEY(CourseID, InstructorID),
    FOREIGN KEY (CourseID) REFERENCES Courses(CourseID),
    FOREIGN KEY (InstructorID) REFERENCES Instructors(InstructorID)
);

-- STEP 6: Insert sample data
INSERT INTO Students VALUES (1, 'Rahul', 'CSE');
INSERT INTO Students VALUES (2, 'Priya', 'ECE');
INSERT INTO Courses VALUES (101, 'DBMS', 3);
INSERT INTO Courses VALUES (102, 'Networks', 4);
INSERT INTO Instructors VALUES (201, 'Dr. Menon', '9876543210');
INSERT INTO Instructors VALUES (202, 'Ms. Sinha', '9876543211');
INSERT INTO Course_Instructors VALUES (101, 201);
INSERT INTO Course_Instructors VALUES (102, 202);
INSERT INTO Enrollments VALUES (1, 101, '2025-10-01');
INSERT INTO Enrollments VALUES (2, 102, '2025-10-02');
