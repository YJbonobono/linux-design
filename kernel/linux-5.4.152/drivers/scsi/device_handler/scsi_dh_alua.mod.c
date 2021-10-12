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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x7195fca, "scsi_unregister_device_handler" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc5850110, "printk" },
	{ 0x317f1cbe, "scsi_register_device_handler" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1477dad9, "scsi_vpd_lun_id" },
	{ 0x6654f08, "scsi_vpd_tpg_id" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1cbc34b6, "scsi_device_get" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x3f27ea7e, "scsi_print_sense_hdr" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc1fba954, "scsi_test_unit_ready" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0xaa1ff60, "__scsi_execute" },
	{ 0x8ea97437, "scsi_device_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5a921311, "strncmp" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3077B7C1E274D7E74FB0F28");
