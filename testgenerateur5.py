import itertools

numbers = [1, 2, 3, 4, 5]
permutations = list(itertools.permutations(numbers))

with open('test5.txt', 'w') as f:
    for p in permutations:
        f.write('ARG="' + ' '.join(map(str, p)) + '"; ' + './push_swap $ARG ' + '\n')
