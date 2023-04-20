pos = 0
day = 0

while pos < 10:
    pos = pos + 2
    if pos < 10:
        pos = pos - 1
    day = day + 1

print("day:" + str(day) + "\npos:" + str(pos))

#day: 9
#pos: 10