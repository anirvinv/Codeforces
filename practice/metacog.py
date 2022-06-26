from math import floor
from time import time


def main():
    t = time()
    with open("meta.txt", "w") as f:
        while(True):
            text = input()
            if(text == 'end'):
                break

            if len(text) > 0:
                nt = time()
                duration = nt - t
                h = floor(duration//3600)
                m = floor((duration - 3600 * h)//60)
                s = round(duration - 3600*h - 60*m, 1)
                text = f"{h}:{m}:{s} -> " + text
                print(text)
                f.write(text+"\n")


if __name__ == "__main__":
    ans = input("Overwrite the previous file?(y/n)? ")
    if(ans.lower() == "y"):
        main()
    else:
        print("Process ended")
