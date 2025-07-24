# Write your MySQL query statement below
SELECT name AS employee 
FROM Employee E1 
WHERE salary > (SELECT salary FROM Employee WHERE id = E1.managerId);