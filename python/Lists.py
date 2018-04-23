if __name__ == '__main__':
    N = int(input())
    result = []
    for n in range(N):
        x = input().split(" ")
        command = x[0]
        if command == 'append':
            result.append(int(x[1]))
        if command == 'print':
            print(result)
        if command == 'insert':
            result.insert(int(x[1]), int(x[2]))
        if command == 'reverse':
            result = result[::-1]
        if command == 'pop':
            result.pop()
        if command == 'sort':
            result = sorted(result)
        if command == 'remove':
            result.remove(int(x[1]))
        #   print(result)
