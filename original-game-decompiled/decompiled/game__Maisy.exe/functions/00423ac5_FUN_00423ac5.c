
/* ==== FUN_00423ac5 @ 00423ac5 ==== 
 * signature: undefined __cdecl FUN_00423ac5(undefined4 param_1, undefined1 * param_2, undefined4 param_3, undefined1 * param_4, int param_5, uint param_6, int param_7, uint param_8, int param_9, int param_10, ushort * param_11)
 * body: 00423ac5-00423b34
 */

void __cdecl
FUN_00423ac5(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
            int param_5,uint param_6,int param_7,uint param_8,int param_9,int param_10,
            ushort *param_11)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  uint local_8;
  
  if ((((param_6 != 0) && (param_5 != 0)) && (param_7 != 0)) && (param_8 != 0)) {
    local_8 = param_8;
    uVar4 = param_8 >> 1;
    do {
      bVar6 = uVar4 < param_6;
      uVar4 = uVar4 - param_6;
      if (bVar6) {
        uVar4 = uVar4 + param_8;
        puVar1 = param_11;
        iVar5 = param_7;
        do {
          uVar3 = (uint)*puVar1;
          iVar5 = iVar5 - uVar3;
          for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            *param_2 = *param_4;
            param_4 = param_4 + 1;
            param_2 = param_2 + 1;
          }
          puVar2 = puVar1 + 1;
          param_4 = param_4 + *puVar2;
          puVar1 = puVar1 + 2;
          iVar5 = iVar5 - (uint)*puVar2;
        } while (iVar5 != 0);
        param_2 = param_2 + (param_9 - param_5);
      }
      else {
        param_4 = param_4 + param_7;
      }
      param_4 = param_4 + (param_10 - param_7);
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return;
}


