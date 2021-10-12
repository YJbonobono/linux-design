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
	{ 0xd8a14513, "__cpuhp_setup_state" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x8872bb70, "cpuidle_register_driver" },
	{ 0x8f2eb429, "kvm_arch_para_hints" },
	{ 0xe9ce931a, "kvm_para_available" },
	{ 0x15f9d841, "cpuidle_poll_state_init" },
	{ 0xef9aedfc, "boot_option_idle_override" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x92897e3d, "default_idle" },
	{ 0x6006847, "current_task" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xaaced1fa, "cpuidle_unregister_driver" },
	{ 0x8fc9e71a, "__cpuhp_remove_state" },
	{ 0xc5850110, "printk" },
	{ 0xff8e74e2, "arch_haltpoll_enable" },
	{ 0xa936085, "cpuidle_register_device" },
	{ 0x8e97b6c0, "cpuidle_unregister_device" },
	{ 0x9424058f, "arch_haltpoll_disable" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C0D9F98D0047D991E549CC0");
