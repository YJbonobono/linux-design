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
	{ 0x85bd1608, "__request_region" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xe52425b7, "framebuffer_release" },
	{ 0x750492d4, "pci_unmap_rom" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x19ab1532, "pci_get_class" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xd7885357, "cfb_fillrect" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xd56dec52, "cfb_imageblit" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x4793e274, "pci_map_rom" },
	{ 0xdad9000b, "register_framebuffer" },
	{ 0x5a921311, "strncmp" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xc88bae18, "framebuffer_alloc" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x38c33bd8, "cfb_copyarea" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7aecb9a1, "unregister_framebuffer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001039d00000300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00005300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00006300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00005315sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00006325sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00000330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00006330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018CAd00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000018CAd00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FB011BC3256208BC48DF45F");
