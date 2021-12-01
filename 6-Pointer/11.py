import subprocess
from datetime import datetime
from decimal import Decimal, getcontext
from itertools import product
from random import randint

getcontext().prec = 256


def test(order):
    num1 = "{}.{}".format(randint(0, 999), randint(0, 2 ** order))
    num2 = "{}.{}".format(randint(0, 999), randint(0, 2 ** order))

    challenge = "\n".join([num1, num2])

    expected = str(Decimal(num1) + Decimal(num2))
    expected = expected.rstrip("0")
    if "." not in expected:
        expected += "."
    if expected.endswith("."):
        expected += "0"

    p = subprocess.run(
        "11", input=challenge + "\n", capture_output=True, encoding="ascii"
    )

    if p.stdout.strip() != expected:
        print(num1, num2, expected, p.stdout.strip())


for order in [0, 1, 2, 4, 8, 16, 32, 64, 100, 127]:
    print(">>>>> order = ", order)
    for _ in range(min((2 ** order) * 2, 16)):
        test(order)
