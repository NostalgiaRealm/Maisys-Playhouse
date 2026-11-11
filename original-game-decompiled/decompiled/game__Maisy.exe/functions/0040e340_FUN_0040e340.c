
/* ==== FUN_0040e340 @ 0040e340 ==== 
 * signature: undefined __fastcall FUN_0040e340(int param_1)
 * body: 0040e340-0040e428
 */

void __fastcall FUN_0040e340(int param_1)

{
  short sVar1;
  int iVar2;
  void *this;
  short sVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_74 [21];
  undefined **local_20 [3];
  short local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_0040e429;
  *unaff_FS_OFFSET = &local_10;
  if (*(int *)(param_1 + 0xa8) != 0) {
    sVar3 = 1;
    local_20[0] = &PTR_FUN_004be070;
    local_8 = 0;
    FUN_00430500(local_20,0);
    if (0 < *(short *)(*(int *)(param_1 + 0xa8) + 0xc)) {
      do {
        iVar2 = FUN_004308b0(*(void **)(param_1 + 0xa8),sVar3);
        sVar1 = FUN_00430860(local_20,iVar2);
        if (sVar1 == -1) {
          FUN_004306b0(local_20,iVar2);
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 <= *(short *)(*(int *)(param_1 + 0xa8) + 0xc));
    }
    sVar3 = 1;
    if (0 < local_14) {
      do {
        this = (void *)FUN_004308b0(local_20,sVar3);
        if ((*(byte *)((int)this + 0x1e) & 2) != 0) {
          FUN_004142c0(local_74,0x6a9,0,0,0);
          FUN_0046b770(this,(int)local_74);
        }
        sVar3 = sVar3 + 1;
      } while (sVar3 <= local_14);
    }
    local_8 = 0xffffffff;
    FUN_0040e433();
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


