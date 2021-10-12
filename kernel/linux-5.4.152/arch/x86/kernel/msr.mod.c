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
	{ 0x90ba3b98, "no_seek_end_llseek" },
	{ 0x8fc9e71a, "__cpuhp_remove_state" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xc0cca725, "class_destroy" },
	{ 0xd8a14513, "__cpuhp_setup_state" },
	{ 0x52977a3a, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0x8bde90cc, "__register_chrdev" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x804af87c, "wrmsr_safe_on_cpu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3a2d1dfa, "rdmsr_safe_regs_on_cpu" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9e276cf, "wrmsr_safe_regs_on_cpu" },
	{ 0xda872864, "security_locked_down" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9a9cd14e, "device_create" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc6cbbc89, "capable" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x361fe89f, "device_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "96C74559251C0B39AFA7B12");
