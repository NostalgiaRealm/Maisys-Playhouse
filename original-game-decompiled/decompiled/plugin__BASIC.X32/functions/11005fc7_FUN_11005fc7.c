
/* ==== FUN_11005fc7 @ 11005fc7 ==== 
 * signature: undefined __cdecl FUN_11005fc7(undefined4 param_1, undefined1 * param_2, undefined4 param_3, undefined1 * param_4, int param_5, int param_6, int param_7, int param_8, int param_9, ushort * param_10)
 * body: 11005fc7-11006019
 */

void __cdecl
FUN_11005fc7(undefined4 param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
            int param_5,int param_6,int param_7,int param_8,int param_9,ushort *param_10)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  
  if (((param_5 != 0) && (param_6 != 0)) && (param_7 != 0)) {
    puVar1 = param_10;
    iVar3 = param_6;
    do {
      do {
        uVar2 = (uint)*puVar1;
        iVar3 = iVar3 - uVar2;
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *param_2 = *param_4;
          param_4 = param_4 + 1;
          param_2 = param_2 + 1;
        }
        param_4 = param_4 + puVar1[1];
        iVar3 = iVar3 - (uint)puVar1[1];
        puVar1 = puVar1 + 2;
      } while (iVar3 != 0);
      param_4 = param_4 + (param_9 - param_6);
      param_2 = param_2 + (param_8 - param_5);
      param_7 = param_7 + -1;
      puVar1 = param_10;
      iVar3 = param_6;
    } while (param_7 != 0);
  }
  return;
}


