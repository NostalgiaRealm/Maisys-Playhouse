
/* ==== FUN_11006168 @ 11006168 ==== 
 * signature: undefined __cdecl FUN_11006168(undefined4 param_1, undefined1 * param_2, undefined4 param_3, undefined1 * param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, ushort * param_11)
 * body: 11006168-110061e2
 */

void __cdecl
FUN_11006168(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
            ushort *param_11)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  bool bVar5;
  uint local_c;
  int local_8;
  
  if ((((param_8 != 0) && (param_5 != 0)) && (param_7 != 0)) && (param_6 != 0)) {
    local_8 = param_6;
    local_c = param_6 - 1U >> 1;
    iVar3 = param_7;
    puVar4 = param_11;
    do {
      do {
        uVar1 = *param_4;
        for (uVar2 = (uint)*puVar4; uVar2 != 0; uVar2 = uVar2 - 1) {
          *param_2 = uVar1;
          param_2 = param_2 + 1;
        }
        param_4 = param_4 + 1;
        iVar3 = iVar3 + -1;
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0);
      param_2 = param_2 + (param_9 - param_5);
      bVar5 = local_c < param_8 - 1U;
      local_c = local_c - (param_8 - 1U);
      if (bVar5) {
        local_c = local_c + (param_6 - 1U);
        iVar3 = param_10 - param_7;
      }
      else {
        iVar3 = -param_7;
      }
      param_4 = param_4 + iVar3;
      local_8 = local_8 + -1;
      iVar3 = param_7;
      puVar4 = param_11;
    } while (local_8 != 0);
  }
  return;
}


