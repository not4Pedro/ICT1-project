import os 

cmd = "gcc -ggdb -fno-stack-protector -z execstack app.c -o app &&  ./app 4444444444444444444444444444444444444"
os.system(cmd)