
/* ==== FUN_0045ebf0 @ 0045ebf0 ==== 
 * signature: undefined __cdecl FUN_0045ebf0(char * param_1, undefined4 * param_2, uint * param_3, undefined4 * param_4)
 * body: 0045ebf0-0045edd2
 */

void __cdecl FUN_0045ebf0(char *param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  char *pcVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 7;
  pcVar1 = _strstr(param_1,s_document_004dc218);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = _strstr(param_1,s_palette_004dc1f8);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = _strstr(param_1,s_borderless_004dc1e4);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = _strstr(param_1,s_modal_004dc1d0);
        *param_2 = 0;
        if ((pcVar1 != (char *)0x0) &&
           (pcVar1 = _strstr(param_1,s_movable_004dc1c8), pcVar1 != (char *)0x0)) {
          *param_2 = 0;
          return;
        }
      }
      else {
        *param_2 = 0;
        pcVar1 = _strstr(param_1,s_floating_004dc1d8);
        if (pcVar1 != (char *)0x0) {
          *param_3 = 0;
          return;
        }
      }
    }
    else {
      *param_2 = 0;
      *param_3 = *param_3 | 0x188;
      pcVar1 = _strstr(param_1,s_resizable_004dc20c);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = _strstr(param_1,s_closeable_004dc200);
      }
      else {
        *param_2 = 0;
        pcVar1 = _strstr(param_1,s_closeable_004dc200);
      }
      if (pcVar1 != (char *)0x0) {
        *param_2 = 0;
      }
      pcVar1 = _strstr(param_1,s_sidebar_004dc1f0);
      if (pcVar1 != (char *)0x0) {
        *param_2 = 0;
        pcVar1 = _strstr(param_1,s_resizable_004dc20c);
        if (pcVar1 == (char *)0x0) {
          pcVar1 = _strstr(param_1,s_closeable_004dc200);
          if (pcVar1 != (char *)0x0) {
            *param_2 = 0;
            return;
          }
        }
        else {
          *param_2 = 0;
          pcVar1 = _strstr(param_1,s_closeable_004dc200);
          if (pcVar1 != (char *)0x0) {
            *param_2 = 0;
            return;
          }
        }
      }
    }
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
    pcVar1 = _strstr(param_1,s_resizable_004dc20c);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = _strstr(param_1,s_closeable_004dc200);
      if (pcVar1 != (char *)0x0) {
        *param_2 = 0;
        return;
      }
    }
    else {
      *param_2 = 0;
      pcVar1 = _strstr(param_1,s_closeable_004dc200);
      if (pcVar1 != (char *)0x0) {
        *param_2 = 0;
        return;
      }
    }
  }
  return;
}


