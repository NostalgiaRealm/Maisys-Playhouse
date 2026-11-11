
/* ==== __break @ 00469695 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00469695-00469695
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


