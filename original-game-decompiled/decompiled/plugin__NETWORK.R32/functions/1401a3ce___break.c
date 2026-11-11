
/* ==== __break @ 1401a3ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a3ce-1401a3ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


