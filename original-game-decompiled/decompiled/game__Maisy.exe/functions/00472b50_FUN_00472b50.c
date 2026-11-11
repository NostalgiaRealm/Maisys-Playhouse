
/* ==== FUN_00472b50 @ 00472b50 ==== 
 * signature: undefined __fastcall FUN_00472b50(int * param_1)
 * body: 00472b50-00472bc8
 */

void __fastcall FUN_00472b50(int *param_1)

{
  code *pcVar1;
  int local_8;
  
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    if (*(int *)((int)param_1 + 0x15e) != 0) {
      if (*(char *)((int)param_1 + 0x162) == '\0') {
        *(undefined1 *)((int)param_1 + 0x162) = 1;
        pcVar1 = (code *)FUN_0048b580(*(int *)((int)param_1 + 0x15e),1,0x25,&local_8);
        DAT_004e34cc = (*pcVar1)(local_8);
      }
      pcVar1 = (code *)FUN_0048b580(*(int *)((int)param_1 + 0x15e),1,0x2a,&local_8);
      DAT_004e34cc = (*pcVar1)(local_8);
    }
    FUN_00463e30(param_1);
  }
  return;
}


