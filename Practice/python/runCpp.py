import subprocess

def RepresentsInt(s):
    try: 
        int(s)
        return True
    except ValueError:
        return False

def main():
    user_input = input('Enter an integer: ')
    if RepresentsInt(user_input):
        num = int(user_input)
        args = ("./practice/python/double.exe %i" % num).split()
        popen = subprocess.Popen(args, stdout=subprocess.PIPE)
        popen.wait()
        output = popen.stdout.read()
        decoded_output = output.decode('utf-8')
        num_double = int(decoded_output)
        print('%i doubled is %i!' % (num, num_double))
    else:
        print('Thats not an integer!')

if __name__ == "__main__":
    main()
