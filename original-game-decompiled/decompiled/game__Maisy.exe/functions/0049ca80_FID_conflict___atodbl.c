
/* ==== FID_conflict:__atodbl @ 0049ca80 ==== 
 * signature: int __cdecl FID_conflict:__atodbl(_CRT_FLOAT * _Result, char * _Str)
 * body: 0049ca80-0049cab4
 * note: Library Function - Multiple Matches With Different Base Names  __atodbl  __atoflt  Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Different Base Names
    __atodbl
    __atoflt
   
   Library: Visual Studio 1998 Release */

int __cdecl FID_conflict___atodbl(_CRT_FLOAT *_Result,char *_Str)

{
  INTRNCVT_STATUS IVar1;
  char *local_10;
  _LDBL12 local_c;
  
  ___strgtold12(&local_c,&local_10,_Str,0,0,0,0);
  IVar1 = FID_conflict___ld12tod(&local_c,(_CRT_DOUBLE *)_Result);
  return IVar1;
}


