cmd_drivers/staging/most/video/most_video.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/staging/most/video/most_video.ko drivers/staging/most/video/most_video.o drivers/staging/most/video/most_video.mod.o;  true
