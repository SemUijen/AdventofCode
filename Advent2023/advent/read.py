import os

from typing import Optional
from .ProblemData import ProblemData

def read(day: int, 
         is_test: bool,
         path: Optional[str]=None) -> ProblemData:
    
    if not path:
        path = './Advent2023/data/'

    prefix= "_test" if is_test else ""

    file = f"day{day}{prefix}.txt"
    file_path= os.path.join(path, file)
    with open(file_path, "r") as f:
        data = f.read()

    return data
    