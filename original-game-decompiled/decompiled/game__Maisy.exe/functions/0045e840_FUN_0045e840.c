
/* ==== FUN_0045e840 @ 0045e840 ==== 
 * signature: short __thiscall FUN_0045e840(void * this, int * param_1, int * param_2, int param_3, int * param_4, undefined4 param_5)
 * body: 0045e840-0045eb5c
 */

short __thiscall
FUN_0045e840(void *this,int *param_1,int *param_2,int param_3,int *param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int local_54;
  int local_50;
  int local_4c;
  undefined2 local_48;
  code *local_2c;
  code *local_28;
  code *local_24;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 local_8;
  char local_5;
  
  local_1c = this;
  (**(code **)(**(int **)((int)this + 4) + 0xf4))(param_5);
  local_54 = *param_4;
  local_50 = param_4[1];
  local_4c = param_4[2];
  local_48 = (undefined2)param_4[3];
  local_28 = *(code **)(*param_2 + 0x138);
  (*local_28)(&local_54,0x26);
  pcVar1 = *(code **)(*param_2 + 0x144);
  (*pcVar1)(&local_18);
  if ((param_3 <= local_18) || (bVar2 = true, local_18 < 0)) {
    bVar2 = false;
  }
  local_5 = '\0';
  if (bVar2) {
    do {
      if (local_5 != '\0') break;
      local_24 = *(code **)(*param_2 + 0x134);
      (*local_24)(&local_14);
      if (local_14 == 0x3e9) {
        local_2c = local_28;
        do {
          local_54 = local_14;
          local_50 = CONCAT22(uStack_e,local_10);
          local_4c = CONCAT22(uStack_a,local_c);
          local_48 = local_8;
          (*local_2c)(&local_54,0x26);
          (*pcVar1)(&local_18);
          if ((param_3 <= local_18) || (bVar2 = true, local_18 < 0)) {
            bVar2 = false;
          }
          if (bVar2) {
            (*local_24)(&local_14);
          }
          else {
            local_14 = 0xffff;
          }
        } while (local_14 == 0x3e9);
      }
      if (local_14 == 0xffff) {
        local_5 = '\x01';
      }
      else if (local_14 == 0x17) {
        piVar4 = (int *)FUN_00466a80((int)param_1);
        (**(code **)(*piVar4 + 0xbc))(param_2,CONCAT22(local_c,uStack_e),&local_14);
      }
      else if (local_14 == 0x19) {
        piVar4 = (int *)FUN_00466a60((int)param_1);
        (**(code **)(*piVar4 + 0xbc))(param_2,CONCAT22(local_c,uStack_e),&local_14);
      }
      else if ((local_14 == 0x3eb) || (local_14 == 0x3ec)) {
        (**(code **)(*param_1 + 0x100))(param_2,&local_14);
      }
      else if (local_14 == 0x22) {
        piVar4 = (int *)FUN_00466a90((int)param_1);
        (**(code **)(*piVar4 + 0xbc))(param_2,CONCAT22(local_c,uStack_e),&local_14);
        iVar5 = FUN_00466a60((int)param_1);
        FUN_004797a0(iVar5);
      }
      else if (local_14 == 0xd) {
        piVar4 = (int *)FUN_00466a70((int)param_1);
        (**(code **)(*piVar4 + 0xbc))(param_2,CONCAT22(local_c,uStack_e),&local_14);
      }
      else if (local_14 == 2) {
        piVar4 = (int *)FUN_00458a00((int)param_1);
        (**(code **)(*piVar4 + 0xbc))(param_2,CONCAT22(local_c,uStack_e),&local_14);
      }
      else if (local_14 == 0x16) {
        (**(code **)(*param_1 + 0xbc))(param_2,CONCAT22(local_c,uStack_e),&local_14);
      }
      else if (local_14 == 0x2b) {
        (**(code **)(*DAT_004dae3c + 0xbc))(param_2,CONCAT22(local_c,uStack_e),&local_14);
      }
      else if (local_14 != 0) {
        local_20 = (int *)0x0;
        local_24 = (code *)*local_1c;
        (**(code **)(local_24 + 0x170))
                  (*(undefined4 *)((int)local_1c + 0x26),param_2,&local_14,&local_20);
        if ((local_20 != (int *)0x0) && ((*(byte *)(local_20 + 8) & 1) != 0)) {
          uVar6 = (**(code **)(*param_2 + 0x110))(1);
          sVar3 = (**(code **)(local_24 + 0x180))(uVar6);
          (**(code **)(*local_20 + 0xf0))((int)sVar3);
        }
        (**(code **)(**(int **)((int)local_1c + 0x26) + 0xc))(local_20);
      }
      (*pcVar1)(&local_18);
      if ((param_3 <= local_18) || (bVar2 = true, local_18 < 0)) {
        bVar2 = false;
      }
      local_14 = -1;
    } while (bVar2);
  }
  (**(code **)(*(int *)local_1c[1] + 0xf4))(0);
  return (local_5 == '\0') - 1;
}


