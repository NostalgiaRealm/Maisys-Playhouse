
/* ==== __store_str @ 11030b10 ==== 
 * signature: undefined __cdecl __store_str(char * param_1, int * param_2, int * param_3)
 * body: 11030b10-11030b39
 * note: Library Function - Single Match  __store_str  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __store_str
   
   Library: Visual Studio 1998 Release */

void __cdecl __store_str(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  for (; (iVar1 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    iVar1 = *param_3 + -1;
    *param_3 = iVar1;
  }
  return;
}


