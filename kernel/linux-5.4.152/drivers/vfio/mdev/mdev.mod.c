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
	{ 0xe7750f8, "kobject_put" },
	{ 0x91d56fe1, "kset_create_and_add" },
	{ 0x55353855, "bus_register" },
	{ 0x1427c5bb, "iommu_group_remove_device" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x34e0549f, "driver_register" },
	{ 0x53b954a2, "up_read" },
	{ 0x28849984, "iommu_group_add_device" },
	{ 0xf31357c9, "sysfs_create_files" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xb2f0f1ff, "device_del" },
	{ 0xc5850110, "printk" },
	{ 0x50c0120c, "class_compat_create_link" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0xb9f20300, "class_compat_remove_link" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb79c798, "sysfs_remove_link" },
	{ 0x335e4ce6, "device_add" },
	{ 0xce807a25, "up_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe83ccb8d, "bus_unregister" },
	{ 0x6e7943ec, "iommu_group_id" },
	{ 0x66cfd587, "kobject_uevent_env" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x37ba08b4, "sysfs_create_link" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe8c2beb5, "sysfs_remove_file_ns" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x89485687, "iommu_group_put" },
	{ 0x3750a460, "get_device" },
	{ 0x32c3cb4e, "class_compat_register" },
	{ 0xdc722609, "sysfs_remove_files" },
	{ 0xa43ceb8b, "device_for_each_child" },
	{ 0x5ae189e3, "kset_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xd3a720f3, "sysfs_create_groups" },
	{ 0x8d22bb58, "iommu_group_alloc" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0x58f308eb, "sysfs_remove_groups" },
	{ 0xe5883bd9, "class_compat_unregister" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xebc4dc41, "sysfs_create_file_ns" },
	{ 0x8ad8cf04, "device_remove_file_self" },
	{ 0x7b4da6ff, "__init_rwsem" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FCEB6364FD2AA5C6050AADB");
