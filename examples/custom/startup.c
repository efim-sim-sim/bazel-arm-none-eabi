
void init_data_bss(void) __attribute__((section(".mcal_text")));
void init_data_bss(void) {}

void SystemInit(void) __attribute__((section(".mcal_text")));
void SystemInit(void) {}

void startup_go_to_user_mode(void) __attribute__((section(".mcal_text")));
void startup_go_to_user_mode(void) {}

void __libc_init_array(void) __attribute__((section(".mcal_text")));
void __libc_init_array(void) {}

void ccov_main(void) __attribute__((section(".mcal_text")));
void ccov_main(void) {}
