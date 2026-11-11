
/* ==== FID_conflict:_ValidateRead @ 0049c190 ==== 
 * signature: bool __cdecl FID_conflict:_ValidateRead(void * param_1, UINT_PTR param_2)
 * body: 0049c190-0049c1af
 * note: Library Function - Multiple Matches With Different Base Names  int __cdecl _ValidateRead(void const *,unsigned int)  int __cdecl _ValidateWrite(void *,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _ValidateRead(void const *,unsigned int)
    int __cdecl _ValidateWrite(void *,unsigned int)
   
   Library: Visual Studio 1998 Release */

bool __cdecl FID_conflict__ValidateRead(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}


