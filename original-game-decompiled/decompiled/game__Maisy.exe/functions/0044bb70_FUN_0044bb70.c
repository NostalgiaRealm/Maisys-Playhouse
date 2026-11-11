
/* ==== FUN_0044bb70 @ 0044bb70 ==== 
 * signature: undefined __fastcall FUN_0044bb70(void * param_1)
 * body: 0044bb70-0044bba7
 */

void __fastcall FUN_0044bb70(void *param_1)

{
  char cVar1;
  
  FUN_0044bcb0(param_1,2,'\x01');
  cVar1 = FUN_0044bd00(param_1,0x100);
  if (cVar1 == '\0') {
    FUN_0044bf20(param_1);
  }
  SendMessageA(*(HWND *)((int)param_1 + 0x7e),0x808,0,0);
  return;
}


