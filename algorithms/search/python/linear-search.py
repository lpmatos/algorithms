from typing import List, NoReturn

def header() -> NoReturn:
    print('''
          Linear Search in Python
          ''')

def create_list(tam: int = 10) -> List:
    return [x for x in range(1, tam + 1)]

def linear_search(array: List, element: int) -> int:
    for index, value in enumerate(array):
        if value == element: return index
    return -1

if __name__ == "__main__":
    header()

    element = int(input("👽 Tell me the number that you want find: "))
    print(f"👽 You want find the number: {element}")

    numbers = create_list(50)

    print(f"👽 Elements list: {numbers}")

    result = linear_search(numbers, element)

    if result == -1: print("👽 Element is not present in array")
    else: print("👽 Element is present at index", result)
