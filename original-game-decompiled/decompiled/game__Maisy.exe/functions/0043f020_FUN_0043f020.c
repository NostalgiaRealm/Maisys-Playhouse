
/* ==== FUN_0043f020 @ 0043f020 ==== 
 * signature: bool __cdecl FUN_0043f020(int param_1, byte * param_2)
 * body: 0043f020-0043f0e9
 */

bool __cdecl FUN_0043f020(int param_1,byte *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  HANDLE hObject;
  undefined3 extraout_var;
  byte bVar4;
  uint uVar5;
  undefined1 local_6;
  byte local_5;
  
  bVar4 = *param_2;
  bVar3 = false;
  hObject = CreateFileA(s_____vwin32_004db578,0x80000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,
                        (HANDLE)0x0);
  if ((bVar4 < 0x41) || (0x5a < bVar4)) {
    cVar1 = -0x60;
  }
  else {
    cVar1 = -0x40;
  }
  bVar4 = bVar4 + cVar1;
  if (hObject != (HANDLE)0xffffffff) {
    if (param_1 == 0) {
      local_6 = 2;
      local_5 = 0;
      bVar2 = FUN_0043efb0(hObject,&local_6,(uint)bVar4);
      if (CONCAT31(extraout_var,bVar2) != 0) {
        if (local_5 != 0) {
          for (uVar5 = (uint)local_5; uVar5 != 0; uVar5 = uVar5 - 1) {
            local_5 = 1;
            local_6 = 1;
            FUN_0043efb0(hObject,&local_6,(uint)bVar4);
          }
        }
        bVar3 = true;
      }
    }
    else {
      local_5 = 1;
      local_6 = 0;
      bVar3 = FUN_0043efb0(hObject,&local_6,(uint)bVar4);
    }
  }
  CloseHandle(hObject);
  return bVar3;
}


