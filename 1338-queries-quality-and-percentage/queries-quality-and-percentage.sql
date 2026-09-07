# Write your MySQL query statement below
select query_name,Round( avg (rating/position),2)as quality, Round(sum(CASE WHEN rating < 3 THEN 1 ELSE 0 END) * 100.0 / COUNT(*), 2)as poor_query_percentage
from Queries
group by query_name;