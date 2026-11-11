
/* ==== FUN_130024e0 @ 130024e0 ==== 
 * signature: undefined4 __cdecl FUN_130024e0(undefined2 * param_1)
 * body: 130024e0-130026d1
 */

undefined4 __cdecl FUN_130024e0(undefined2 *param_1)

{
  uint uVar1;
  HDC hdc;
  int iVar2;
  int iVar3;
  _SYSTEM_INFO local_144;
  _MEMORYSTATUS local_120;
  undefined1 local_100 [256];
  
  *param_1 = 0x14;
  param_1[1] = 1;
  GetVersion();
  FUN_13003920(local_100,s__d__d_130082f4);
  FUN_13003cb0(0,param_1 + 2,(int)local_100);
  local_120.dwLength = 0x20;
  GlobalMemoryStatus(&local_120);
  param_1[0x26] = 1;
  *(SIZE_T *)(param_1 + 0x27) = local_120.dwTotalPhys;
  local_120.dwLength = 0x20;
  GlobalMemoryStatus(&local_120);
  param_1[0x29] = 1;
  *(SIZE_T *)(param_1 + 0x2a) = local_120.dwAvailPhys;
  FUN_13003cb0(0,param_1 + 0x2c,0x130082e4);
  FUN_13003cb0(0,param_1 + 0xb,0x130082dc);
  GetSystemInfo(&local_144);
  if (local_144.dwProcessorType == 0x182) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
    if (local_144.dwProcessorType != 0x1e6) {
      uVar1 = -(uint)(local_144.dwProcessorType == 0x24a) & 4;
    }
  }
  if (4 < uVar1) {
    uVar1 = 0;
  }
  FUN_13003cb0(0,param_1 + 0x35,(int)(&PTR_s_Unknown_CPU_130081a0)[uVar1]);
  FUN_13003cb0(0,param_1 + 0x14,(int)(&PTR_s_Unknown_CPU_130081a0)[uVar1]);
  GetSystemInfo(&local_144);
  if ((local_144.dwProcessorType == 0x1e6) || (local_144.dwProcessorType == 0x24a)) {
    FUN_13003cb0(0,param_1 + 0x1d,0x130082d0);
  }
  FUN_13003cb0(0,param_1 + 0x3e,0x130082e4);
  hdc = GetDC((HWND)0x0);
  iVar2 = GetDeviceCaps(hdc,0xc);
  param_1[0x47] = 1;
  *(int *)(param_1 + 0x48) = iVar2;
  ReleaseDC((HWND)0x0,hdc);
  iVar2 = GetSystemMetrics(0);
  iVar3 = GetSystemMetrics(1);
  param_1[0x4c] = (short)iVar3;
  param_1[0x4a] = 10;
  param_1[0x4b] = (short)iVar2;
  iVar2 = GetKeyboardType(0);
  if ((iVar2 == 0) || (7 < iVar2)) {
    iVar2 = 0;
  }
  FUN_13003cb0(0,param_1 + 0x4d,(int)(&PTR_s_Unknown_Keyboard_130081b8)[iVar2]);
  return 0;
}


