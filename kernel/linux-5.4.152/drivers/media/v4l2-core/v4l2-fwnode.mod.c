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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0xde5ce4f7, "fwnode_graph_get_remote_port_parent" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x49ca0d55, "v4l2_async_subdev_notifier_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x46573150, "v4l2_async_notifier_cleanup" },
	{ 0x9bbfcb27, "v4l2_async_notifier_init" },
	{ 0x2ec83ebf, "fwnode_get_next_parent" },
	{ 0x128ecc75, "fwnode_device_is_available" },
	{ 0xf1de5892, "v4l2_async_notifier_add_subdev" },
	{ 0xc4adc763, "fwnode_property_present" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x7b40ecb9, "v4l2_async_notifier_add_fwnode_subdev" },
	{ 0x25505493, "is_acpi_data_node" },
	{ 0x34a27307, "fwnode_property_read_u64_array" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x2bb7b5b, "fwnode_graph_parse_endpoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x89e94b67, "fwnode_get_parent" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x54f47f5e, "fwnode_property_get_reference_args" },
	{ 0x27b69f7b, "fwnode_get_next_child_node" },
	{ 0xae617af2, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0x8ccccb74, "fwnode_graph_get_next_endpoint" },
	{ 0x7fd9c7c2, "dev_fwnode" },
	{ 0xc92eabd3, "fwnode_graph_get_remote_endpoint" },
	{ 0xbfac8b49, "v4l2_async_notifier_unregister" },
	{ 0xe7792155, "is_acpi_device_node" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "3D19AC5C99C94117042B119");
