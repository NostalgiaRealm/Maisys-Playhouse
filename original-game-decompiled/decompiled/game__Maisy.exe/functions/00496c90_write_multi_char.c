
/* ==== write_multi_char @ 00496c90 ==== 
 * signature: undefined __cdecl write_multi_char(uint param_1, int param_2, FILE * param_3, int * param_4)
 * body: 00496c90-00496cc0
 * note: Library Function - Single Match  _write_multi_char  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _write_multi_char
   
   Library: Visual Studio 1998 Release */

void __cdecl write_multi_char(uint param_1,int param_2,FILE *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    write_char(param_1,param_3,param_4);
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}


