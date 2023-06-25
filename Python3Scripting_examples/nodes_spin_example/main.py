import unigine
import time
print('Nodes')

i = 0
_max = 30
angels_diff = 0.2
angels_cur = 0
sleep_s = 0.026
while i < _max:
    i += 1
    for node in LIST_NODES:
        node.rotate(angels_cur, angels_cur, angels_cur)
    angels_cur += angels_diff
    time.sleep(sleep_s)
i = 0
while i < _max:
    i += 1
    for node in LIST_NODES:
        node.rotate_by_angels(-angels_cur, -angels_cur, -angels_cur)
    angels_cur -= angels_diff
    time.sleep(sleep_s)
