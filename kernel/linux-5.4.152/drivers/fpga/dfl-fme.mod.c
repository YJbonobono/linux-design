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
	{ 0x87d58120, "dfl_fpga_cdev_release_port" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x70eff62a, "dfl_fpga_cdev_assign_port" },
	{ 0xcd962c4f, "dfl_fpga_dev_ops_register" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9044c174, "fpga_image_info_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0xcf479f28, "dfl_fpga_dev_feature_uinit" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x6006847, "current_task" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x110e597a, "dfl_fpga_dev_feature_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x78fb0a28, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb2b884c, "fpga_bridges_put" },
	{ 0xbfd55d2e, "dfl_fpga_dev_ops_unregister" },
	{ 0x99803c8, "fpga_image_info_free" },
	{ 0x96848186, "scnprintf" },
	{ 0xa6e2362c, "fpga_region_program_fpga" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x84cb7c2a, "fpga_region_class_find" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe6852960, "platform_device_put" },
};

MODULE_INFO(depends, "dfl,fpga-mgr,fpga-bridge,fpga-region");


MODULE_INFO(srcversion, "077356B10F52BD543F2D9CA");
