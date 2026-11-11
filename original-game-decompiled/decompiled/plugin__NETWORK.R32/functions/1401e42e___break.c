
/* ==== __break @ 1401e42e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401e42e-1401e42e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


