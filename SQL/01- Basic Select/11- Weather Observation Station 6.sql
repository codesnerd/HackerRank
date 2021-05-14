-- Problem: https://www.hackerrank.com/challenges/weather-observation-station-6/problem

SELECT DISTINCT(CITY)
FROM STATION
WHERE LOWER(SUBSTR(CITY, 1, 1)) IN ('a', 'e', 'i', 'o', 'u');

-- OR:

SELECT DISTINCT(CITY)
FROM STATION
WHERE LOWER(CITY) LIKE 'a%'
OR LOWER(CITY) LIKE 'e%'
OR LOWER(CITY) LIKE 'i%'
OR LOWER(CITY) LIKE 'o%'
OR LOWER(CITY) LIKE 'u%';