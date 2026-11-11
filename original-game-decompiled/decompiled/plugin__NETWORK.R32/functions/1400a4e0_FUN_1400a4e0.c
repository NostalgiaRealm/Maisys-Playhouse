
/* ==== FUN_1400a4e0 @ 1400a4e0 ==== 
 * signature: int __cdecl FUN_1400a4e0(int param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 1400a4e0-1400a65f
 */

int __cdecl FUN_1400a4e0(int param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  
  uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026584);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)&DAT_14026570);
    if ((((char)uVar1 != '\0') && (*param_4 == 0x14)) && (param_4[1] != 0)) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x48),1,2,(int *)&local_14);
      DAT_14028e48 = (*pcVar2)(CONCAT22(uStack_12,local_14),param_1,*(undefined4 *)(param_1 + 0x18),
                               0);
      return 0;
    }
    iVar3 = 0x10000;
  }
  else {
    local_14 = 0x66;
    uStack_12 = 0xffff;
    uStack_10 = 0xffff;
    local_e = 0;
    local_a = 0;
    local_6 = 0;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_18);
    iVar3 = (*pcVar2)(local_18,param_1,param_4,&local_14);
    DAT_14028e48 = iVar3;
    if (iVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_18);
      DAT_14028e48 = (*pcVar2)(local_18,param_1,(undefined2 *)(param_1 + 10));
      FUN_14008b20(0,(undefined2 *)(param_1 + 10),(int)&local_14);
      if (local_6 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
        DAT_14028e48 = (*pcVar2)(local_18,local_6);
      }
      return 0;
    }
  }
  return iVar3;
}


