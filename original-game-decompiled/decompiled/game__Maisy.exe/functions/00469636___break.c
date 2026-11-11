
/* ==== __break @ 00469636 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00469636-00469636
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


