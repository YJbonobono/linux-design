cmd_drivers/isdn/mISDN/mISDN_core.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/isdn/mISDN/mISDN_core.o drivers/isdn/mISDN/core.o drivers/isdn/mISDN/fsm.o drivers/isdn/mISDN/socket.o drivers/isdn/mISDN/clock.o drivers/isdn/mISDN/hwchannel.o drivers/isdn/mISDN/stack.o drivers/isdn/mISDN/layer1.o drivers/isdn/mISDN/layer2.o drivers/isdn/mISDN/tei.o drivers/isdn/mISDN/timerdev.o
