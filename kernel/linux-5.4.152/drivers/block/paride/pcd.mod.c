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
	{ 0x138133c8, "param_ops_charp" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7b761798, "unregister_cdrom" },
	{ 0xcda23bf1, "del_gendisk" },
	{ 0x419a0a2a, "device_add_disk" },
	{ 0x6aa51d43, "register_cdrom" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xb21ba07d, "pi_unregister_driver" },
	{ 0x954b8adc, "blk_mq_free_tag_set" },
	{ 0x77bb09b3, "blk_cleanup_queue" },
	{ 0x32a71a50, "pi_release" },
	{ 0xacdcb0b3, "pi_init" },
	{ 0x4267110a, "pi_register_driver" },
	{ 0xe914e41e, "strcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x46ba47d9, "blk_queue_bounce_limit" },
	{ 0x861cd726, "put_disk" },
	{ 0x6e7100e5, "blk_mq_init_sq_queue" },
	{ 0x63587d8d, "__alloc_disk_node" },
	{ 0xf4741683, "pi_do_claimed" },
	{ 0x9c0a44f3, "__blk_mq_end_request" },
	{ 0xe714e8a1, "blk_update_request" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x79054c66, "blk_mq_start_request" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d755ad5, "pi_read_block" },
	{ 0x3ec64586, "pi_disconnect" },
	{ 0x2feb0ecd, "pi_write_block" },
	{ 0xad970554, "pi_write_regr" },
	{ 0x8412b3d0, "pi_connect" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x27d9835a, "pi_read_regr" },
	{ 0x9baef14a, "cdrom_open" },
	{ 0x46ea1766, "check_disk_change" },
	{ 0x77f75134, "cdrom_release" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2be12d7b, "cdrom_ioctl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe14881d, "cdrom_check_events" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "paride");


MODULE_INFO(srcversion, "D0CAB1C00431A20FC3BE8F1");
