import time


def time_loop(loops, text, times):
    for i in range(loops):
        print(text)
        time.sleep(times)


if __name__ == '__main__':
    time_loop(100, "hello", 1)
