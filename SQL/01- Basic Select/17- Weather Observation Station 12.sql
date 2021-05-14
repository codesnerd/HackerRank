-- Problem: https://www.hackerrank.com/challenges/weather-observation-station-12/problem

SELECT DISTINCT(CITY)
FROM STATION
WHERE LOWER(SUBSTR(CITY, 1, 1)) NOT IN ('a', 'e', 'i', 'o', 'u')
AND LOWER(SUBSTR(CITY, -1, 1)) NOT IN ('a', 'e', 'i', 'o', 'u');

-- OR:

SELECT DISTINCT(CITY)
FROM STATION
WHERE
(
    LOWER(CITY) NOT LIKE 'a%'
    AND LOWER(CITY) NOT LIKE 'e%'
    AND LOWER(CITY) NOT LIKE 'i%'
    AND LOWER(CITY) NOT LIKE 'o%'
    AND LOWER(CITY) NOT LIKE 'u%'
)
AND
(
    LOWER(CITY) NOT LIKE '%a'
    AND LOWER(CITY) NOT LIKE '%e'
    AND LOWER(CITY) NOT LIKE '%i'
    AND LOWER(CITY) NOT LIKE '%o'
    AND LOWER(CITY) NOT LIKE '%u'
);