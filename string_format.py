import os 

cmd = "gcc -ggdb -m32 -fno-stack-protector -z execstack app.c -o app && ./app '%x %x' s"
os.system(cmd)
