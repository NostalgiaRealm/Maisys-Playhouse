
/* ==== FUN_00433c50 @ 00433c50 ==== 
 * signature: undefined4 __cdecl FUN_00433c50(undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined1 * param_5)
 * body: 00433c50-00433cbf
 */

undefined4 __cdecl
FUN_00433c50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int local_8;
  
  piVar1 = (int *)*param_1;
  if (*(int *)((int)piVar1 + 0x2a) != 0) {
    piVar2 = FUN_0042c350(piVar1);
    if (piVar2 != piVar1) {
      *param_5 = 1;
      pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,5,&local_8);
      DAT_004e34cc = (*pcVar3)(local_8,piVar2,param_2,param_3,param_4);
      return DAT_004e34cc;
    }
  }
  *param_5 = 0;
  return 0;
}


