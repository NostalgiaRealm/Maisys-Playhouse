
/* ==== write_string @ 00496cd0 ==== 
 * signature: undefined __cdecl write_string(char * param_1, int param_2, FILE * param_3, int * param_4)
 * body: 00496cd0-00496d06
 * note: Library Function - Single Match  _write_string  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _write_string
   
   Library: Visual Studio 1998 Release */

void __cdecl write_string(char *param_1,int param_2,FILE *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    write_char((int)*param_1,param_3,param_4);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while (*param_4 != -1);
  return;
}


