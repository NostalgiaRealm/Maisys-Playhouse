
/* ==== FUN_5f001b60 @ 5f001b60 ==== 
 * signature: undefined __cdecl FUN_5f001b60(HWND param_1, ushort param_2, undefined4 param_3)
 * body: 5f001b60-5f001c0f
 */

void __cdecl FUN_5f001b60(HWND param_1,ushort param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  int local_4;
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 == (HANDLE)0x0) {
    FUN_5f002df0(param_1,param_2,0,param_3);
    return;
  }
  pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_5f005144);
  if (pvVar1 == (HANDLE)0x0) {
    local_4 = 0x29a;
    SendMessageA(param_1,0x1944,0,(LPARAM)&local_4);
    if (local_4 == 0x29a) {
      SendMessageA(param_1,0x1943,0,(LPARAM)&local_4);
      if (local_4 == 0x29a) {
        RemovePropA(param_1,(LPCSTR)(uint)DAT_5f00513e);
        FUN_5f002df0(param_1,param_2,0,param_3);
      }
    }
  }
  return;
}


