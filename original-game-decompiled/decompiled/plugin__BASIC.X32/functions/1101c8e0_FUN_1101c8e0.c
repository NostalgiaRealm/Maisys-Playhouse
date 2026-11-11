
/* ==== FUN_1101c8e0 @ 1101c8e0 ==== 
 * signature: undefined4 __cdecl FUN_1101c8e0(undefined4 * param_1, int param_2, short * param_3, char param_4, undefined2 * param_5)
 * body: 1101c8e0-1101c9ac
 */

undefined4 __cdecl
FUN_1101c8e0(undefined4 *param_1,int param_2,short *param_3,char param_4,undefined2 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  iVar3 = -1;
  uVar4 = 0;
  iVar2 = (int)*param_3;
  if (iVar2 == 0x1f9) {
    uVar4 = 0xffe5;
    iVar3 = *(int *)(param_3 + 1);
  }
  if ((-1 < iVar3) && (iVar3 < *(int *)(param_2 + 0x14))) {
    iVar3 = iVar3 * 0xe;
    iVar2 = *(int *)(param_2 + 0x1c) + iVar3;
    if (*(int *)(iVar2 + 2) == 0) {
      FUN_11014c20(param_1,iVar2);
    }
    if (*(int *)(*(int *)(param_2 + 0x1c) + 2 + iVar3) == 0) {
      *param_5 = 0xffe5;
      uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 6 + iVar3);
      *(undefined4 *)(param_5 + 3) = 0;
      *(undefined4 *)(param_5 + 1) = uVar1;
    }
    else if (param_4 == '\0') {
      *param_3 = 0x19;
      uVar4 = 0;
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 2 + iVar3);
    }
    else {
      *param_3 = 0x1fc;
      uVar4 = 0;
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 2 + iVar3);
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
    }
    iVar2 = *(int *)(param_2 + 0x1c);
    *(undefined4 *)(iVar2 + 2 + iVar3) = 0;
  }
  return CONCAT22((short)((uint)iVar2 >> 0x10),uVar4);
}


