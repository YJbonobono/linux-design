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
	{ 0x138133c8, "param_ops_charp" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xb4c45fbb, "hdlcdrv_unregister" },
	{ 0xb5df5f6a, "parport_unregister_driver" },
	{ 0x72f94e0c, "hdlcdrv_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbacf022d, "__parport_register_driver" },
	{ 0x511e2b54, "hdlcdrv_arbitrate" },
	{ 0xfb664acf, "hdlcdrv_receiver" },
	{ 0x269c75e2, "hdlcdrv_transmitter" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa916b694, "strnlen" },
	{ 0x349cba85, "strchr" },
	{ 0xaf4dc1c7, "parport_register_dev_model" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x73a9e66e, "parport_put_port" },
	{ 0x966ddcc1, "parport_find_base" },
	{ 0xdb0d7633, "parport_unregister_device" },
	{ 0x2d3e250, "parport_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x979ffaf2, "parport_claim" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlcdrv,parport");


MODULE_INFO(srcversion, "4B0664F94B6283F9E1E6B65");
