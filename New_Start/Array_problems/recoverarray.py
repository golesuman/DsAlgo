from cgi import print_arguments


def recover_array(input, output, size):
    mid = size//2
    i = 0
    if size % 2 != 0:
        output[mid] = input[i]
        left = mid - 1
        right = mid + 1
        i += 1
    else:
        left = mid - 1
        right = mid
    
    while(i<size):
        output[left]  = input[i]
        left -= 1
        i += 1
        output[right] = input[i]
        right += 1
        i += 1

if __name__ == '__main__':
    inputarr = [3, 2, 4, 1, 5]
    outputarr = [0 for _ in range(5)]
    # outputarr = []
    size = len(inputarr)
    recover_array(inputarr, outputarr, size)
    print("The output array is:\n")
    for num in outputarr:
        print(num)

