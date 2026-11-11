
/* ==== FUN_00461a40 @ 00461a40 ==== 
 * signature: undefined __fastcall FUN_00461a40(int * param_1)
 * body: 00461a40-00461b1b
 */

void __fastcall FUN_00461a40(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_24 [15];
  undefined1 local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00461b28;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd0;
  FUN_0046da90(param_1,'\x01','\x01');
  DAT_004da3a0 = *(undefined4 *)((int)param_1 + 0x52);
  local_15 = DAT_004db9c4;
  DAT_004da3ac = param_1;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_24);
  local_8 = 1;
  DAT_004db9c4 = 0;
  iVar1 = *param_1;
  cVar2 = (**(code **)(iVar1 + 0x138))();
  if ((cVar2 != '\0') && (*(char *)((int)param_1 + 0xca) != '\x01')) {
    cVar2 = (**(code **)(iVar1 + 0x350))();
    if ((cVar2 != '\0') && ((DAT_004e0204 & 8) == 0)) {
      (**(code **)(iVar1 + 0x378))();
    }
  }
  (**(code **)(iVar1 + 0x370))(*(char *)((int)param_1 + 0xca) == '\x01');
  local_8 = 0xffffffff;
  FUN_00461b32();
  DAT_004db9c4 = local_15;
  *unaff_FS_OFFSET = local_10;
  DAT_004da3ac = (int *)0x0;
  DAT_004da3a0 = 0;
  return;
}


