-- Problem: https://www.hackerrank.com/challenges/weather-observation-station-9/problem

SELECT DISTINCT(CITY)
FROM STATION
WHERE LOWER(SUBSTR(CITY, 1, 1)) NOT IN ('a', 'e', 'i', 'o', 'u');