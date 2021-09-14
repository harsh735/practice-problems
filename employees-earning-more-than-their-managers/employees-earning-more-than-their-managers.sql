# Write your MySQL query statement below


SELECT A.NAME AS Employee 
FROM Employee A, Employee B
    WHERE A.Salary > B.salary 
    AND B.Id = A.ManagerId