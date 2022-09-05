# Write your MySQL query statement below
select e1.name as Employee from Employee as e1 INNER JOIN Employee as e2 ON e2.id = e1.managerId where e1.salary > e2.salary;
