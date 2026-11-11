
/* ==== __ArrayUnwind @ 00492800 ==== 
 * signature: void __stdcall __ArrayUnwind(void * param_1, uint param_2, int param_3, _func_void_void_ptr * param_4)
 * body: 00492800-0049284d
 * note: Library Function - Single Match  void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Library: Visual Studio 1998 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_004cd8f0;
  pcStack_10 = FUN_0049b880;
  *unaff_FS_OFFSET = &local_14;
  local_8 = 0;
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*param_4)(unaff_EDI);
  }
  *unaff_FS_OFFSET = local_14;
  return;
}


