def common(list1, list2):
    result = [] 
    max_sum = len(list1) + len(list2) - 2
    for i in range(max_sum + 1):
        for j in range(i + 1):
            if (j < len(list1) and
               (i - j) < len(list2) and
                list1[j] == list2[i - j]):
                result.append(list1[j])
        if (len(result) > 0):
            break
    for i in range(len(result)):
        print(result[i], end = " ")
list1 = []
list1.append("Apple")
list1.append("Orange")
list1.append("Pear")
list1.append("Tomato")
list2 = []
list2.append("Potato")
list2.append("Cucumber")
list2.append("Tomato")

common(list1, list2)




