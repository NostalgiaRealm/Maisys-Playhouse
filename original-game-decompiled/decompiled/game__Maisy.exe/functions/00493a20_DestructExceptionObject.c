
/* ==== DestructExceptionObject @ 00493a20 ==== 
 * signature: void __cdecl DestructExceptionObject(EHExceptionRecord * param_1, uchar param_2)
 * body: 00493a20-00493a69
 * note: Library Function - Single Match  void __cdecl DestructExceptionObject(struct EHExceptionRecord *,unsigned char)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __cdecl DestructExceptionObject(struct EHExceptionRecord *,unsigned char)
   
   Library: Visual Studio 1998 Release */

void __cdecl DestructExceptionObject(EHExceptionRecord *param_1,uchar param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_004cd938;
  pcStack_10 = FUN_0049b880;
  *unaff_FS_OFFSET = &local_14;
  if ((param_1 != (EHExceptionRecord *)0x0) &&
     (*(void **)(*(int *)(param_1 + 0x1c) + 4) != (void *)0x0)) {
    local_8 = 0;
    _CallMemberFunction0(*(void **)(param_1 + 0x18),*(void **)(*(int *)(param_1 + 0x1c) + 4));
  }
  *unaff_FS_OFFSET = local_14;
  return;
}


