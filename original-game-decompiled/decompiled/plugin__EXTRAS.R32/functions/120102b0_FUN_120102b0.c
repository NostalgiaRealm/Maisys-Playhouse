
/* ==== FUN_120102b0 @ 120102b0 ==== 
 * signature: undefined4 __cdecl FUN_120102b0(int param_1, int param_2)
 * body: 120102b0-12010304
 */

undefined4 __cdecl FUN_120102b0(int param_1,int param_2)

{
  code *pcVar1;
  int local_40;
  undefined1 local_3c [60];
  
  if (0 < param_2) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_40);
    DAT_12039a9c = (*pcVar1)(local_40,*(undefined4 *)(param_1 + 0x2c),param_2,local_3c);
  }
  return 0x10000;
}


