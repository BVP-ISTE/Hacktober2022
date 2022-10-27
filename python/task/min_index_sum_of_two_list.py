#Input two arrays of strings list1 and list2 from the user, find the common strings with the least index sum.
#A common string is a string that appeared in both list1 and list2.
#A common string with the least index sum is a common string such that if it appeared at list1[i] and list2[j] 
#then i + j should be the minimum value among all the other common strings.

#Return all the common strings with the least index sum. Return the answer in any order.

def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
		dic1 = {restaurant:i for i, restaurant in enumerate(list1)}
		dic2 = {restaurant:dic1[restaurant]+i for i, restaurant in enumerate(list2) if restaurant in dic1}
		
		MIN = float('inf')
		res = []
		
		for key, val in dic2.items():
			if val < MIN:
				res = [key]
				MIN = val
			elif val == MIN:
				res.append(key)
				
		return res
