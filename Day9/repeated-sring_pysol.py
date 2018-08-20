#!/bin/python3

import math
import os
import random
import re
import sys


s, n = input().strip(), int(input().strip())
print(s.count("a") * (n // len(s)) + s[0:n % len(s)].count("a"))
