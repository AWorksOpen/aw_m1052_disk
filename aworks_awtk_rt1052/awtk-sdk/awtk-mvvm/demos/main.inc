#include "awtk.h"
#include "mvvm_app.inc"

BEGIN_C_DECLS
#ifdef AWTK_WEB
#include "assets.inc"
#else /*AWTK_WEB*/
#include "../res/assets.inc"
#endif /*AWTK_WEB*/
END_C_DECLS

extern ret_t application_init(void);

extern ret_t application_exit(void);

static ret_t global_init(void) {
  mvvm_app_init();
  mvvm_app_run_default_scripts();

  return RET_OK;
}

#define GLOBAL_INIT() global_init()
#define GLOBAL_EXIT() mvvm_app_deinit()

#include "awtk_main.inc"
