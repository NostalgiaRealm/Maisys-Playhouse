
/* ==== FUN_1000ba71 @ 1000ba71 ==== 
 * signature: undefined1 * __cdecl FUN_1000ba71(LPCSTR param_1)
 * body: 1000ba71-1000bb0d
 */

undefined1 * __cdecl FUN_1000ba71(LPCSTR param_1)

{
  int iVar1;
  ushort uVar2;
  undefined1 *puVar3;
  CHAR local_24;
  CHAR local_23 [31];
  
  if (*param_1 != '%') {
    local_24 = '%';
    lstrcpyA(local_23,param_1);
    lstrcatA(&local_24,&DAT_1001f764);
    param_1 = &local_24;
  }
  uVar2 = 0;
  if (DAT_1002402c != 0) {
    do {
      iVar1 = lstrcmpiA((LPCSTR)((uint)uVar2 * 0x11 + DAT_10023efc),param_1);
      if (iVar1 == 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_1002402c);
  }
  lstrcpyA((LPSTR)((uint)uVar2 * 0x11 + DAT_10023efc),param_1);
  puVar3 = (undefined1 *)((uint)uVar2 * 0x100 + DAT_100238f8);
  if (DAT_1002402c <= uVar2) {
    DAT_1002402c = DAT_1002402c + 1;
    *puVar3 = 0;
  }
  return puVar3;
}


