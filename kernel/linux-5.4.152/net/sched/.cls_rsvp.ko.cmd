cmd_net/sched/cls_rsvp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/sched/cls_rsvp.ko net/sched/cls_rsvp.o net/sched/cls_rsvp.mod.o;  true
