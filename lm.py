def longestMountain(arr):
    n = len(arr)
    longest = 0
    i = 1

    while i < n - 1:
        # Check if arr[i] is a peak
        if arr[i - 1] < arr[i] > arr[i + 1]:
            left = i - 1
            right = i + 1
            while left > 0 and arr[left] > arr[left - 1]:
                left -= 1
            while right < n - 1 and arr[right] > arr[right + 1]:
                right += 1

            longest = max(longest, right - left + 1)
            
            i = right
        else:
            i += 1

    return longest
