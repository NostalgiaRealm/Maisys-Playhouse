
/* ==== CDocManager::`scalar_deleting_destructor' @ 004bcb8a ==== 
 * signature: void * __thiscall `scalar_deleting_destructor'(CDocManager * this, uint param_1)
 * body: 004bcb8a-004bcba7
 * note: Library Function - Single Match  public: virtual void * __thiscall CDocManager::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CDocManager::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 1998 Release */

void * __thiscall CDocManager::_scalar_deleting_destructor_(CDocManager *this,uint param_1)

{
  ~CDocManager(this);
  if ((param_1 & 1) != 0) {
    FUN_004a602d(this);
  }
  return this;
}


