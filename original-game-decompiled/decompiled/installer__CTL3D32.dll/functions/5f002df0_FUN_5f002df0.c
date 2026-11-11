
/* ==== FUN_5f002df0 @ 5f002df0 ==== 
 * signature: bool __cdecl FUN_5f002df0(HWND param_1, ushort param_2, short param_3, undefined4 param_4)
 * body: 5f002df0-5f002edb
 */

bool __cdecl FUN_5f002df0(HWND param_1,ushort param_2,short param_3,undefined4 param_4)

{
  HANDLE pvVar1;
  int iVar2;
  LONG LVar3;
  ushort *puVar4;
  int iVar5;
  CHAR local_10 [16];
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 != (HANDLE)0x0) {
    return false;
  }
  iVar5 = 0;
  puVar4 = &DAT_5f00b054;
  GetClassNameA(param_1,local_10,0x10);
  do {
    if ((*puVar4 & param_2) != 0) {
      iVar2 = lstrcmpA((LPCSTR)(puVar4 + -0xe),local_10);
      if (iVar2 == 0) {
        LVar3 = GetWindowLongA(param_1,-0x10);
        iVar2 = (*(code *)(&PTR_FUN_5f00b050)[iVar5 * 8])
                          (param_1,LVar3,param_2,CONCAT22((short)((uint)puVar4 >> 0x10),param_3),
                           param_4);
        if (iVar2 == 1) {
          if ((param_3 == 1) && (DAT_5f005152 == 0x10)) {
            FUN_5f001210(param_1,(&DAT_5f00a190)[iVar5 * 6]);
            return true;
          }
          FUN_5f001070(param_1,(&DAT_5f00a190)[iVar5 * 6]);
        }
        return (bool)('\x01' - (iVar2 == 0));
      }
    }
    puVar4 = puVar4 + 0x10;
    iVar5 = iVar5 + 1;
    if (&UNK_5f00b113 < puVar4) {
      return false;
    }
  } while( true );
}


