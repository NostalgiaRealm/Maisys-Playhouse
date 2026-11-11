
/* ==== FUN_004032d0 @ 004032d0 ==== 
 * signature: undefined __thiscall FUN_004032d0(void * this, int * param_1, int param_2, char param_3)
 * body: 004032d0-0040348f
 */

void __thiscall FUN_004032d0(void *this,int *param_1,int param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined4 local_56;
  undefined4 local_52;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined4 local_42;
  undefined4 local_3e;
  undefined1 local_3a;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined4 local_1a;
  undefined2 local_16;
  undefined2 uStack_14;
  undefined1 local_12;
  undefined1 uStack_11;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  if (param_3 != '\0') {
    local_38 = 0;
    local_34 = 0xff;
    local_32 = 0xff;
    local_20 = 100;
    local_22 = 0;
    local_24 = 100;
    local_26 = 0;
    local_2e = 0;
    local_2a = 0xffffffff;
    local_1a = 0;
    local_16 = 0;
    uStack_14 = 0;
    local_12 = 0;
    iVar1 = *param_1;
    (**(code **)(iVar1 + 0x204))(&local_38);
    (**(code **)(iVar1 + 0x20c))(&local_38);
    (**(code **)(iVar1 + 0x208))(&local_38);
    pcVar2 = *(code **)(iVar1 + 0x218);
    do {
      cVar3 = (*pcVar2)(&local_38);
    } while (cVar3 == '\0');
    (**(code **)(iVar1 + 0x214))(&local_38,0);
    (**(code **)(iVar1 + 0x19c))();
    return;
  }
  iVar5 = 1;
  iVar1 = *(int *)(*(int *)((int)this + 0x82) + 0x26);
  uStack_14 = (undefined2)iVar1;
  local_12 = (undefined1)((uint)iVar1 >> 0x10);
  uStack_11 = (undefined1)((uint)iVar1 >> 0x18);
  if (0 < iVar1) {
    do {
      FUN_00430370(*(void **)((int)this + 0x82),iVar5,&local_10);
      if ((param_1 == local_10) && (param_2 == local_c)) {
        local_60 = local_8;
        (**(code **)(*local_10 + 0x214))(&local_60,0);
        uVar6 = 0;
        uVar4 = FUN_00458a00(*(int *)((int)this + 0x2a));
        (**(code **)(*local_10 + 0x1c8))(uVar4,uVar6);
        FUN_00430090(*(void **)((int)this + 0x82),iVar5);
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= CONCAT13(uStack_11,CONCAT12(local_12,uStack_14)));
  }
  local_10 = param_1;
  local_c = param_2;
  local_4a = 0;
  local_5c = 0xff;
  local_60 = 0;
  local_5a = 0xff;
  local_56 = 0;
  local_4e = 0;
  local_48 = 100;
  local_42 = 0;
  local_4c = 100;
  local_3e = 0;
  local_52 = 0xffffffff;
  local_3a = 0;
  iVar1 = *param_1;
  (**(code **)(iVar1 + 0x204))(&local_60);
  (**(code **)(iVar1 + 0x20c))(&local_60);
  (**(code **)(iVar1 + 0x208))(&local_60);
  local_8 = local_60;
  (**(code **)(**(int **)((int)this + 0x82) + 0xe8))(&local_10);
  uVar6 = 1;
  uVar4 = FUN_00458a00(*(int *)((int)this + 0x2a));
  (**(code **)(*local_10 + 0x1c4))(uVar4,uVar6);
  return;
}


