import os 

# Command to execute

cmd = "gcc -ggdb -m32 -fno-stack-protector -z execstack app.c -o app && python -c \"print('a'*30 + 'b'*4)\" | ./app"
os.system(cmd)

