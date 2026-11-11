
/* ==== FUN_00450310 @ 00450310 ==== 
 * signature: undefined __thiscall FUN_00450310(void * this, int param_1, int * param_2, int * param_3)
 * body: 00450310-00450403
 */

void __thiscall FUN_00450310(void *this,int param_1,int *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045042e;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc4;
  if ((*(byte *)(param_2 + 0xe) & 4) == 0) {
    sVar1 = FUN_00450440(this,param_1,param_2);
    local_1c = DAT_004d95c0;
    local_18 = DAT_004d95bc;
    if (*(int *)((int)this + 0x2a) != (int)sVar1) {
      if (sVar1 == 0) {
        if (param_3 == (int *)0x0) {
          FUN_00450780(this,param_2,(int *)0x0);
        }
        else {
          DAT_004d95c0 = 0;
          DAT_004d95bc = 0;
          AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_30);
          local_8 = 1;
          FUN_00450780(this,param_2,param_3);
          local_8 = 0xffffffff;
          FUN_00450438();
          DAT_004d95bc = local_18;
          DAT_004d95c0 = local_1c;
        }
      }
      else {
        iVar2 = FUN_00430190(*(int *)((int)this + 0x26));
        iVar2 = sVar1 * 0x10 + iVar2;
        *(int *)(iVar2 + -4) = *(int *)(iVar2 + -4) + 1;
        uVar3 = FUN_00430570(*(void **)(iVar2 + -8),(int)param_2);
        if ((char)uVar3 == '\0') {
          FUN_004306b0(*(void **)(iVar2 + -8),param_2);
        }
        FUN_004301f0(*(int *)((int)this + 0x26));
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


