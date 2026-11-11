
/* ==== FUN_12016230 @ 12016230 ==== 
 * signature: undefined __fastcall FUN_12016230(DWORD_PTR param_1)
 * body: 12016230-1201625c
 */

void __fastcall FUN_12016230(DWORD_PTR param_1)

{
  MMRESULT MVar1;
  
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_12004d40(*(undefined4 **)(param_1 + 6));
  MVar1 = timeSetEvent(*(UINT *)(param_1 + 0x16),5,DAT_120378c4,param_1,1);
  *(MMRESULT *)(param_1 + 0x12) = MVar1;
  return;
}


