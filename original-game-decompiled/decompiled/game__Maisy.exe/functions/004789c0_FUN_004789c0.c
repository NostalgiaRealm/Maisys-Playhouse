
/* ==== FUN_004789c0 @ 004789c0 ==== 
 * signature: undefined __thiscall FUN_004789c0(void * this, int * param_1, short param_2, short param_3)
 * body: 004789c0-00478af3
 */

void __thiscall FUN_004789c0(void *this,int *param_1,short param_2,short param_3)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 unaff_EBP;
  short sVar4;
  char local_210 [256];
  char local_110 [256];
  void *local_10;
  uint local_c;
  ushort local_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  uStack_4 = (undefined2)unaff_EBP;
  uStack_2 = (undefined2)((uint)unaff_EBP >> 0x10);
  local_10 = this;
  if (1 < param_2) {
    puVar1 = (uint *)((int)this + 0x5a);
    (**(code **)(*param_1 + 0x130))(puVar1,4);
    FUN_00481bc0(param_1,puVar1,*puVar1);
  }
  sVar4 = 1;
  if (0 < param_3) {
    pcVar2 = *(code **)(*param_1 + 0x130);
    do {
      (*pcVar2)(&local_c,4);
      FUN_00481bc0(param_1,&local_c,local_c);
      (*pcVar2)(&local_6,2);
      FUN_00481b90(param_1,&local_6,local_6);
      if (local_6 != 0) {
        (*pcVar2)(local_210,local_6);
      }
      local_210[local_6] = '\0';
      (*pcVar2)(&local_6,2);
      FUN_00481b90(param_1,&local_6,local_6);
      if (local_6 != 0) {
        (*pcVar2)(local_110,local_6);
      }
      uVar3 = local_c;
      local_110[local_6] = '\0';
      if (sVar4 < 2) {
        FUN_004792b0();
      }
      else {
        FUN_00478d60(local_10,local_210,0,(short)uVar3,local_110,(char *)0x0);
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 <= param_3);
  }
  return;
}


