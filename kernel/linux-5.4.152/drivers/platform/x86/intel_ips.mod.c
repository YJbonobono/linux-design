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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x87a67f49, "single_open" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xa3b53740, "single_release" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb177d101, "seq_printf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x294b9ea1, "on_each_cpu" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf1e98c74, "avenrun" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00003B32sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B2F528D03ED542C31BFB1F2");
