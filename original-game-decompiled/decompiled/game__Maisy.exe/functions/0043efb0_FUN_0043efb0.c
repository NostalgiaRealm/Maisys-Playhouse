
/* ==== FUN_0043efb0 @ 0043efb0 ==== 
 * signature: bool __cdecl FUN_0043efb0(HANDLE param_1, undefined4 param_2, undefined4 param_3)
 * body: 0043efb0-0043f01d
 */

bool __cdecl FUN_0043efb0(HANDLE param_1,undefined4 param_2,undefined4 param_3)

{
  BOOL BVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD local_24;
  undefined4 local_20 [6];
  uint local_8;
  
  puVar3 = local_20;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_20[0] = param_3;
  local_20[1] = param_2;
  local_8 = 0x8000;
  local_20[3] = 0x440d;
  local_20[2] = 0x848;
  BVar1 = DeviceIoControl(param_1,1,local_20,0x1c,local_20,0x1c,&local_24,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    return false;
  }
  return (local_8 & 0x8000) == 0;
}


