
/* ==== FUN_00472a80 @ 00472a80 ==== 
 * signature: undefined __fastcall FUN_00472a80(int * param_1)
 * body: 00472a80-00472b42
 */

void __fastcall FUN_00472a80(int *param_1)

{
  code *pcVar1;
  int local_8;
  
  if (*(int *)((int)param_1 + 0x15e) != 0) {
    pcVar1 = (code *)FUN_0048b580(*(int *)((int)param_1 + 0x15e),1,0x29,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8);
    if (((*(uint *)((int)param_1 + 0x26) & 0x8000) == 0) != (bool)*(char *)((int)param_1 + 0x162)) {
      if (*(char *)((int)param_1 + 0x162) != '\0') {
        *(undefined1 *)((int)param_1 + 0x162) = 0;
        pcVar1 = (code *)FUN_0048b580(*(int *)((int)param_1 + 0x15e),1,0x26,&local_8);
        DAT_004e34cc = (*pcVar1)(local_8);
        FUN_00465560(param_1);
        return;
      }
      *(undefined1 *)((int)param_1 + 0x162) = 1;
      pcVar1 = (code *)FUN_0048b580(*(int *)((int)param_1 + 0x15e),1,0x25,&local_8);
      DAT_004e34cc = (*pcVar1)(local_8);
    }
  }
  FUN_00465560(param_1);
  return;
}


