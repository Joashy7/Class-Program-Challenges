A_set = frozenset([100, 200, 300])
B_set = frozenset([300, 400, 500])
C_set = frozenset([500, 600, 700])

print(A_set.intersection(B_set))
print(A_set.difference(B_set))
print(A_set.isdisjoint(C_set))
print(B_set.union(A_set))
print(C_set.symmetric_difference(B_set))