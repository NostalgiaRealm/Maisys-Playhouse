
/* ==== FUN_0044bad0 @ 0044bad0 ==== 
 * signature: undefined __fastcall FUN_0044bad0(void * param_1)
 * body: 0044bad0-0044baf6
 */

void __fastcall FUN_0044bad0(void *param_1)

{
  if (*(int *)((int)param_1 + 0x7e) != 0) {
    FUN_0044bb40(param_1);
    SendMessageA(*(HWND *)((int)param_1 + 0x7e),0x10,0,0);
    *(undefined4 *)((int)param_1 + 0x7e) = 0;
  }
  return;
}


