import os
from advent.day1 import solve_day1
from advent import read


def main():

    data = read(day=1, is_test=True)
    answer = solve_day1(input=data)
    print(answer)

    data = read(day=1)
    answer = solve_day1(input=data)
    print(answer)


if __name__ == "__main__":
    
    main()