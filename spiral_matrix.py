def spiralOrder(matrix):
    result = []
    while matrix:
        result += matrix.pop(0)
        matrix = list(zip(*matrix))[::-1]  # Rotate matrix counterclockwise
    return result
