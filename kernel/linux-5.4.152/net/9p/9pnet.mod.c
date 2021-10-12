#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0x257d4615, "kernel_write" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x754d539c, "strlen" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x64aff8b2, "sock_release" },
	{ 0xb177d101, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x44e9a829, "match_token" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x6070aff7, "init_user_ns" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x629a53c5, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc78529be, "kernel_read" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x19c1b36d, "from_kuid" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf239fce, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xeba488c2, "from_kgid" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x954f099c, "idr_preload" },
	{ 0x7b791c26, "kmem_cache_create_usercopy" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x4e3567f7, "match_int" },
	{ 0xa164179, "fput" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdfc0113e, "sock_alloc_file" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0xcd187846, "kernel_bind" },
	{ 0x91896b1c, "fget" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x42878cfb, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x20978fb9, "idr_find" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x71dc307b, "__put_page" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe978992c, "__sock_create" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "51F602CA4AAC777C1FFB416");
