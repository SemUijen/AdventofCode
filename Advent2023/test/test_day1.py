import pytest
from advent.day1 import solve_day1, solve_day1_part2
from advent.read import read

def test_day1_part1():


    test_data, data = read(day=1, part=1, is_test=True), read(day=1, part=1)

    ## Part1
    assert solve_day1(test_data) == 142
    assert solve_day1(data) == 54644

def test_day1_part2():
    # full dataset the same for part 1 and 2 only test is different
    test_data, data = read(day=1, part=2, is_test=True), read(day=1, part=1)

    ## Part2
    assert solve_day1_part2(test_data) == 281
    assert solve_day1_part2(data) == 53348
