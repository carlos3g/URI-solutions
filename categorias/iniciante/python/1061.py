dia1 = int(input().split()[1])
h1, m1, s1 = map(int, input().split(' : '))
dia2 = int(input().split()[1])
h2, m2, s2 = map(int, input().split(' : '))

segs = (s2+(86400*dia2)+(3600*h2)+(60*m2))-(s1+(86400*dia1)+(3600*h1)+(60*m1))

print(segs//86400, 'dia(s)')
print(segs%86400//3600, 'hora(s)')
print(segs%86400%3600//60, 'minuto(s)')
print(segs%86400%3600%60, 'segundo(s)')
