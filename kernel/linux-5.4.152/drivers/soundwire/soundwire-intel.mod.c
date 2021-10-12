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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa8ddeab2, "sdw_master_read_prop" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x87a67f49, "single_open" },
	{ 0x34712074, "sdw_cdns_irq" },
	{ 0xf177b9f3, "sdw_delete_bus_master" },
	{ 0xa3b53740, "single_release" },
	{ 0xb177d101, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa3a50d2c, "sdw_cdns_probe" },
	{ 0x3074b82d, "device_get_named_child_node" },
	{ 0x8fc55994, "sdw_stream_add_master" },
	{ 0x61389913, "snd_soc_register_component" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0x4dded074, "devm_kasprintf" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3dae9b5, "sdw_add_bus_master" },
	{ 0xa76a6fcb, "sdw_cdns_thread" },
	{ 0x14f0e3d2, "cdns_xfer_msg" },
	{ 0x50f5bca4, "cdns_xfer_msg_defer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2a326e5d, "sdw_cdns_exit_reset" },
	{ 0x8c706b19, "snd_soc_unregister_component" },
	{ 0xc9cc92f0, "sdw_stream_remove_master" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x8a236b9f, "cdns_set_sdw_stream" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xacc984ed, "cdns_bus_conf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1c7ac9b7, "sdw_cdns_get_stream" },
	{ 0xd99baf8a, "sdw_cdns_config_stream" },
	{ 0xecaab129, "sdw_cdns_alloc_stream" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x3dd07b4a, "sdw_cdns_enable_interrupt" },
	{ 0x401e78ca, "sdw_cdns_debugfs_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc1a57a65, "sdw_cdns_init" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x7b79f031, "cdns_reset_page_addr" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf1dd310f, "sdw_cdns_pdi_init" },
};

MODULE_INFO(depends, "snd-pcm,soundwire-bus,soundwire-cadence,snd-soc-core");


MODULE_INFO(srcversion, "5F14C0D355B52815E4AEC2C");
