import pytest
from advent.day2 import solve_day2, solve_day2_part2
from advent.read import read

def test_day1_part1():


    test_data, data = read(day=2, part=1, is_test=True), read(day=2, part=1)

    ## Part1
    assert solve_day2(test_data) == 8
    assert solve_day2(data) == 2879

