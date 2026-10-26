# Write your MySQL query statement below
select score , Dense_rank() over (order By score desc) as 'rank' from scores order by score desc;