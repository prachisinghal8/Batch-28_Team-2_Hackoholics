# Batch-28_Team-2_Hackoholics
Mini hackathon- Student Attendance analyser

### Team Members
- Member 1- Prachi 
- Member 2- Vansh
- Member 3- Devanand

### About the Project
The Student Attendance Analyzer is a C-based project designed to record and analyze student attendance. It helps calculate attendance percentages and identify students with low attendance.

### Features
- Input student details
- Record attendance
- Calculate attendance percentage
- Identify students with low attendance
- Display attendance reports

### Technologies Used
- C Programming
- Loops
- Conditional Statements
- Arrays

### How to Run
Compile the program using a C compiler and run it.


## Pseudo code.

START

INPUT number of students

FOR each student from 1 to number of students

    INPUT roll number
    INPUT student name
    INPUT total classes
    INPUT days present

    IF total classes = 0 THEN
        DISPLAY "Invalid total classes"

    ELSE IF days present > total classes THEN
        DISPLAY "Invalid attendance input"

    ELSE
        CALCULATE absent days
            absent days = total classes - days present

        CALCULATE attendance percentage
            attendance percentage = (days present / total classes) × 100

        DISPLAY student details
        DISPLAY absent days
        DISPLAY attendance percentage

        IF attendance percentage >= 75 THEN
            DISPLAY "Eligible for examination"
        ELSE
            DISPLAY "Not eligible for examination"
        END IF

    END IF

END FOR

END
