import time

# Python: Software-level Arbitrary Precision
def python_large_math():

    n1 = int("123456789")
    n2 = int("987654321")
    result = 0
    
    # Perform arithmetic
    start = time.perf_counter()
    for _ in range(10000000):
        result = n1 + n2
    print(f"Python Software-level (Int): {time.perf_counter() - start:.4f}s")

    print(f"Input N1:  {n1}")
    print(f"Input N2:  {n2}")
    print(f"Result: {result}")

python_large_math()