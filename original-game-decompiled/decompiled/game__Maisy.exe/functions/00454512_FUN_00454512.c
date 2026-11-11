
/* ==== FUN_00454512 @ 00454512 ==== 
 * signature: undefined __fastcall FUN_00454512(undefined4 param_1, undefined4 param_2)
 * body: 00454512-00454513
 */

void __fastcall FUN_00454512(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  char *pcVar2;
  int *unaff_ESI;
  char cVar3;
  
  cVar3 = (char)((uint)param_2 >> 8);
  pcVar2 = (char *)CONCAT31((int3)((uint)param_2 >> 8),
                            (char)param_2 + 'E' + (char)((uint)param_1 >> 8) + cVar3);
  *pcVar2 = *pcVar2 + 'D';
  cRamcb008a88 = cRamcb008a88 + cVar3;
  *unaff_ESI = *unaff_ESI + -0x34ffbabc;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


