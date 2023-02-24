myDict = {2: 'b', 3: 'c', 1: 'a', 4: 'd'}

keyList = list(myDict.keys())
keyList.sort()
sortedDict = {i : myDict[i] for i in keyList}

print(sortedDict)