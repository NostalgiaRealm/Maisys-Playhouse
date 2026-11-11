
/* ==== CPlex::Create @ 004a5833 ==== 
 * signature: CPlex * __stdcall Create(CPlex * * param_1, uint param_2, uint param_3)
 * body: 004a5833-004a5854
 * note: Library Function - Single Match  public: static struct CPlex * __stdcall CPlex::Create(struct CPlex * &,unsigned int,unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: static struct CPlex * __stdcall CPlex::Create(struct CPlex * &,unsigned int,unsigned
   int)
   
   Library: Visual Studio 1998 Release */

CPlex * CPlex::Create(CPlex **param_1,uint param_2,uint param_3)

{
  CPlex *pCVar1;
  
  pCVar1 = (CPlex *)FUN_004a5fed(param_3 * param_2 + 4);
  *(CPlex **)pCVar1 = *param_1;
  *param_1 = pCVar1;
  return pCVar1;
}


