
/* ==== FUN_00407970 @ 00407970 ==== 
 * signature: undefined __fastcall FUN_00407970(void * param_1)
 * body: 00407970-004079fe
 */

void __fastcall FUN_00407970(void *param_1)

{
  char cVar1;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_20 [12];
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00407a0b;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd4;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_20);
  local_8 = 1;
  cVar1 = (**(code **)(**(int **)((int)param_1 + 0x2a) + 0x104))();
  if (((cVar1 == '\0') && (*(char *)((int)param_1 + 0xa6) != '\0')) &&
     (*(char *)((int)param_1 + 0xa3) == '\0')) {
    if ((*(char *)((int)param_1 + 0xa7) != '\0') && (*(char *)((int)param_1 + 0xa4) == '\0')) {
      FUN_004070a0((int)param_1);
    }
    FUN_004073b0(param_1);
  }
  local_8 = 0xffffffff;
  FUN_00407a15();
  *unaff_FS_OFFSET = local_10;
  return;
}


