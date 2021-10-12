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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x19c140f8, "mptscsih_host_attrs" },
	{ 0x39c94d87, "fc_eh_timed_out" },
	{ 0x46c7a720, "mptscsih_show_info" },
	{ 0x5d4240b4, "mptscsih_bios_param" },
	{ 0xd1e791bf, "mptscsih_change_queue_depth" },
	{ 0xcb849954, "mptscsih_slave_destroy" },
	{ 0xd6ba00ed, "mptscsih_slave_configure" },
	{ 0xd7b0371a, "mptscsih_host_reset" },
	{ 0xb13b4c63, "mptscsih_info" },
	{ 0xc0b0d8e3, "mptscsih_shutdown" },
	{ 0xb91a3cbe, "mptscsih_resume" },
	{ 0x1708b7df, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xdd59221a, "fc_release_transport" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x16981a49, "mpt_reset_register" },
	{ 0xd6744089, "mpt_event_register" },
	{ 0xba4c4c8b, "mptscsih_scandv_complete" },
	{ 0x2b11190d, "mptscsih_taskmgmt_complete" },
	{ 0xde456b20, "mpt_register" },
	{ 0x7bd25860, "mptscsih_io_done" },
	{ 0xf56f804e, "fc_attach_transport" },
	{ 0xe3a53f4c, "sort" },
	{ 0x2bd11be8, "mptscsih_abort" },
	{ 0xc1612c22, "mptscsih_dev_reset" },
	{ 0xa09727c4, "mptscsih_bus_reset" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfef7d47b, "scsi_add_host_with_dma" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6c3d866c, "scsi_host_alloc" },
	{ 0xe6c73946, "mpt_attach" },
	{ 0x53dadd0f, "mptscsih_ioc_reset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x10736115, "mptscsih_qcmd" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xce772c51, "mptscsih_event_process" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xfb578fc5, "memset" },
	{ 0x5cc765f2, "mpt_config" },
	{ 0x39a7ab78, "scsi_is_fc_rport" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8d006aec, "fc_remote_port_rolechg" },
	{ 0x58b9b8ff, "fc_remote_port_add" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x8d4ac1bd, "fc_remote_port_delete" },
	{ 0x78034b2b, "mptscsih_remove" },
	{ 0x7b8edf3f, "scsi_remove_host" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x368b9920, "fc_remove_host" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,scsi_transport_fc,mptbase");

MODULE_ALIAS("pci:v00001000d00000621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000624sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000628sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000626sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000646sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "920CF1515116B36A2B57F88");
