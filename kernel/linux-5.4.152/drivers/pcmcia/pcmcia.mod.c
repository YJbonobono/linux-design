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
	{ 0x55353855, "bus_register" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34e0549f, "driver_register" },
	{ 0xf18898ab, "sysfs_remove_bin_file" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x5aecb73d, "pcmcia_put_socket" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xfd401082, "pcmcia_socket_class" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xded4e4af, "bus_rescan_devices" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xdfe8c14f, "pcmcia_parse_uevents" },
	{ 0xe5a01321, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x34199ef9, "class_interface_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4fc2d391, "class_interface_unregister" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x18d9cdf3, "pccard_register_pcmcia" },
	{ 0xda872864, "security_locked_down" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4cce07e3, "bus_for_each_dev" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x1e487b2f, "driver_create_file" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3750a460, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xff85df97, "sysfs_create_bin_file" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x9601035f, "request_firmware" },
	{ 0x51ce92, "device_unregister" },
	{ 0x5258e02b, "driver_attach" },
	{ 0xc2b6c2f1, "driver_remove_file" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x335bb5bf, "pcmcia_get_socket" },
	{ 0x13110126, "request_resource" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "pcmcia_core");


MODULE_INFO(srcversion, "8CCAD36E06962432E12D105");
