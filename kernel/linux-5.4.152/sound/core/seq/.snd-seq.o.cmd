cmd_sound/core/seq/snd-seq.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o sound/core/seq/snd-seq.o sound/core/seq/seq.o sound/core/seq/seq_lock.o sound/core/seq/seq_clientmgr.o sound/core/seq/seq_memory.o sound/core/seq/seq_queue.o sound/core/seq/seq_fifo.o sound/core/seq/seq_prioq.o sound/core/seq/seq_timer.o sound/core/seq/seq_system.o sound/core/seq/seq_ports.o sound/core/seq/seq_info.o
