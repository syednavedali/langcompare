import time

N = 1000000000
sum = 0
start_time = time.time()
for i in range(1, N + 1):
    sum += i
end_time = time.time()
print("Sum:", sum)
print("Time taken:", end_time - start_time, "s")