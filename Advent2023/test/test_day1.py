import pytest
from advent.day1 import solve_day1
from advent.read import read

def test_day1_part1():

    test_data, data = read(day=1, is_test=True), read(day=1)

    ## Part1
    assert solve_day1(test_data) == 142
    assert solve_day1(data) == 54644

