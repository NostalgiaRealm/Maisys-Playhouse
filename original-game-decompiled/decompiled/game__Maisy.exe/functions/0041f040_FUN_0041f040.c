
/* ==== FUN_0041f040 @ 0041f040 ==== 
 * signature: undefined __fastcall FUN_0041f040(int param_1)
 * body: 0041f040-0041f1be
 */

void __fastcall FUN_0041f040(int param_1)

{
  FARPROC pFVar1;
  int iVar2;
  undefined4 unaff_EBP;
  LPCSTR lpProcName;
  undefined4 *puVar3;
  bool bVar4;
  CHAR local_98 [97];
  short local_37;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  short local_24;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  ushort local_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = (undefined2)unaff_EBP;
  uStack_2 = (undefined2)((uint)unaff_EBP >> 0x10);
  lpProcName = (LPCSTR)0x2;
  *(undefined2 *)(param_1 + 0x32) = 0;
  DAT_004da054 = LoadLibraryA(s_mPlugins_Basic_x32_004da070);
  bVar4 = DAT_004da054 == (HMODULE)0x0;
  GetLastError();
  if (bVar4) {
    wsprintfA(local_98,s__s_kit_not_found__004da05c,s_mPlugins_Basic_x32_004da070);
    FUN_0043c5b0(0,local_98);
    PostQuitMessage(0);
    return;
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  do {
    pFVar1 = GetProcAddress(DAT_004da054,lpProcName);
    if (pFVar1 != (FARPROC)0x0) {
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 1;
    }
    lpProcName = (LPCSTR)(uint)(ushort)((short)lpProcName + 1);
  } while (pFVar1 != (FARPROC)0x0);
  iVar2 = FUN_00434920(DAT_004d99ac,*(short *)(param_1 + 0x32) * 0x18,0);
  *(int *)(param_1 + 0x26) = iVar2;
  if (iVar2 == 0) {
    FUN_004a3538();
  }
  local_6 = 2;
  local_37 = 0;
  while (pFVar1 = GetProcAddress(DAT_004da054,(LPCSTR)(uint)local_6), pFVar1 != (FARPROC)0x0) {
    local_2c = *(undefined4 *)(param_1 + 0x2a);
    local_12 = DAT_004da398;
    local_30 = 0;
    local_28 = 0;
    local_22 = 0;
    local_1a = 0;
    local_16 = 0;
    local_1e = 0;
    puVar3 = (undefined4 *)(local_37 * 0x18 + *(int *)(param_1 + 0x26));
    local_24 = 0;
    puVar3[3] = pFVar1;
    (*pFVar1)(&local_34);
    local_37 = local_37 + 1;
    *puVar3 = local_34;
    puVar3[4] = local_22;
    puVar3[1] = local_28;
    local_6 = local_6 + 1;
    puVar3[2] = (int)local_24;
  }
  return;
}


