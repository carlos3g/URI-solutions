SELECT candidate.name, round(((score.math*2)+(score.specific*3)+(project_plan*5))/10, 2) as avg FROM candidate
JOIN score ON candidate.id = score.candidate_id
ORDER BY avg DESC;
