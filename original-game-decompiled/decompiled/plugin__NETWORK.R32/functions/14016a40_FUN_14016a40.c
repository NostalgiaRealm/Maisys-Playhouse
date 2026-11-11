
/* ==== FUN_14016a40 @ 14016a40 ==== 
 * signature: int __cdecl FUN_14016a40(int param_1, uint * param_2, undefined4 param_3, undefined4 param_4)
 * body: 14016a40-14016c76
 */

int __cdecl FUN_14016a40(int param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int local_18;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  
  iVar3 = 0x10000;
  uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026584);
  if ((char)uVar1 != '\0') {
    local_e = 0;
    local_a = 0;
    local_6 = 0;
    local_12 = 0xffffffff;
    local_14 = 0x66;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_18);
    iVar3 = (*pcVar2)(local_18,param_1,param_4,&local_14);
    DAT_14028e48 = iVar3;
    if (iVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_18);
      DAT_14028e48 = (*pcVar2)(local_18,param_1,param_1 + 10);
      FUN_14008b20(0,(undefined2 *)(param_1 + 10),(int)&local_14);
      if (local_6 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
        DAT_14028e48 = (*pcVar2)(local_18,local_6);
        local_6 = 0;
        local_e = 0;
        local_a = 0;
      }
    }
  }
  uVar1 = FUN_14008910(param_2,(uint *)s_targetframe_14026ce8);
  if ((char)uVar1 != '\0') {
    local_e = 0;
    local_a = 0;
    local_6 = 0;
    local_12 = 0xffffffff;
    local_14 = 0x66;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_18);
    iVar3 = (*pcVar2)(local_18,param_1,param_4,&local_14);
    DAT_14028e48 = iVar3;
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x44) != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
        DAT_14028e48 = (*pcVar2)(local_18,*(undefined4 *)(param_1 + 0x44));
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0;
      }
      FUN_14008b20(0,(undefined2 *)(param_1 + 0x36),(int)&local_14);
      if (local_6 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
        DAT_14028e48 = (*pcVar2)(local_18,local_6);
      }
    }
  }
  return iVar3;
}


