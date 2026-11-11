
/* ==== FUN_0040754e @ 0040754e ==== 
 * signature: undefined __cdecl FUN_0040754e(LPCSTR param_1, int param_2)
 * body: 0040754e-00407703
 */

void __cdecl FUN_0040754e(LPCSTR param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  char local_34c [256];
  byte local_24c;
  undefined1 auStack_108 [4];
  CHAR local_104 [256];
  
  iVar2 = lstrlenA(param_1);
  if (3 < iVar2) {
    GetWindowsDirectoryA(local_104,0x100);
    iVar2 = lstrcmpiA(param_1,local_104);
    if (iVar2 != 0) {
      GetSystemDirectoryA(local_104,0x100);
      iVar2 = lstrcmpiA(param_1,local_104);
      if ((iVar2 != 0) &&
         ((DAT_0041389c == (LPCSTR)0x0 || (iVar2 = lstrcmpiA(param_1,DAT_0041389c), iVar2 != 0)))) {
        lstrcpyA(local_104,param_1);
        lstrcatA(local_104,&DAT_0041030c);
        bVar1 = FUN_004089a3(local_104,0x17,local_34c);
        iVar2 = CONCAT31(extraout_var,bVar1);
        while (iVar2 == 0) {
          if ((local_24c & 0x10) == 0) {
            if (param_2 != 0) {
              lstrcpyA(local_104,param_1);
              lstrcatA(local_104,&DAT_004100cc);
              lstrcatA(local_104,local_34c);
              FUN_00408980(local_104,0);
              FUN_00408713(local_104);
            }
          }
          else if (local_34c[0] != '.') {
            lstrcpyA(local_104,param_1);
            lstrcatA(local_104,&DAT_004100cc);
            lstrcatA(local_104,local_34c);
            FUN_0040754e(local_104,param_2);
            iVar2 = lstrlenA(local_104);
            auStack_108[iVar2] = 0;
            FUN_004086d2(local_104);
          }
          bVar1 = FUN_004089e5(local_34c);
          iVar2 = CONCAT31(extraout_var_00,bVar1);
        }
        FUN_00408a22((int)local_34c);
        FUN_004086d2(param_1);
      }
    }
  }
  return;
}


