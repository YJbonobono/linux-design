cmd_net/vmw_vsock/vsock.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/vmw_vsock/vsock.ko net/vmw_vsock/vsock.o net/vmw_vsock/vsock.mod.o;  true
