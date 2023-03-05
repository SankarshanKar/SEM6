def solve(A):
    N = len(A)
    dp1 = [0] * N
    dp2 = [0] * N
    dp3 = [0] * N

    # Compute dp1
    cur_sum = 0
    for i in range(N):
        cur_sum = max(0, cur_sum) + A[i]
        dp1[i] = max(dp1[i-1], cur_sum)

    # Compute dp2
    cur_sum = 0
    for i in range(N-1, -1, -1):
        cur_sum = max(0, cur_sum) + A[i]
        dp2[i] = max(dp2[i+1], cur_sum)

    # Compute dp3
    cur_sum = 0
    for i in range(N):
        cur_sum = max(0, cur_sum) + A[i]
        dp3[i] = max(dp3[i-1], cur_sum)

    # Find the maximum sum of three subarrays
    ans = 0
    for i in range(1, N-1):
        for j in range(i, N-1):
            for k in range(j+1, N):
                cur_sum = dp1[i-1] + dp3[j-1] + dp2[k]
                ans = max(ans, cur_sum)

    return ans % (10**9 + 7)
