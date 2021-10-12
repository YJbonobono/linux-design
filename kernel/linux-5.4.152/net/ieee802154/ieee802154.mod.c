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
	{ 0xe3b66737, "class_find_device" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8dc7b82c, "get_net_ns_by_fd" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xef932dcc, "genl_register_family" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x68908fb2, "genl_unregister_family" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x26a86022, "dev_change_net_namespace" },
	{ 0x7028574e, "dev_get_by_name" },
	{ 0xcf01e53d, "device_match_name" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x587f784a, "get_net_ns_by_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x596c50d1, "__put_net" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x3f137654, "trace_define_field" },
	{ 0x5d258514, "dev_set_mac_address" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x186ea1fd, "class_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0x581cf443, "skb_push" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0x335e4ce6, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9b553753, "skb_pull" },
	{ 0x78381292, "init_net" },
	{ 0x94567929, "__class_register" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x479706e2, "class_for_each_device" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xbbdc19ba, "netlink_broadcast" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbd3c00ab, "genl_family_attrbuf" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0x2fbee34a, "device_rename" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3750a460, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x804e1930, "genlmsg_put" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x69683fe, "trace_output_call" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1B9040D78F9C75B00D38A3D");
