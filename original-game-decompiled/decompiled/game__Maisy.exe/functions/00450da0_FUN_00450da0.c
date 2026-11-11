
/* ==== FUN_00450da0 @ 00450da0 ==== 
 * signature: undefined __thiscall FUN_00450da0(void * this, int * param_1, uint param_2)
 * body: 00450da0-00450e98
 */

void __thiscall FUN_00450da0(void *this,int *param_1,uint param_2)

{
  undefined2 uVar1;
  short sVar2;
  byte bVar3;
  int *local_30 [4];
  uint local_20;
  undefined2 local_1c;
  uint local_1a;
  uint local_16;
  undefined2 local_12;
  undefined4 local_10;
  int *local_c;
  short local_8;
  undefined2 uStack_6;
  char cStack_5;
  
  bVar3 = (byte)param_2 & 1;
  _local_8 = CONCAT13((char)((param_2 & 0x40) >> 6),_local_8);
  uVar1 = *(undefined2 *)(*(int *)((int)this + 0x26) + 0x26);
  local_10 = 0;
  _local_8 = CONCAT22(uStack_6,uVar1);
  local_c = this;
  local_12 = FUN_0044aea0(bVar3,uVar1);
  local_16 = FUN_0044ae60(bVar3,0x14);
  local_1c = FUN_0044aea0(bVar3,1);
  local_1a = FUN_0044ae60(bVar3,param_2);
  local_20 = FUN_0044ae60(bVar3,0x17);
  (**(code **)(*param_1 + 0x158))(&local_20,0x14);
  sVar2 = 1;
  if (0 < local_8) {
    do {
      FUN_00430370(*(void **)((int)local_c + 0x26),(int)sVar2,local_30);
      if (local_30[0] == (int *)0x0) {
        FUN_00450d40(param_1,param_2 & 0xfffffeff | 0x200);
      }
      else {
        (**(code **)(*local_30[0] + 0xb8))();
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 <= local_8);
  }
  if (cStack_5 == '\0') {
    (**(code **)(*local_c + 0x1c))(0);
  }
  return;
}


