
/* ==== FUN_11017a90 @ 11017a90 ==== 
 * signature: undefined1 __cdecl FUN_11017a90(undefined4 * param_1, int param_2)
 * body: 11017a90-11017ba7
 */

undefined1 __cdecl FUN_11017a90(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined1 local_1;
  
  local_1 = 1;
  iVar2 = *(int *)((int)param_1 + 0x1a);
  iVar3 = *(int *)(iVar2 + 0xc);
  if ((iVar3 == 0xdd) && (*(short *)(param_2 + 0x34) == 0x1c)) {
    *(undefined4 *)(param_2 + 0x36) = 0;
  }
  if (iVar3 == 0x7d2) {
    FUN_110048a0(param_1,0xe,0,param_2 + 0x62);
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x6c) = 0;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined2 *)(param_2 + 0x62) = 0x69;
  }
  if ((iVar3 == 0x134) && (*(short *)(iVar2 + 0x24) == 6)) {
    if ((*(char *)(param_2 + 0x14) != '\0') &&
       ((*(char *)(iVar2 + 0x28) != *(char *)(param_2 + 0x14) &&
        (cVar4 = FUN_11017bf0(), cVar4 != *(char *)(param_2 + 0x14))))) {
      return 1;
    }
    if ((*(ushort *)(iVar2 + 0x26) & 0x1100) == *(ushort *)(param_2 + 0x12)) {
      puVar1 = (uint *)(param_2 + 0xc);
      cVar4 = FUN_110062b0(puVar1,'\x03');
      if (((cVar4 == '\0') || (*(short *)(iVar2 + 0x2e) != 0)) &&
         ((cVar4 = FUN_110062b0(puVar1,'\x04'), cVar4 == '\0' || (*(short *)(iVar2 + 0x2e) != 2))))
      {
        cVar4 = FUN_110062b0(puVar1,'\x05');
        if (cVar4 == '\0') {
          return 1;
        }
        if (*(short *)(iVar2 + 0x2e) != 1) {
          return 1;
        }
      }
      FUN_11017bb0(param_1,param_2);
      local_1 = 0;
    }
  }
  return local_1;
}


