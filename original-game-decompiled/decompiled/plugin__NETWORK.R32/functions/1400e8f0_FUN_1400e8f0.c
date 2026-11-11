
/* ==== FUN_1400e8f0 @ 1400e8f0 ==== 
 * signature: undefined __cdecl FUN_1400e8f0(int param_1)
 * body: 1400e8f0-1400e9a8
 */

void __cdecl FUN_1400e8f0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x86) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x86));
    *(undefined4 *)(param_1 + 0x86) = 0;
    *(undefined4 *)(param_1 + 0x7e) = 0;
    *(undefined4 *)(param_1 + 0x82) = 0;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}


