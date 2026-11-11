
/* ==== FUN_1400b6b0 @ 1400b6b0 ==== 
 * signature: int __cdecl FUN_1400b6b0(int param_1, uint * param_2, undefined4 param_3, short * param_4)
 * body: 1400b6b0-1400b81b
 */

int __cdecl FUN_1400b6b0(int param_1,uint *param_2,undefined4 param_3,short *param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int local_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 local_e;
  undefined4 local_a;
  int local_6;
  
  uVar1 = FUN_14008910(param_2,(uint *)s_sendflatmessage_140265cc);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_14008910(param_2,(uint *)s_fields_140265b8);
    if ((char)uVar1 == '\0') {
      iVar2 = 0x10000;
    }
    else {
      local_14 = 0x66;
      uStack_12 = 0xffff;
      uStack_10 = 0xffff;
      local_e = 0;
      local_a = 0;
      local_6 = 0;
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_18);
      iVar2 = (*pcVar3)(local_18,param_1,param_4,&local_14);
      DAT_14028e48 = iVar2;
      if (iVar2 == 0) {
        pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&local_18);
        DAT_14028e48 = (*pcVar3)(local_18,param_1,(undefined2 *)(param_1 + 0xd6));
        FUN_14008b20(0,(undefined2 *)(param_1 + 0xd6),(int)&local_14);
        if (local_6 != 0) {
          pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_18);
          DAT_14028e48 = (*pcVar3)(local_18,local_6);
        }
        return 0;
      }
    }
    return iVar2;
  }
  if ((*param_4 == 0x66) && (*(char **)(param_4 + 7) != (char *)0x0)) {
    local_14 = (undefined2)*(undefined4 *)(param_4 + 5);
    uStack_12 = (undefined2)((uint)*(undefined4 *)(param_4 + 5) >> 0x10);
    iVar2 = FUN_1400ccb0(param_1,*(char **)(param_4 + 7),(undefined4 *)&local_14);
    return iVar2;
  }
  return 0x10000;
}


