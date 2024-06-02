import os

from typing import Optional
from advent._advent import ProblemData

def read(day: int, 
         is_test: Optional[bool]=False,
         path: Optional[str]=None) -> ProblemData:
    
    if not path:
        path = './data/'

    prefix= "_test" if is_test else ""

    file = f"day{day}{prefix}.txt"
    file_path= os.path.join(path, file)

    with open(file_path, "r") as f:
        # reads each line without /n
        data = f.read().splitlines()

    
    return ProblemData(data)
    