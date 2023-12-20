def can_make_equal(t, test_cases):
    results = []
    for i in range(t):
        n = test_cases[i][0]
        a = test_cases[i][1]
        b = test_cases[i][2]

        # Check if it's possible to make a equal to b
        possible = True
        for j in range(n):
            if a[j] > b[j]:
                possible = False
                break
        if not possible:
            results.append("NO")
            continue

        # Find the maximum value in a
        max_a = max(a)

        # Check if all elements in b are either equal to or less than max_a
        for j in range(n):
            if b[j] > max_a:
                possible = False
                break

        if possible:
            results.append("YES")
        else:
            results.append("NO")

    return results

# Input processing
t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    test_cases.append((n, a, b))

# Get results
results = can_make_equal(t, test_cases)

# Output results
for result in results:
    print(result)
