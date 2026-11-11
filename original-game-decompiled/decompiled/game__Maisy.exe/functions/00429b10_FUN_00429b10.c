
/* ==== FUN_00429b10 @ 00429b10 ==== 
 * signature: undefined __fastcall FUN_00429b10(int param_1)
 * body: 00429b10-00429b59
 */

void __fastcall FUN_00429b10(int param_1)

{
  code *pcVar1;
  int local_8;
  
  if (((*(char *)(param_1 + 0x54) != '\0') && (*(int *)(param_1 + 0x3a) != 0)) &&
     (*(short *)(*(int *)(param_1 + 4) + 0x22) == 1)) {
    pcVar1 = (code *)FUN_0048b580(*(int *)(param_1 + 0x50),0,0xb,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8);
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  return;
}


