
#https://leetcode.com/problems/combine-two-tables/
# Write your MySQL query statement below
select firstName,lastName,city,state from Person left join Address on Person.personId=Address.personId;
