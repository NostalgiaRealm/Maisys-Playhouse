
/* ==== FUN_14018100 @ 14018100 ==== 
 * signature: undefined4 __cdecl FUN_14018100(int param_1)
 * body: 14018100-140181a3
 */

undefined4 __cdecl FUN_14018100(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x82) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x82));
    *(undefined4 *)(param_1 + 0x82) = 0;
    *(undefined4 *)(param_1 + 0x7a) = 0;
    *(undefined4 *)(param_1 + 0x7e) = 0;
  }
  return 0;
}


