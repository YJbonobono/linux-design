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
	{ 0xe3b66737, "class_find_device" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf20a3aa8, "devres_alloc_node" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x44458f85, "sg_miter_start" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3cac7cba, "sg_miter_stop" },
	{ 0x335e4ce6, "device_add" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x53cea585, "sg_miter_next" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7835fd59, "devres_add" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3750a460, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc90c7cb, "device_initialize" },
	{ 0xc0cca725, "class_destroy" },
	{ 0x9601035f, "request_firmware" },
	{ 0xa14e96ba, "sg_alloc_table_from_pages" },
	{ 0x51ce92, "device_unregister" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xab9ec8ac, "device_match_of_node" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x52977a3a, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C811FE8208787B98EC875B5");
