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
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb8cc585b, "kernel_sendmsg" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5fb22c8e, "send_sig" },
	{ 0xc6ba1c5f, "queue_ch_frame" },
	{ 0x64aff8b2, "sock_release" },
	{ 0x202b6156, "sock_recvmsg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x78f098d5, "recv_Dchannel" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6006847, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xf239fce, "iov_iter_kvec" },
	{ 0xeebd20ca, "mISDN_unregister_device" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xe64b92b6, "mISDN_initbchannel" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x4c2839db, "mISDN_freebchannel" },
	{ 0xa404fad3, "mISDN_register_device" },
	{ 0x9e3d3f75, "sock_create" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xc2613dab, "mISDN_initdchannel" },
	{ 0xb832485a, "consume_skb" },
	{ 0xac554140, "mISDN_freedchannel" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x64a5ffa3, "try_module_get" },
};

MODULE_INFO(depends, "mISDN_core");


MODULE_INFO(srcversion, "75D4F931E85774B4BD6EC4D");
