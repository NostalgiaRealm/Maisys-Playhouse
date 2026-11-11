
/* ==== CMapStringToPtr::Lookup @ 004a5e2d ==== 
 * signature: int __thiscall Lookup(CMapStringToPtr * this, char * param_1, void * * param_2)
 * body: 004a5e2d-004a5e59
 * note: Library Function - Single Match  public: int __thiscall CMapStringToPtr::Lookup(char const *,void * &)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: int __thiscall CMapStringToPtr::Lookup(char const *,void * &)const 
   
   Library: Visual Studio 1998 Release */

int __thiscall CMapStringToPtr::Lookup(CMapStringToPtr *this,char *param_1,void **param_2)

{
  undefined4 *puVar1;
  uint local_4;
  
  puVar1 = GetAssocAt(this,(uchar *)param_1,&local_4);
  if (puVar1 != (undefined4 *)0x0) {
    *param_2 = (void *)puVar1[3];
  }
  return (uint)(puVar1 != (undefined4 *)0x0);
}


