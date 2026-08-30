# Write your MySQL query statement below
select W1.id from Weather W1 
inner join Weather W2 on DATEDIFF(W1.recordDate, W2.recordDate)=1 
where W1.temperature > W2.temperature;