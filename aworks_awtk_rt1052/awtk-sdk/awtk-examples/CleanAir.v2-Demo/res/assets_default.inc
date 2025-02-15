#include "awtk.h"
#include "base/assets_manager.h"
#ifndef WITH_FS_RES
#include "assets/default/inc/ui/home_page/home_page.data"
#include "assets/default/inc/ui/record/record.data"
#include "assets/default/inc/ui/setting/setting.data"
#include "assets/default/inc/ui/timing/timing.data"
#include "assets/default/inc/ui/kb_ufloat.data"
#include "assets/default/inc/strings/zh_CN.data"
#include "assets/default/inc/styles/default.data"
#include "assets/default/inc/styles/keyboard.data"
#ifdef WITH_STB_IMAGE
#include "assets/default/inc/images/arrow_down_d.res"
#include "assets/default/inc/images/arrow_down_f.res"
#include "assets/default/inc/images/arrow_down_n.res"
#include "assets/default/inc/images/arrow_down_o.res"
#include "assets/default/inc/images/arrow_down_p.res"
#include "assets/default/inc/images/arrow_left_d.res"
#include "assets/default/inc/images/arrow_left_f.res"
#include "assets/default/inc/images/arrow_left_n.res"
#include "assets/default/inc/images/arrow_left_o.res"
#include "assets/default/inc/images/arrow_left_p.res"
#include "assets/default/inc/images/arrow_right_d.res"
#include "assets/default/inc/images/arrow_right_f.res"
#include "assets/default/inc/images/arrow_right_n.res"
#include "assets/default/inc/images/arrow_right_o.res"
#include "assets/default/inc/images/arrow_right_p.res"
#include "assets/default/inc/images/arrow_up_d.res"
#include "assets/default/inc/images/arrow_up_f.res"
#include "assets/default/inc/images/arrow_up_n.res"
#include "assets/default/inc/images/arrow_up_o.res"
#include "assets/default/inc/images/arrow_up_p.res"
#include "assets/default/inc/images/arr_left.res"
#include "assets/default/inc/images/arr_left_hover.res"
#include "assets/default/inc/images/arr_left_push.res"
#include "assets/default/inc/images/arr_right.res"
#include "assets/default/inc/images/arr_right_hover.res"
#include "assets/default/inc/images/arr_right_push.res"
#include "assets/default/inc/images/auto.res"
#include "assets/default/inc/images/auto_hover.res"
#include "assets/default/inc/images/auto_push.res"
#include "assets/default/inc/images/backspace.res"
#include "assets/default/inc/images/backspace_d.res"
#include "assets/default/inc/images/backspace_n.res"
#include "assets/default/inc/images/backspace_o.res"
#include "assets/default/inc/images/backspace_p.res"
#include "assets/default/inc/images/battery_m.res"
#include "assets/default/inc/images/battery_s.res"
#include "assets/default/inc/images/bell.res"
#include "assets/default/inc/images/bg0_mix.res"
#include "assets/default/inc/images/bg1_mix.res"
#include "assets/default/inc/images/check_checked_d.res"
#include "assets/default/inc/images/check_checked_f.res"
#include "assets/default/inc/images/check_checked_n.res"
#include "assets/default/inc/images/check_checked_o.res"
#include "assets/default/inc/images/check_checked_p.res"
#include "assets/default/inc/images/check_d.res"
#include "assets/default/inc/images/check_f.res"
#include "assets/default/inc/images/check_n.res"
#include "assets/default/inc/images/check_o.res"
#include "assets/default/inc/images/check_p.res"
#include "assets/default/inc/images/clock.res"
#include "assets/default/inc/images/clock_bg.res"
#include "assets/default/inc/images/clock_hour.res"
#include "assets/default/inc/images/clock_minute.res"
#include "assets/default/inc/images/clock_second.res"
#include "assets/default/inc/images/close_n.res"
#include "assets/default/inc/images/close_o.res"
#include "assets/default/inc/images/close_p.res"
#include "assets/default/inc/images/cross.res"
#include "assets/default/inc/images/fan_1a.res"
#include "assets/default/inc/images/fan_1b.res"
#include "assets/default/inc/images/fan_2.res"
#include "assets/default/inc/images/guage_bg.res"
#include "assets/default/inc/images/guage_pointer.res"
#include "assets/default/inc/images/language_en.res"
#include "assets/default/inc/images/language_zh.res"
#include "assets/default/inc/images/num0.res"
#include "assets/default/inc/images/num1.res"
#include "assets/default/inc/images/num2.res"
#include "assets/default/inc/images/num3.res"
#include "assets/default/inc/images/num4.res"
#include "assets/default/inc/images/num5.res"
#include "assets/default/inc/images/num6.res"
#include "assets/default/inc/images/num7.res"
#include "assets/default/inc/images/num8.res"
#include "assets/default/inc/images/num9.res"
#include "assets/default/inc/images/num_dot.res"
#include "assets/default/inc/images/radio_checked_d.res"
#include "assets/default/inc/images/radio_checked_f.res"
#include "assets/default/inc/images/radio_checked_n.res"
#include "assets/default/inc/images/radio_checked_o.res"
#include "assets/default/inc/images/radio_checked_p.res"
#include "assets/default/inc/images/radio_d.res"
#include "assets/default/inc/images/radio_f.res"
#include "assets/default/inc/images/radio_n.res"
#include "assets/default/inc/images/radio_o.res"
#include "assets/default/inc/images/radio_p.res"
#include "assets/default/inc/images/record.res"
#include "assets/default/inc/images/record_hover.res"
#include "assets/default/inc/images/record_push.res"
#include "assets/default/inc/images/return_d.res"
#include "assets/default/inc/images/return_n.res"
#include "assets/default/inc/images/return_o.res"
#include "assets/default/inc/images/return_p.res"
#include "assets/default/inc/images/rounded_n.res"
#include "assets/default/inc/images/rounded_o.res"
#include "assets/default/inc/images/rounded_p.res"
#include "assets/default/inc/images/setting.res"
#include "assets/default/inc/images/setting_hover.res"
#include "assets/default/inc/images/setting_push.res"
#include "assets/default/inc/images/shift_d.res"
#include "assets/default/inc/images/shift_n.res"
#include "assets/default/inc/images/shift_o.res"
#include "assets/default/inc/images/shift_p.res"
#include "assets/default/inc/images/switch.res"
#include "assets/default/inc/images/switch_hover.res"
#include "assets/default/inc/images/switch_push.res"
#include "assets/default/inc/images/timer.res"
#include "assets/default/inc/images/timer_hover.res"
#include "assets/default/inc/images/timer_push.res"
#include "assets/default/inc/images/wind_in.res"
#include "assets/default/inc/images/wind_out.res"
#else
#endif /*WITH_STB_IMAGE*/
#ifdef WITH_VGCANVAS
#endif /*WITH_VGCANVAS*/
#ifdef WITH_TRUETYPE_FONT
#include "assets/default/inc/fonts/default.res"
#else /*WITH_TRUETYPE_FONT*/
#endif /*WITH_TRUETYPE_FONT*/
#endif /*WITH_FS_RES*/

ret_t assets_init(void) {
  assets_manager_t* am = assets_manager();
  assets_manager_set_theme(am, "default");

#ifdef WITH_FS_RES
  assets_manager_preload(am, ASSET_TYPE_FONT, "default");
  assets_manager_preload(am, ASSET_TYPE_STYLE, "default");
#else
  assets_manager_add(am, ui_home_page_home_page);
  assets_manager_add(am, ui_record_record);
  assets_manager_add(am, ui_setting_setting);
  assets_manager_add(am, ui_timing_timing);
  assets_manager_add(am, ui_kb_ufloat);
  assets_manager_add(am, strings_zh_CN);
  assets_manager_add(am, style_default);
  assets_manager_add(am, style_keyboard);
  assets_manager_add(am, image_arrow_down_d);
  assets_manager_add(am, image_arrow_down_f);
  assets_manager_add(am, image_arrow_down_n);
  assets_manager_add(am, image_arrow_down_o);
  assets_manager_add(am, image_arrow_down_p);
  assets_manager_add(am, image_arrow_left_d);
  assets_manager_add(am, image_arrow_left_f);
  assets_manager_add(am, image_arrow_left_n);
  assets_manager_add(am, image_arrow_left_o);
  assets_manager_add(am, image_arrow_left_p);
  assets_manager_add(am, image_arrow_right_d);
  assets_manager_add(am, image_arrow_right_f);
  assets_manager_add(am, image_arrow_right_n);
  assets_manager_add(am, image_arrow_right_o);
  assets_manager_add(am, image_arrow_right_p);
  assets_manager_add(am, image_arrow_up_d);
  assets_manager_add(am, image_arrow_up_f);
  assets_manager_add(am, image_arrow_up_n);
  assets_manager_add(am, image_arrow_up_o);
  assets_manager_add(am, image_arrow_up_p);
  assets_manager_add(am, image_arr_left);
  assets_manager_add(am, image_arr_left_hover);
  assets_manager_add(am, image_arr_left_push);
  assets_manager_add(am, image_arr_right);
  assets_manager_add(am, image_arr_right_hover);
  assets_manager_add(am, image_arr_right_push);
  assets_manager_add(am, image_auto);
  assets_manager_add(am, image_auto_hover);
  assets_manager_add(am, image_auto_push);
  assets_manager_add(am, image_backspace);
  assets_manager_add(am, image_backspace_d);
  assets_manager_add(am, image_backspace_n);
  assets_manager_add(am, image_backspace_o);
  assets_manager_add(am, image_backspace_p);
  assets_manager_add(am, image_battery_m);
  assets_manager_add(am, image_battery_s);
  assets_manager_add(am, image_bell);
  assets_manager_add(am, image_bg0_mix);
  assets_manager_add(am, image_bg1_mix);
  assets_manager_add(am, image_check_checked_d);
  assets_manager_add(am, image_check_checked_f);
  assets_manager_add(am, image_check_checked_n);
  assets_manager_add(am, image_check_checked_o);
  assets_manager_add(am, image_check_checked_p);
  assets_manager_add(am, image_check_d);
  assets_manager_add(am, image_check_f);
  assets_manager_add(am, image_check_n);
  assets_manager_add(am, image_check_o);
  assets_manager_add(am, image_check_p);
  assets_manager_add(am, image_clock);
  assets_manager_add(am, image_clock_bg);
  assets_manager_add(am, image_clock_hour);
  assets_manager_add(am, image_clock_minute);
  assets_manager_add(am, image_clock_second);
  assets_manager_add(am, image_close_n);
  assets_manager_add(am, image_close_o);
  assets_manager_add(am, image_close_p);
  assets_manager_add(am, image_cross);
  assets_manager_add(am, image_fan_1a);
  assets_manager_add(am, image_fan_1b);
  assets_manager_add(am, image_fan_2);
  assets_manager_add(am, image_guage_bg);
  assets_manager_add(am, image_guage_pointer);
  assets_manager_add(am, image_language_en);
  assets_manager_add(am, image_language_zh);
  assets_manager_add(am, image_num0);
  assets_manager_add(am, image_num1);
  assets_manager_add(am, image_num2);
  assets_manager_add(am, image_num3);
  assets_manager_add(am, image_num4);
  assets_manager_add(am, image_num5);
  assets_manager_add(am, image_num6);
  assets_manager_add(am, image_num7);
  assets_manager_add(am, image_num8);
  assets_manager_add(am, image_num9);
  assets_manager_add(am, image_num_dot);
  assets_manager_add(am, image_radio_checked_d);
  assets_manager_add(am, image_radio_checked_f);
  assets_manager_add(am, image_radio_checked_n);
  assets_manager_add(am, image_radio_checked_o);
  assets_manager_add(am, image_radio_checked_p);
  assets_manager_add(am, image_radio_d);
  assets_manager_add(am, image_radio_f);
  assets_manager_add(am, image_radio_n);
  assets_manager_add(am, image_radio_o);
  assets_manager_add(am, image_radio_p);
  assets_manager_add(am, image_record);
  assets_manager_add(am, image_record_hover);
  assets_manager_add(am, image_record_push);
  assets_manager_add(am, image_return_d);
  assets_manager_add(am, image_return_n);
  assets_manager_add(am, image_return_o);
  assets_manager_add(am, image_return_p);
  assets_manager_add(am, image_rounded_n);
  assets_manager_add(am, image_rounded_o);
  assets_manager_add(am, image_rounded_p);
  assets_manager_add(am, image_setting);
  assets_manager_add(am, image_setting_hover);
  assets_manager_add(am, image_setting_push);
  assets_manager_add(am, image_shift_d);
  assets_manager_add(am, image_shift_n);
  assets_manager_add(am, image_shift_o);
  assets_manager_add(am, image_shift_p);
  assets_manager_add(am, image_switch);
  assets_manager_add(am, image_switch_hover);
  assets_manager_add(am, image_switch_push);
  assets_manager_add(am, image_timer);
  assets_manager_add(am, image_timer_hover);
  assets_manager_add(am, image_timer_push);
  assets_manager_add(am, image_wind_in);
  assets_manager_add(am, image_wind_out);
#ifdef WITH_TRUETYPE_FONT
  assets_manager_add(am, font_default);
#else /*WITH_TRUETYPE_FONT*/
#endif /*WITH_TRUETYPE_FONT*/
#ifdef WITH_VGCANVAS
#endif /*WITH_VGCANVAS*/
#endif

  tk_init_assets();
  return RET_OK;
}
