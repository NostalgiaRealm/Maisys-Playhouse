
/* ==== `eh_vector_constructor_iterator' @ 004926e0 ==== 
 * signature: void __stdcall `eh_vector_constructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4, _func_void_void_ptr * param_5)
 * body: 004926e0-0049274f
 * note: Library Function - Single Match  void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void *),void (__thiscall*)(void *))  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall `eh vector constructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *),void (__thiscall*)(void *))
   
   Library: Visual Studio 1998 Release */

void _eh_vector_constructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5)

{
  void *unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  undefined4 local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_004cd8d0;
  pcStack_10 = FUN_0049b880;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  local_20 = 0;
  if (0 < param_3) {
    do {
      (*param_4)(unaff_EDI);
      local_20 = local_20 + 1;
    } while (local_20 < param_3);
  }
  local_8 = 0xffffffff;
  FUN_00492750();
  *unaff_FS_OFFSET = local_14;
  return;
}


