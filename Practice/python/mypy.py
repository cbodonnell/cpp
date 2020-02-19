#My python script called mypy.py
import sys

if len(sys.argv) != 2:
  sys.exit("Not enough args")
ca_one = str(sys.argv[1])
ca_two = str(sys.argv[2])

print("My command line args are " + ca_one + " and " + ca_two)