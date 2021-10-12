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
	{ 0xbdbe887, "kill_litter_super" },
	{ 0x13caabab, "noop_llseek" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x2eff9aa7, "simple_statfs" },
	{ 0xeadb8757, "unregister_filesystem" },
	{ 0xee52f873, "unregister_binfmt" },
	{ 0xeecdf617, "__register_binfmt" },
	{ 0x622c8ae7, "register_filesystem" },
	{ 0xc5850110, "printk" },
	{ 0x23e606a9, "iput" },
	{ 0x91b20bea, "d_instantiate" },
	{ 0xccb7f7a4, "simple_pin_fs" },
	{ 0x57ad1ee9, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x42a8e072, "new_inode" },
	{ 0x49a9dbff, "lookup_one_len" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x349cba85, "strchr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x754d539c, "strlen" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7f8d5319, "simple_release_fs" },
	{ 0x575a8329, "d_drop" },
	{ 0x6512816f, "drop_nlink" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc35aa4ba, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xa7ecd69c, "clear_inode" },
	{ 0x2b2d954e, "simple_fill_super" },
	{ 0x8b1f4c97, "get_tree_single" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe4ffbeb9, "prepare_binprm" },
	{ 0x2332534c, "open_exec" },
	{ 0xb6284511, "would_dump" },
	{ 0x1924f57c, "fd_install" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x690ca19d, "__close_fd" },
	{ 0x6006847, "current_task" },
	{ 0xf94a52b0, "remove_arg_zero" },
	{ 0x23f7d6b9, "dput" },
	{ 0xa3365a78, "search_binary_handler" },
	{ 0xc78529be, "kernel_read" },
	{ 0x77b429c, "dentry_open" },
	{ 0xd30fbcd0, "bprm_change_interp" },
	{ 0xd80c8491, "copy_strings_kernel" },
	{ 0xa164179, "fput" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x11089ac7, "_ctype" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "73A016D7E06D6ABA269D6BE");
