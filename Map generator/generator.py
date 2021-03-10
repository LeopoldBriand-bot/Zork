from random import shuffle, randrange


def make_maze(w=16, h=8):
    vis = [[0] * w + [1] for _ in range(h)] + [[1] * (w + 1)]
    ver = [["|  "] * w + ['|'] for _ in range(h)] + [[]]
    dataVer = [["10"] * w + ['1'] for _ in range(h)] + [[]]
    hor = [["+--"] * w + ['+'] for _ in range(h + 1)]
    dataHor = [["11"] * w + ['1'] for _ in range(h + 1)]

    def walk(x, y):
        vis[y][x] = 1

        d = [(x - 1, y), (x, y + 1), (x + 1, y), (x, y - 1)]
        shuffle(d)
        for (xx, yy) in d:
            if vis[yy][xx]:
                continue
            if xx == x:
                hor[max(y, yy)][x] = "+  "
                dataHor[max(y, yy)][x] = "10"
            if yy == y:
                ver[y][max(x, xx)] = "   "
                dataVer[y][max(x, xx)] = "00"
            walk(xx, yy)

    walk(randrange(w), randrange(h))

    s = ""
    data = ""
    for (a, b) in zip(hor, ver):
        s += ''.join(a + ['\n'] + b + ['\n'])
    for (a, b) in zip(dataHor, dataVer):
        data += ''.join(a + ['\n'] + b + ['\n'])

    print(s)
    return data


if __name__ == '__main__':
    for i in range(0, 10):
        map = make_maze()
        with open("./Ressources/maps/map" + str(i) + ".txt", "w") as fichier:
            fichier.write(map)
