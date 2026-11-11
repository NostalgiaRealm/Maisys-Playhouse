
/* ==== FUN_0041e590 @ 0041e590 ==== 
 * signature: undefined __fastcall FUN_0041e590(int * param_1)
 * body: 0041e590-0041e5c2
 */

void __fastcall FUN_0041e590(int *param_1)

{
  char cVar1;
  
  FUN_0040e000((int)param_1);
  cVar1 = (**(code **)(*param_1 + 0x15c))(10);
  if ((cVar1 != '\0') && ((char)param_1[0x34] != '\0')) {
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 2;
    return;
  }
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfd;
  return;
}


