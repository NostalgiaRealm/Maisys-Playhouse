
/* ==== FUN_00421790 @ 00421790 ==== 
 * signature: undefined __thiscall FUN_00421790(void * this, int * param_1)
 * body: 00421790-004218ae
 */

void __thiscall FUN_00421790(void *this,int *param_1)

{
  short sVar1;
  int iVar2;
  void *this_00;
  short sVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_74 [9];
  undefined2 local_50;
  int local_4e;
  int local_4a;
  undefined **local_20 [3];
  short local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_004218af;
  *unaff_FS_OFFSET = &local_10;
  if ((*(int *)((int)this + 0xa8) != 0) && (*param_1 <= param_1[1])) {
    sVar3 = 1;
    local_20[0] = &PTR_FUN_004be070;
    local_8 = 0;
    FUN_00430500(local_20,0);
    if (0 < *(short *)(*(int *)((int)this + 0xa8) + 0xc)) {
      do {
        iVar2 = FUN_004308b0(*(void **)((int)this + 0xa8),sVar3);
        sVar1 = FUN_00430860(local_20,iVar2);
        if (sVar1 == -1) {
          FUN_004306b0(local_20,iVar2);
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 <= *(short *)(*(int *)((int)this + 0xa8) + 0xc));
    }
    sVar3 = 1;
    if (0 < local_14) {
      do {
        this_00 = (void *)FUN_004308b0(local_20,sVar3);
        if ((*(byte *)((int)this_00 + 0x1e) & 2) != 0) {
          FUN_004142c0(local_74,0x6a9,0,0,0);
          if (param_1[1] == *param_1) {
            local_50 = 1;
          }
          else {
            local_4a = param_1[1] + 1;
            local_50 = 0x11;
          }
          local_4e = *param_1 + 1;
          FUN_0046b770(this_00,(int)local_74);
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 <= local_14);
    }
    local_8 = 0xffffffff;
    FUN_004218b9();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


