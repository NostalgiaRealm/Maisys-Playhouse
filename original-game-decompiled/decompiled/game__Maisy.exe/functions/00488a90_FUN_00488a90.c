
/* ==== FUN_00488a90 @ 00488a90 ==== 
 * signature: undefined __fastcall FUN_00488a90(int * param_1)
 * body: 00488a90-00488b14
 */

void __fastcall FUN_00488a90(int *param_1)

{
  int iVar1;
  tagRECT local_1c;
  short local_c [4];
  
  if (DAT_004dc57c == '\0') {
    iVar1 = (**(code **)(*param_1 + 0x130))();
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x50) != 0)) &&
       (*(int *)(*(int *)(iVar1 + 0x50) + 0x82) != 0)) {
      GetClientRect((HWND)param_1[7],&local_1c);
      FUN_004087c0(*(void **)(*(int *)(iVar1 + 0x50) + 0x82),local_c,'\x01');
      FUN_00407970(*(void **)(*(int *)(iVar1 + 0x50) + 0x82));
    }
  }
  return;
}


