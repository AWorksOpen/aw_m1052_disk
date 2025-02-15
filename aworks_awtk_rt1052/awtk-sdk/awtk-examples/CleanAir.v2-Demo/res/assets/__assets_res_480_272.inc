#include "awtk.h"
#include "base/assets_manager.h"
#ifndef WITH_FS_RES
#include "res_480_272/inc/ui/home_page/home_page.data"
#include "res_480_272/inc/ui/record/record.data"
#include "res_480_272/inc/ui/setting/setting.data"
#include "res_480_272/inc/ui/timing/timing.data"
#include "res_480_272/inc/ui/kb_ufloat.data"
#include "res_480_272/inc/strings/zh_CN.data"
#include "res_480_272/inc/styles/default.data"
#include "res_480_272/inc/styles/keyboard.data"
#ifdef WITH_STB_IMAGE
#include "res_480_272/inc/images/arrow_down_d.res"
#include "res_480_272/inc/images/arrow_down_f.res"
#include "res_480_272/inc/images/arrow_down_n.res"
#include "res_480_272/inc/images/arrow_down_o.res"
#include "res_480_272/inc/images/arrow_down_p.res"
#include "res_480_272/inc/images/arrow_left_d.res"
#include "res_480_272/inc/images/arrow_left_f.res"
#include "res_480_272/inc/images/arrow_left_n.res"
#include "res_480_272/inc/images/arrow_left_o.res"
#include "res_480_272/inc/images/arrow_left_p.res"
#include "res_480_272/inc/images/arrow_right_d.res"
#include "res_480_272/inc/images/arrow_right_f.res"
#include "res_480_272/inc/images/arrow_right_n.res"
#include "res_480_272/inc/images/arrow_right_o.res"
#include "res_480_272/inc/images/arrow_right_p.res"
#include "res_480_272/inc/images/arrow_up_d.res"
#include "res_480_272/inc/images/arrow_up_f.res"
#include "res_480_272/inc/images/arrow_up_n.res"
#include "res_480_272/inc/images/arrow_up_o.res"
#include "res_480_272/inc/images/arrow_up_p.res"
#include "res_480_272/inc/images/arr_left.res"
#include "res_480_272/inc/images/arr_left_hover.res"
#include "res_480_272/inc/images/arr_left_push.res"
#include "res_480_272/inc/images/arr_right.res"
#include "res_480_272/inc/images/arr_right_hover.res"
#include "res_480_272/inc/images/arr_right_push.res"
#include "res_480_272/inc/images/auto.res"
#include "res_480_272/inc/images/auto_hover.res"
#include "res_480_272/inc/images/auto_push.res"
#include "res_480_272/inc/images/backspace.res"
#include "res_480_272/inc/images/backspace_d.res"
#include "res_480_272/inc/images/backspace_n.res"
#include "res_480_272/inc/images/backspace_o.res"
#include "res_480_272/inc/images/backspace_p.res"
#include "res_480_272/inc/images/battery_m.res"
#include "res_480_272/inc/images/battery_s.res"
#include "res_480_272/inc/images/bell.res"
#include "res_480_272/inc/images/bg0_mix.res"
#include "res_480_272/inc/images/bg1_mix.res"
#include "res_480_272/inc/images/check_checked_d.res"
#include "res_480_272/inc/images/check_checked_f.res"
#include "res_480_272/inc/images/check_checked_n.res"
#include "res_480_272/inc/images/check_checked_o.res"
#include "res_480_272/inc/images/check_checked_p.res"
#include "res_480_272/inc/images/check_d.res"
#include "res_480_272/inc/images/check_f.res"
#include "res_480_272/inc/images/check_n.res"
#include "res_480_272/inc/images/check_o.res"
#include "res_480_272/inc/images/check_p.res"
#include "res_480_272/inc/images/clock.res"
#include "res_480_272/inc/images/clock_bg.res"
#include "res_480_272/inc/images/clock_hour.res"
#include "res_480_272/inc/images/clock_minute.res"
#include "res_480_272/inc/images/clock_second.res"
#include "res_480_272/inc/images/close_n.res"
#include "res_480_272/inc/images/close_o.res"
#include "res_480_272/inc/images/close_p.res"
#include "res_480_272/inc/images/cross.res"
#include "res_480_272/inc/images/fan_1a.res"
#include "res_480_272/inc/images/fan_1b.res"
#include "res_480_272/inc/images/fan_2.res"
#include "res_480_272/inc/images/guage_bg.res"
#include "res_480_272/inc/images/guage_pointer.res"
#include "res_480_272/inc/images/language_en.res"
#include "res_480_272/inc/images/language_zh.res"
#include "res_480_272/inc/images/num0.res"
#include "res_480_272/inc/images/num1.res"
#include "res_480_272/inc/images/num2.res"
#include "res_480_272/inc/images/num3.res"
#include "res_480_272/inc/images/num4.res"
#include "res_480_272/inc/images/num5.res"
#include "res_480_272/inc/images/num6.res"
#include "res_480_272/inc/images/num7.res"
#include "res_480_272/inc/images/num8.res"
#include "res_480_272/inc/images/num9.res"
#include "res_480_272/inc/images/num_dot.res"
#include "res_480_272/inc/images/radio_checked_d.res"
#include "res_480_272/inc/images/radio_checked_f.res"
#include "res_480_272/inc/images/radio_checked_n.res"
#include "res_480_272/inc/images/radio_checked_o.res"
#include "res_480_272/inc/images/radio_checked_p.res"
#include "res_480_272/inc/images/radio_d.res"
#include "res_480_272/inc/images/radio_f.res"
#include "res_480_272/inc/images/radio_n.res"
#include "res_480_272/inc/images/radio_o.res"
#include "res_480_272/inc/images/radio_p.res"
#include "res_480_272/inc/images/record.res"
#include "res_480_272/inc/images/record_hover.res"
#include "res_480_272/inc/images/record_push.res"
#include "res_480_272/inc/images/return_d.res"
#include "res_480_272/inc/images/return_n.res"
#include "res_480_272/inc/images/return_o.res"
#include "res_480_272/inc/images/return_p.res"
#include "res_480_272/inc/images/rounded_n.res"
#include "res_480_272/inc/images/rounded_o.res"
#include "res_480_272/inc/images/rounded_p.res"
#include "res_480_272/inc/images/setting.res"
#include "res_480_272/inc/images/setting_hover.res"
#include "res_480_272/inc/images/setting_push.res"
#include "res_480_272/inc/images/shift_d.res"
#include "res_480_272/inc/images/shift_n.res"
#include "res_480_272/inc/images/shift_o.res"
#include "res_480_272/inc/images/shift_p.res"
#include "res_480_272/inc/images/switch.res"
#include "res_480_272/inc/images/switch_hover.res"
#include "res_480_272/inc/images/switch_push.res"
#include "res_480_272/inc/images/timer.res"
#include "res_480_272/inc/images/timer_hover.res"
#include "res_480_272/inc/images/timer_push.res"
#include "res_480_272/inc/images/wind_in.res"
#include "res_480_272/inc/images/wind_out.res"
#else
#endif /*WITH_STB_IMAGE*/
#ifdef WITH_VGCANVAS
#endif /*WITH_VGCANVAS*/
#ifdef WITH_TRUETYPE_FONT
#include "res_480_272/inc/fonts/default.res"
#else /*WITH_TRUETYPE_FONT*/
#endif /*WITH_TRUETYPE_FONT*/
#endif /*WITH_FS_RES*/

ret_t assets_init_res_480_272(void) {
  assets_manager_t* am = assets_manager();

#ifdef WITH_FS_RES
  assets_manager_preload(am, ASSET_TYPE_FONT, "default");
  assets_manager_preload(am, ASSET_TYPE_STYLE, "default");
#else
  assets_manager_add(am, ui_home_page_home_page_res_480_272);
  assets_manager_add(am, ui_record_record_res_480_272);
  assets_manager_add(am, ui_setting_setting_res_480_272);
  assets_manager_add(am, ui_timing_timing_res_480_272);
  assets_manager_add(am, ui_kb_ufloat_res_480_272);
  assets_manager_add(am, strings_zh_CN_res_480_272);
  assets_manager_add(am, style_default_res_480_272);
  assets_manager_add(am, style_keyboard_res_480_272);
  assets_manager_add(am, image_arrow_down_d_res_480_272);
  assets_manager_add(am, image_arrow_down_f_res_480_272);
  assets_manager_add(am, image_arrow_down_n_res_480_272);
  assets_manager_add(am, image_arrow_down_o_res_480_272);
  assets_manager_add(am, image_arrow_down_p_res_480_272);
  assets_manager_add(am, image_arrow_left_d_res_480_272);
  assets_manager_add(am, image_arrow_left_f_res_480_272);
  assets_manager_add(am, image_arrow_left_n_res_480_272);
  assets_manager_add(am, image_arrow_left_o_res_480_272);
  assets_manager_add(am, image_arrow_left_p_res_480_272);
  assets_manager_add(am, image_arrow_right_d_res_480_272);
  assets_manager_add(am, image_arrow_right_f_res_480_272);
  assets_manager_add(am, image_arrow_right_n_res_480_272);
  assets_manager_add(am, image_arrow_right_o_res_480_272);
  assets_manager_add(am, image_arrow_right_p_res_480_272);
  assets_manager_add(am, image_arrow_up_d_res_480_272);
  assets_manager_add(am, image_arrow_up_f_res_480_272);
  assets_manager_add(am, image_arrow_up_n_res_480_272);
  assets_manager_add(am, image_arrow_up_o_res_480_272);
  assets_manager_add(am, image_arrow_up_p_res_480_272);
  assets_manager_add(am, image_arr_left_res_480_272);
  assets_manager_add(am, image_arr_left_hover_res_480_272);
  assets_manager_add(am, image_arr_left_push_res_480_272);
  assets_manager_add(am, image_arr_right_res_480_272);
  assets_manager_add(am, image_arr_right_hover_res_480_272);
  assets_manager_add(am, image_arr_right_push_res_480_272);
  assets_manager_add(am, image_auto_res_480_272);
  assets_manager_add(am, image_auto_hover_res_480_272);
  assets_manager_add(am, image_auto_push_res_480_272);
  assets_manager_add(am, image_backspace_res_480_272);
  assets_manager_add(am, image_backspace_d_res_480_272);
  assets_manager_add(am, image_backspace_n_res_480_272);
  assets_manager_add(am, image_backspace_o_res_480_272);
  assets_manager_add(am, image_backspace_p_res_480_272);
  assets_manager_add(am, image_battery_m_res_480_272);
  assets_manager_add(am, image_battery_s_res_480_272);
  assets_manager_add(am, image_bell_res_480_272);
  assets_manager_add(am, image_bg0_mix_res_480_272);
  assets_manager_add(am, image_bg1_mix_res_480_272);
  assets_manager_add(am, image_check_checked_d_res_480_272);
  assets_manager_add(am, image_check_checked_f_res_480_272);
  assets_manager_add(am, image_check_checked_n_res_480_272);
  assets_manager_add(am, image_check_checked_o_res_480_272);
  assets_manager_add(am, image_check_checked_p_res_480_272);
  assets_manager_add(am, image_check_d_res_480_272);
  assets_manager_add(am, image_check_f_res_480_272);
  assets_manager_add(am, image_check_n_res_480_272);
  assets_manager_add(am, image_check_o_res_480_272);
  assets_manager_add(am, image_check_p_res_480_272);
  assets_manager_add(am, image_clock_res_480_272);
  assets_manager_add(am, image_clock_bg_res_480_272);
  assets_manager_add(am, image_clock_hour_res_480_272);
  assets_manager_add(am, image_clock_minute_res_480_272);
  assets_manager_add(am, image_clock_second_res_480_272);
  assets_manager_add(am, image_close_n_res_480_272);
  assets_manager_add(am, image_close_o_res_480_272);
  assets_manager_add(am, image_close_p_res_480_272);
  assets_manager_add(am, image_cross_res_480_272);
  assets_manager_add(am, image_fan_1a_res_480_272);
  assets_manager_add(am, image_fan_1b_res_480_272);
  assets_manager_add(am, image_fan_2_res_480_272);
  assets_manager_add(am, image_guage_bg_res_480_272);
  assets_manager_add(am, image_guage_pointer_res_480_272);
  assets_manager_add(am, image_language_en_res_480_272);
  assets_manager_add(am, image_language_zh_res_480_272);
  assets_manager_add(am, image_num0_res_480_272);
  assets_manager_add(am, image_num1_res_480_272);
  assets_manager_add(am, image_num2_res_480_272);
  assets_manager_add(am, image_num3_res_480_272);
  assets_manager_add(am, image_num4_res_480_272);
  assets_manager_add(am, image_num5_res_480_272);
  assets_manager_add(am, image_num6_res_480_272);
  assets_manager_add(am, image_num7_res_480_272);
  assets_manager_add(am, image_num8_res_480_272);
  assets_manager_add(am, image_num9_res_480_272);
  assets_manager_add(am, image_num_dot_res_480_272);
  assets_manager_add(am, image_radio_checked_d_res_480_272);
  assets_manager_add(am, image_radio_checked_f_res_480_272);
  assets_manager_add(am, image_radio_checked_n_res_480_272);
  assets_manager_add(am, image_radio_checked_o_res_480_272);
  assets_manager_add(am, image_radio_checked_p_res_480_272);
  assets_manager_add(am, image_radio_d_res_480_272);
  assets_manager_add(am, image_radio_f_res_480_272);
  assets_manager_add(am, image_radio_n_res_480_272);
  assets_manager_add(am, image_radio_o_res_480_272);
  assets_manager_add(am, image_radio_p_res_480_272);
  assets_manager_add(am, image_record_res_480_272);
  assets_manager_add(am, image_record_hover_res_480_272);
  assets_manager_add(am, image_record_push_res_480_272);
  assets_manager_add(am, image_return_d_res_480_272);
  assets_manager_add(am, image_return_n_res_480_272);
  assets_manager_add(am, image_return_o_res_480_272);
  assets_manager_add(am, image_return_p_res_480_272);
  assets_manager_add(am, image_rounded_n_res_480_272);
  assets_manager_add(am, image_rounded_o_res_480_272);
  assets_manager_add(am, image_rounded_p_res_480_272);
  assets_manager_add(am, image_setting_res_480_272);
  assets_manager_add(am, image_setting_hover_res_480_272);
  assets_manager_add(am, image_setting_push_res_480_272);
  assets_manager_add(am, image_shift_d_res_480_272);
  assets_manager_add(am, image_shift_n_res_480_272);
  assets_manager_add(am, image_shift_o_res_480_272);
  assets_manager_add(am, image_shift_p_res_480_272);
  assets_manager_add(am, image_switch_res_480_272);
  assets_manager_add(am, image_switch_hover_res_480_272);
  assets_manager_add(am, image_switch_push_res_480_272);
  assets_manager_add(am, image_timer_res_480_272);
  assets_manager_add(am, image_timer_hover_res_480_272);
  assets_manager_add(am, image_timer_push_res_480_272);
  assets_manager_add(am, image_wind_in_res_480_272);
  assets_manager_add(am, image_wind_out_res_480_272);
#ifdef WITH_TRUETYPE_FONT
  assets_manager_add(am, font_default_res_480_272);
#else /*WITH_TRUETYPE_FONT*/
#endif /*WITH_TRUETYPE_FONT*/
#ifdef WITH_VGCANVAS
#endif /*WITH_VGCANVAS*/
#endif

  tk_init_assets();
  return RET_OK;
}
