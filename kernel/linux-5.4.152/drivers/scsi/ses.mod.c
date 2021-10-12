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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x4fc2d391, "class_interface_unregister" },
	{ 0x2943c3cb, "scsi_register_driver" },
	{ 0x84dc29e9, "scsi_register_interface" },
	{ 0x6355bfd1, "__scsi_iterate_devices" },
	{ 0xe95cd758, "enclosure_register" },
	{ 0x6b497046, "sas_get_address" },
	{ 0xeb028576, "enclosure_for_each_device" },
	{ 0x3938d800, "scsi_is_sas_rphy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x47189bd1, "enclosure_component_alloc" },
	{ 0x91c2eecf, "enclosure_component_register" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x1b48b54b, "kobject_uevent" },
	{ 0xb407e3eb, "enclosure_add_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaa1ff60, "__scsi_execute" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc08d75c6, "enclosure_remove_device" },
	{ 0x31d065d9, "enclosure_unregister" },
	{ 0xfb0c6b14, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x97f919f, "enclosure_find" },
	{ 0xaaef1481, "sdev_prefix_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "enclosure,scsi_transport_sas");


MODULE_INFO(srcversion, "77E01367C33518919B296DD");
