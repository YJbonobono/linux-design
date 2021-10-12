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
	{ 0xe1c838c3, "pcmcia_unregister_driver" },
	{ 0xdfcd882, "pcmcia_register_driver" },
	{ 0xc0ce234d, "pcmcia_request_io" },
	{ 0xc5850110, "printk" },
	{ 0x74533d73, "orinoco_if_add" },
	{ 0x6aade052, "orinoco_init" },
	{ 0x5917c046, "pcmcia_enable_device" },
	{ 0x73f53a7c, "pcmcia_request_irq" },
	{ 0xffe27bca, "orinoco_interrupt" },
	{ 0x20b542b4, "hermes_struct_init" },
	{ 0x594bf15b, "ioport_map" },
	{ 0xfb2ef679, "pcmcia_loop_config" },
	{ 0x303cf264, "alloc_orinocodev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdedecca6, "pcmcia_write_config_byte" },
	{ 0x61c22149, "pcmcia_read_config_byte" },
	{ 0xe47b2052, "pcmcia_dev_present" },
	{ 0x1fe861e6, "free_orinocodev" },
	{ 0x2727f1ed, "orinoco_if_del" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0x52acc661, "pcmcia_disable_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x78d116e7, "orinoco_down" },
	{ 0x1f3d0410, "orinoco_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,orinoco");

MODULE_ALIAS("pcmcia:m026Cc0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0104c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb6FBF459Apc*pd*");

MODULE_INFO(srcversion, "3AB94C739E33D730889B1C8");
