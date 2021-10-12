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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xe1bd6c99, "rio_init_mports" },
	{ 0x1de51d39, "rio_register_scan" },
	{ 0xc4f24254, "rio_pw_enable" },
	{ 0x4e7eb2e8, "rio_local_set_device_id" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x839a8c80, "rio_set_port_lockout" },
	{ 0x2bb25b6d, "rio_get_comptag" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x903ea774, "rio_route_add_entry" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x47e2fd1f, "rio_mport_chk_dev_access" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6108ea55, "rio_unlock_device" },
	{ 0x49a955bd, "rio_route_get_entry" },
	{ 0x9772ac92, "rio_lock_device" },
	{ 0x7efbd19f, "rio_enable_rx_tx_port" },
	{ 0x1b58d784, "rio_dev_get" },
	{ 0x3601f0b5, "rio_add_device" },
	{ 0xb70c0eae, "rio_attach_device" },
	{ 0xb4b8e3c0, "rio_mport_get_feature" },
	{ 0x728dad04, "rio_mport_get_physefb" },
	{ 0xaf4b25c9, "rio_route_clr_table" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1cbd88f3, "rio_add_net" },
	{ 0x28db880d, "dev_set_name" },
	{ 0x9131e46b, "rio_free_net" },
	{ 0x87643d4e, "rio_alloc_net" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf4c91d80, "rio_mport_write_config_32" },
	{ 0xc5850110, "printk" },
	{ 0x727e0645, "__rio_local_write_config_32" },
	{ 0xd0a96921, "rio_mport_read_config_32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x57df5952, "__rio_local_read_config_32" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5BE704947BB54CA932BD471");
