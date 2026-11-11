
/* ==== FUN_120111d0 @ 120111d0 ==== 
 * signature: undefined4 __cdecl FUN_120111d0(int param_1)
 * body: 120111d0-12011242
 */

undefined4 __cdecl FUN_120111d0(int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  int local_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_4);
  uVar2 = 1;
  DAT_12039a9c = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x2c),&local_8);
  if (local_8 != 0) {
    do {
      uVar3 = uVar2 + 1;
      FUN_12011250(param_1,uVar2);
      uVar2 = uVar3;
    } while (uVar3 <= local_8);
  }
  return 0;
}


