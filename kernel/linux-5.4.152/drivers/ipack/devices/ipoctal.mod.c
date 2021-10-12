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
	{ 0x8269c193, "ipack_driver_unregister" },
	{ 0x977cc4ac, "ipack_driver_register" },
	{ 0x767d41f8, "tty_flip_buffer_push" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xce50481c, "__tty_insert_flip_char" },
	{ 0xf10de535, "ioread8" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xece45d9e, "tty_port_register_device_attr" },
	{ 0x97be6e3e, "tty_port_alloc_xmit_buf" },
	{ 0x521ce967, "tty_port_init" },
	{ 0x56f7cf2d, "tty_register_driver" },
	{ 0x61991828, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xc39ba767, "__tty_alloc_driver" },
	{ 0xd97e4b96, "devm_ioremap_nocache" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xfd5ae162, "tty_standard_install" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xc9bede2e, "tty_port_open" },
	{ 0xc24598ae, "tty_port_close" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x509612e2, "tty_port_hangup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x848d372e, "iowrite8" },
	{ 0xe1f109b, "put_tty_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x32f0ff4e, "tty_unregister_driver" },
	{ 0xf5dcbe39, "tty_port_destroy" },
	{ 0xb061c975, "tty_port_free_xmit_buf" },
	{ 0x194d9483, "tty_unregister_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipack");

MODULE_ALIAS("ipack:f01v000000F0d00000022*");
MODULE_ALIAS("ipack:f01v000000F0d0000002A*");
MODULE_ALIAS("ipack:f01v000000F0d00000048*");

MODULE_INFO(srcversion, "8A17D8EC5DCAE5282042429");
