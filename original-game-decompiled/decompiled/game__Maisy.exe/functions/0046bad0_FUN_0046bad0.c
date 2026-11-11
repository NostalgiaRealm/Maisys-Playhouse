
/* ==== FUN_0046bad0 @ 0046bad0 ==== 
 * signature: undefined1 __thiscall FUN_0046bad0(void * this, int param_1, int param_2, short * param_3, int * param_4)
 * body: 0046bad0-0046c0b4
 */

undefined1 __thiscall FUN_0046bad0(void *this,int param_1,int param_2,short *param_3,int *param_4)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  void *pvVar5;
  undefined2 extraout_var;
  int *piVar7;
  int iVar8;
  short *psVar9;
  short local_9c [24];
  char local_6c [20];
  undefined4 local_58 [16];
  char local_17 [13];
  int *local_a;
  undefined1 local_5;
  undefined4 uVar6;
  
  local_5 = 1;
  if (param_1 < 0xd2) {
    if (param_1 == 0xd1) {
      iVar8 = *(int *)this;
      (**(code **)(iVar8 + 0x120))(1);
      (**(code **)(iVar8 + 0x314))(0);
      FUN_004142c0(local_58,0xd1,0,this,0);
      FUN_0046b770(this,(int)local_58);
      return local_5;
    }
    if (param_1 == 0xc9) {
      (**(code **)(*(int *)this + 0x24c))();
      return local_5;
    }
    if (param_1 == 0xca) {
      (**(code **)(*(int *)this + 0x250))(0);
      return local_5;
    }
    return 0;
  }
  if (0xd5 < param_1) {
    if (param_1 < 0x322) {
      if (param_1 == 0x321) {
        (**(code **)(*(int *)this + 0x148))(1);
        (**(code **)(**(int **)((int)this + 0x5a) + 0x204))();
        return local_5;
      }
      switch(param_1) {
      case 0xd8:
        if ((*(byte *)((int)this + 0x28) & 0x20) == 0) {
          iVar8 = *(int *)this;
          (**(code **)(iVar8 + 0x158))(1);
          (**(code **)(iVar8 + 0x2f0))(0,0);
          return local_5;
        }
        break;
      case 0xd9:
        if ((*(byte *)((int)this + 0x28) & 0x20) != 0) {
          (**(code **)(*(int *)this + 0x158))(0);
          return local_5;
        }
        break;
      case 0xda:
        iVar8 = *(int *)this;
        uVar4 = *(uint *)((int)this + 0x26) & 0x200000;
        (**(code **)(iVar8 + 0x158))(CONCAT31((int3)(uVar4 >> 8),uVar4 == 0));
        if (((((*(byte *)((int)this + 0x28) & 0x20) != 0) &&
             (sVar2 = *(short *)((int)this + 0x46), sVar2 != 4)) && (sVar2 != 7)) &&
           ((sVar2 != 0 && (sVar2 != 1)))) {
          (**(code **)(iVar8 + 0x2f0))(0,0);
          return local_5;
        }
        break;
      case 0xdb:
        (**(code **)(*(int *)this + 0x318))();
        return local_5;
      default:
        return 0;
      case 0xe2:
        if (*(void **)((int)this + 0x3a) != (void *)0x0) {
          FUN_00404d20(*(void **)((int)this + 0x3a),(int)this,(char *)0x0,0,0);
          return local_5;
        }
        if (*(short *)(*(int *)((int)this + 4) + 0x22) == 1) {
          FUN_00404d20(*(void **)(*(int *)((int)this + 4) + 0x82),(int)this,(char *)0x0,0,0);
          return local_5;
        }
        break;
      case 0xe4:
        if (*(void **)((int)this + 0x3a) != (void *)0x0) {
          FUN_00404db0(*(void **)((int)this + 0x3a),(int)this);
          return local_5;
        }
        if (*(short *)(*(int *)((int)this + 4) + 0x22) == 1) {
          FUN_00404db0(*(void **)(*(int *)((int)this + 4) + 0x82),(int)this);
          return local_5;
        }
      }
    }
    else {
      if (param_1 < 0x4b1) {
        if (param_1 == 0x4b0) {
          psVar9 = local_9c;
          for (iVar8 = 0xb; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined4 *)psVar9 = *(undefined4 *)param_3;
            param_3 = param_3 + 2;
            psVar9 = psVar9 + 2;
          }
          *psVar9 = *param_3;
          cVar1 = FUN_00417010(param_2,(undefined4 *)local_17);
          if (cVar1 == '\0') {
            (**(code **)(*(int *)this + 0x90))(param_2,local_9c);
            return local_5;
          }
          FUN_00416070(param_4,this,local_17,local_9c,0);
          return local_5;
        }
        if (param_1 == 0x322) {
          (**(code **)(*(int *)this + 0x148))(0);
          (**(code **)(**(int **)((int)this + 0x5a) + 0x204))();
          return local_5;
        }
        if (param_1 == 0x323) {
          if ((*(byte *)((int)this + 0x29) & 1) == 0) {
            (**(code **)(*(int *)this + 0x148))(1);
            (**(code **)(**(int **)((int)this + 0x5a) + 0x204))();
            return local_5;
          }
          (**(code **)(*(int *)this + 0x148))(0);
          (**(code **)(**(int **)((int)this + 0x5a) + 0x204))();
          return local_5;
        }
        return 0;
      }
      if (param_1 < 0x6a6) {
        if (param_1 != 0x6a5) {
          if (param_1 != 0x514) {
            return 0;
          }
          cVar1 = FUN_00417010(param_2,(undefined4 *)local_6c);
          if (cVar1 == '\0') {
            (**(code **)(*(int *)this + 0x8c))(param_2,param_3);
            return local_5;
          }
          FUN_00415bd0(param_4,this,local_6c,param_3,0);
          return local_5;
        }
        pvVar5 = FUN_0046da90(this,'\x01','\x01');
        if (pvVar5 != (void *)0x0) {
          sVar2 = FUN_00412fe0((int)this);
          if (sVar2 == 0) {
            sVar2 = 0x32;
          }
          uVar6 = CONCAT22(extraout_var,sVar2);
          piVar7 = FUN_0046da90(this,'\x01','\x01');
          FUN_00466a70(*(int *)((int)this + 4));
          FUN_0044df80(piVar7,uVar6);
          return local_5;
        }
      }
      else if (param_1 == 0x6a7) {
        pvVar5 = FUN_0046da90(this,'\x01','\x01');
        if (pvVar5 != (void *)0x0) {
          sVar2 = FUN_00412fe0((int)this);
          iVar8 = (int)sVar2;
          if (iVar8 == 0) {
            iVar8 = 0x32;
          }
          piVar7 = FUN_0046da90(this,'\x01','\x01');
          (**(code **)(*piVar7 + 0x80))(0x7fffffff,iVar8);
          return local_5;
        }
      }
      else {
        if (param_1 != 0x6a9) {
          return 0;
        }
        pvVar5 = FUN_0046da90(this,'\x01','\x01');
        if (pvVar5 != (void *)0x0) {
          uVar3 = FUN_00412fe0((int)this);
          if (uVar3 == 0) {
            uVar3 = 0x32;
          }
          uVar4 = (uint)uVar3;
          local_a = (int *)FUN_00466a70(*(int *)((int)this + 4));
          iVar8 = *local_a;
          pvVar5 = FUN_0046da90(this,'\x01','\x01');
          (**(code **)(iVar8 + 0xe4))(pvVar5,uVar4);
        }
      }
    }
    return local_5;
  }
  if (param_1 == 0xd5) {
    iVar8 = *(int *)this;
    if ((*(byte *)((int)this + 0x29) & 0x10) == 0) {
      (**(code **)(iVar8 + 0x120))(1);
      (**(code **)(iVar8 + 0x314))(0);
      FUN_004142c0(local_58,0xd1,0,this,0);
      FUN_0046b770(this,(int)local_58);
      return local_5;
    }
    (**(code **)(iVar8 + 0x120))(0);
    (**(code **)(iVar8 + 0x314))(0);
    FUN_004142c0(local_58,0xd2,0,this,0);
    FUN_0046b770(this,(int)local_58);
    return local_5;
  }
  if (param_1 == 0xd2) {
    iVar8 = *(int *)this;
    (**(code **)(iVar8 + 0x120))(0);
    (**(code **)(iVar8 + 0x314))(0);
    FUN_004142c0(local_58,0xd2,0,this,0);
    FUN_0046b770(this,(int)local_58);
    return local_5;
  }
  return 0;
}


