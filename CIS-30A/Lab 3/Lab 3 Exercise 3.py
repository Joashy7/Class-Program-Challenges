import collections
months_Dq = collections.deque([ 'Mar', 'Apr', 'May'])
print(months_Dq)

months_Dq.append('June')
months_Dq.append('July')
months_Dq.append('Aug')
print(months_Dq)

months_Dq.appendleft('Dec')
months_Dq.appendleft('Jan')
months_Dq.appendleft('Feb')
print(months_Dq)

months_Dq.pop()
print(months_Dq)
months_Dq.popleft()
print(months_Dq)

months_Dq.remove('June')
print(months_Dq)