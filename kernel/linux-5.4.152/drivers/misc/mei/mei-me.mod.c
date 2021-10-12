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
	{ 0xe30a32d8, "mei_irq_write_handler" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x1453cd83, "mei_write_is_idle" },
	{ 0x8d0d3b16, "mei_device_init" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xa5bff49d, "__tracepoint_mei_pci_cfg_read" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xa987d9aa, "mei_restart" },
	{ 0xb93bb2a0, "__tracepoint_mei_reg_write" },
	{ 0xb320f44c, "mei_hbm_pg_resume" },
	{ 0x4d51fe60, "mei_irq_compl_handler" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x1545cfd0, "__tracepoint_mei_reg_read" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe1e3faec, "mei_register" },
	{ 0xe8906287, "mei_stop" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x52998774, "mei_irq_read_handler" },
	{ 0x450bc242, "mei_cancel_work" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xf9cae08e, "mei_deregister" },
	{ 0x528251a, "pci_bus_read_config_dword" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x76644085, "mei_hbm_pg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xeb8f7f40, "mei_start" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf3d2ee62, "dev_pm_domain_set" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("pci:v00008086d00002974sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002984sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002994sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A74sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001DBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CBBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D3Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A13Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A13Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000319Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DE4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A364sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A3BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004B75sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018D3sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "59994FEDFF32394A7D0B680");
