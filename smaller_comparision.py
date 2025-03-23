def smallerNumbersThanCurrent(nums):
    count = [0] * 101
    for num in nums:
        count[num] += 1

    prefix_sum = [sum(count[:i]) for i in range(101)]
    return [prefix_sum[num] for num in nums]
