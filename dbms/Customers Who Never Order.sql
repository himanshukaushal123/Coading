# Write your MySQL query statement below
select C.name as Customers
from Customers as C left JOIN Orders AS O
ON C.id=O.customerId
WHERE O.customerID IS NULL;
