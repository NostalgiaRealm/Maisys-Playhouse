
/* ==== imagefxmod @ 110156b0 ==== 
 * signature: uint __cdecl imagefxmod(char * param_1)
 * body: 110156b0-11015800
 */

uint __cdecl imagefxmod(char *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_EAX;
  undefined3 uVar7;
  undefined3 extraout_var;
  uint uVar5;
  undefined4 uVar6;
  undefined3 extraout_var_00;
  
                    /* 0x156b0  17  imagefxmod */
  uVar4 = 1;
  puVar1 = *(undefined4 **)(param_1 + 0x1a);
  pcVar2 = *(char **)(param_1 + 0x16);
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 < 0x1d) {
    if (iVar3 == 0x1c) {
      uVar5 = FUN_11015900(param_1,pcVar2,(uint)puVar1);
      return uVar5;
    }
    uVar7 = 0;
    switch(iVar3) {
    case 0:
      param_1[0xc] = -0x7c;
      param_1[0xd] = '\x03';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x10] = '\x06';
      param_1[0x11] = '\0';
      return 0;
    case 1:
      uVar5 = FUN_11015a30((undefined4 *)param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_11015840((undefined4 *)param_1,(int)pcVar2,*puVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_110158b0((int)pcVar2,(int)puVar1);
      return uVar5 & 0xffffff00;
    case 8:
      return 0;
    case 0xe:
      FUN_11004840((undefined4 *)param_1,10,0);
      uVar5 = FUN_11004840((undefined4 *)param_1,5,0);
      return uVar5 & 0xffffff00;
    case 0x10:
      uVar4 = FUN_110168b0();
      return CONCAT31(extraout_var,uVar4);
    }
  }
  else {
    uVar7 = (undefined3)((uint)in_EAX >> 8);
    if (iVar3 < 0x71) {
      if (iVar3 == 0x70) {
        uVar6 = FUN_11015ac0(param_1,pcVar2,(size_t)puVar1);
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      if (iVar3 != 0x1e) {
        return CONCAT31(uVar7,1);
      }
      uVar5 = FUN_11015920((undefined4 *)param_1,(int)pcVar2,puVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 == 0x19d) {
      uVar6 = FUN_110159e0(param_1,(int)pcVar2);
      *(char *)puVar1 = (char)uVar6;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
    if (iVar3 != 0x1b2) {
      return CONCAT31(uVar7,1);
    }
    uVar4 = FUN_110168c0((undefined4 *)param_1,(int)pcVar2);
    uVar7 = extraout_var_00;
  }
  return CONCAT31(uVar7,uVar4);
}


