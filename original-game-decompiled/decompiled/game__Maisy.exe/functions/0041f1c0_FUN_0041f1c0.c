
/* ==== FUN_0041f1c0 @ 0041f1c0 ==== 
 * signature: undefined __fastcall FUN_0041f1c0(int param_1)
 * body: 0041f1c0-0041f26e
 */

void __fastcall FUN_0041f1c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  int local_8;
  
  if (((*(int *)(param_1 + 0x26) != 0) && (*(short *)(param_1 + 0x32) != 0)) &&
     (local_8 = 0, 0 < *(short *)(param_1 + 0x32))) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x26) + iVar2;
      if ((*(int *)(iVar1 + 0x10) != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
        local_30 = *(undefined4 *)(param_1 + 0x2a);
        local_34 = 0x27;
        local_1e = 0;
        local_1a = 0;
        local_26 = *(undefined4 *)(iVar1 + 0x10);
        local_22 = 0;
        (**(code **)(iVar1 + 0xc))(local_38);
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      iVar2 = iVar2 + 0x18;
      local_8 = local_8 + 1;
    } while (local_8 < *(short *)(param_1 + 0x32));
  }
  FreeLibrary(DAT_004da054);
  DAT_004da054 = (HMODULE)0x0;
  if (*(LPVOID *)(param_1 + 0x26) != (LPVOID)0x0) {
    FUN_00434950(*(LPVOID *)(param_1 + 0x26));
    *(undefined4 *)(param_1 + 0x26) = 0;
  }
  return;
}


