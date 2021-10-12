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
	{ 0x1a58fbf0, "v4l2_ctrl_cluster" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xfc71cdba, "v4l2_ctrl_g_ctrl" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9559f70a, "v4l2_ctrl_activate" },
	{ 0xdd64e639, "strscpy" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0xc5850110, "printk" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0x99b01350, "__v4l2_ctrl_grab" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x89e3897d, "v4l2_ctrl_query_fill" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "B1966984D50908152D3F5B5");
