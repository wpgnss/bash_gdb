# compile

```

daniel@daniel:~/workspace/examples/tips/device_driver/hello$ make
make -C /lib/modules/5.15.0-35-generic/build M=/home/daniel/workspace/examples/tips/device_driver/hello modules
make[1]: 디렉터리 '/usr/src/linux-headers-5.15.0-35-generic' 들어감
  CC [M]  /home/daniel/workspace/examples/tips/device_driver/hello/hello.o
  MODPOST /home/daniel/workspace/examples/tips/device_driver/hello/Module.symvers
  CC [M]  /home/daniel/workspace/examples/tips/device_driver/hello/hello.mod.o
  LD [M]  /home/daniel/workspace/examples/tips/device_driver/hello/hello.ko
  BTF [M] /home/daniel/workspace/examples/tips/device_driver/hello/hello.ko
Skipping BTF generation for /home/daniel/workspace/examples/tips/device_driver/hello/hello.ko due to unavailability of vmlinux
make[1]: 디렉터리 '/usr/src/linux-headers-5.15.0-35-generic' 나감
```

# insmod

```
daniel@daniel:~/workspace/examples/tips/device_driver/hello$ sudo insmod hello.ko

```



# dmesg

```
daniel@daniel:~/workspace/examples/tips/device_driver/hello$ sudo dmesg
....
[ 1236.100242] Hello
[ 1245.187401] Bye
[ 1249.846980] Hello

```

# insmod

```
daniel@daniel:~/workspace/examples/tips/device_driver/hello$ sudo rmmod hello.ko

```
