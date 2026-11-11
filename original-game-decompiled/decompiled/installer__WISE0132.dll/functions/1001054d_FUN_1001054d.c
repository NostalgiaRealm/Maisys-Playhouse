
/* ==== FUN_1001054d @ 1001054d ==== 
 * signature: undefined __cdecl FUN_1001054d(LPCSTR param_1, LPSTR param_2)
 * body: 1001054d-100105d1
 */

void __cdecl FUN_1001054d(LPCSTR param_1,LPSTR param_2)

{
  int iVar1;
  ushort uVar2;
  CHAR local_24;
  CHAR local_23 [31];
  
  *param_2 = '\0';
  if (*param_1 != '\0') {
    local_24 = '%';
    lstrcpyA(local_23,param_1);
    lstrcatA(&local_24,&DAT_1001f764);
    uVar2 = 0;
    if (DAT_1002402c != 0) {
      do {
        iVar1 = lstrcmpiA((LPCSTR)((uint)uVar2 * 0x11 + DAT_10023efc),&local_24);
        if (iVar1 == 0) break;
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_1002402c);
      if (uVar2 < DAT_1002402c) {
        lstrcpyA(param_2,(LPCSTR)((uint)uVar2 * 0x100 + DAT_100238f8));
      }
    }
  }
  return;
}


