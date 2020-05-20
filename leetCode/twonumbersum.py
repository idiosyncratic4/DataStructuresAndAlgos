def twosumno(arr,target):
  arr.sort()
  left=0
  right=len(arr)-1
  while left<right:
    current=arr[left]+arr[right]
    if target==current:
      return [arr[left],arr[right]]
    elif target>current:
      left=left+1
    elif target<current:
      right=right-1
  return []
