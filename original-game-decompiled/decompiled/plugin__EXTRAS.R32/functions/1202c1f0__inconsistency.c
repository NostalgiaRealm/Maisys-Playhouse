
/* ==== _inconsistency @ 1202c1f0 ==== 
 * signature: void __cdecl _inconsistency(void)
 * body: 1202c1f0-1202c230
 * note: Library Function - Single Match  void __cdecl _inconsistency(void)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __cdecl _inconsistency(void)
   
   Library: Visual Studio 1998 Release */

void __cdecl _inconsistency(void)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_12036358;
  pcStack_10 = FUN_1202c2d4;
  *unaff_FS_OFFSET = &local_14;
  if (PTR_terminate_12038400 != (undefined *)0x0) {
    local_8 = 1;
    (*(code *)PTR_terminate_12038400)();
  }
  local_8 = 0xffffffff;
  terminate();
  *unaff_FS_OFFSET = local_14;
  return;
}


