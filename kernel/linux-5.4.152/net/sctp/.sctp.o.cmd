cmd_net/sctp/sctp.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o net/sctp/sctp.o net/sctp/sm_statetable.o net/sctp/sm_statefuns.o net/sctp/sm_sideeffect.o net/sctp/protocol.o net/sctp/endpointola.o net/sctp/associola.o net/sctp/transport.o net/sctp/chunk.o net/sctp/sm_make_chunk.o net/sctp/ulpevent.o net/sctp/inqueue.o net/sctp/outqueue.o net/sctp/ulpqueue.o net/sctp/tsnmap.o net/sctp/bind_addr.o net/sctp/socket.o net/sctp/primitive.o net/sctp/output.o net/sctp/input.o net/sctp/debug.o net/sctp/stream.o net/sctp/auth.o net/sctp/offload.o net/sctp/stream_sched.o net/sctp/stream_sched_prio.o net/sctp/stream_sched_rr.o net/sctp/stream_interleave.o net/sctp/proc.o net/sctp/sysctl.o net/sctp/ipv6.o
