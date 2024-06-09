import os
from advent.day2 import solve_day2, solve_day2_part2
from advent import read


def main():

    data = read(day=2, part=1, is_test=True)
    answer = solve_day2_part2(input=data)
    print(answer)

    data = read(day=2, part=1)
    answer = solve_day2_part2(input=data)
    print(answer)


if __name__ == "__main__":
    
    main()