
/* ==== `eh_vector_destructor_iterator' @ 00492770 ==== 
 * signature: void __stdcall `eh_vector_destructor_iterator'(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)
 * body: 00492770-004927df
 * note: Library Function - Single Match  void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void *))  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Library: Visual Studio 1998 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_004cd8e0;
  pcStack_10 = FUN_0049b880;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*param_4)(unaff_EDI);
  }
  local_8 = 0xffffffff;
  FUN_004927e0();
  *unaff_FS_OFFSET = local_14;
  return;
}


