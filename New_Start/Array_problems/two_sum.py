
def pairSum(arr, Sum):
    result = []
    a = set()
    
    for num in arr:
        x = Sum - num
        if x in arr:
            result.append(num)
            result.append(x)
            return result

        a.add(num)
    return None



if __name__ == '__main__':
    arr = [10, 5, 2, 3, -6, 9, 11]
    Sum = 4
    a = pairSum(arr, Sum)
    if len(a) == 0:
        print("no pair")
    else:
        print(f"({a[0]}, {a[1]})")



        
            